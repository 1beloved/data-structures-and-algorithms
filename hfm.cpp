#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct Node {
	char data;
	int frequency;
	struct Node* left;
	struct Node* right;
} Node;
 
Node* createNode(char data, int frequency) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->frequency = frequency;
	node->left = NULL;
	node->right = NULL;
	return node;
}
 
Node* buildHuffmanTree(char* inputText) {
	int charCount[256] = { 0 };
	int length = strlen(inputText);
	int i;
	
	for (i = 0; i < length; i++) {
		charCount[(int)inputText[i]]++;
	}
	
	Node* nodes[256];
	int nodeCount = 0;
	for (i = 0; i < 256; i++) {
		if (charCount[i] > 0) {
			nodes[nodeCount] = createNode((char)i, charCount[i]);
			nodeCount++;
		}
	}
	
	while (nodeCount > 1) {
		int minFrequency1 = length + 1;
		int minFrequency2 = length + 1;
		int index1 = -1;
		int index2 = -1;
		for (i = 0; i < nodeCount; i++) {
			if (nodes[i]->frequency < minFrequency1) {
				minFrequency2 = minFrequency1;
				index2 = index1;
				minFrequency1 = nodes[i]->frequency;
				index1 = i;
			} else if (nodes[i]->frequency < minFrequency2) {
				minFrequency2 = nodes[i]->frequency;
				index2 = i;
			}
		}
		
		Node* parent = createNode('\0', nodes[index1]->frequency + nodes[index2]->frequency);
		parent->left = nodes[index1];
		parent->right = nodes[index2];
		
		nodes[index2] = parent;
		nodes[index1] = nodes[nodeCount - 1];
		nodeCount--;
	}
	
	return nodes[0];
}
 
void printHuffmanCodes(Node* root, int code[], int top, int codeTable[][256], int codeLengths[]) {
	if (root->left) {
		code[top] = 0;
		printHuffmanCodes(root->left, code, top + 1, codeTable, codeLengths);
	}
	if (root->right) {
		code[top] = 1;
		printHuffmanCodes(root->right, code, top + 1, codeTable, codeLengths);
	}
	
	if (root->left == NULL && root->right == NULL) {
		codeLengths[(int)root->data] = top;
		printf("%c:",root->data);
		for (int i = 0; i < top; i++) {
			codeTable[(int)root->data][i] = code[i];
			printf("%d",code[i]);
		}
		printf("\n");
	}
}
 
 
 
void encodeText(Node* root, char* inputText, char encodedText[], int codeTable[][256], int codeLengths[]) {
	int length = strlen(inputText);
	int i, j;
	for (i = 0; i < length; i++) {
		char character = inputText[i];
		int length = codeLengths[(int)character];
		for (j = 0; j < length; j++) {
			encodedText[strlen(encodedText)] = codeTable[(int)character][j] + '0';
		}
	}
}
 
void decodeText(Node* root, char* encodedText, char* decodedText) {
	int length = strlen(encodedText);
	int i = 0;
	
	while (i < length) {
		Node* current = root;
		
		while (current->left != NULL || current->right != NULL) {
			if (encodedText[i] == '0') {
				current = current->left;
			} else if (encodedText[i] == '1') {
				current = current->right;
			}
			i++;
		}
		
		decodedText[strlen(decodedText)] = current->data;
	}
	
	decodedText[strlen(decodedText)] = '\0';
}
 
 
 
int main() {
	char inputText[] = "abcdefg";
	Node* root = buildHuffmanTree(inputText);
	int code[256];
	int top = 0;
 
	
	int codeTable[256][256] = {0};
	int codeLengths[256] = {0};
	
	printf("Huffman Codes:\n");
	printHuffmanCodes(root, code, top, codeTable, codeLengths);
	printf("\n");
	printf("InputText:\n%s\n\n",inputText);
	// 编码文本
	char encodedText[1000] = "";
	encodeText(root, inputText, encodedText, codeTable, codeLengths);
	printf("Encoded Text: \n%s\n\n", encodedText);
	
	// 解码文本
	char decodedText[1000] = "";
	decodeText(root, encodedText, decodedText);
	printf("Decoded Text: \n%s\n\n", decodedText);
	
	return 0;
	
}
