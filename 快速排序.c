#include <stdio.h>
public class QuickSort {
    private int[] array;
    public QuickSort(int[] array) {
        this.array = array;
    }
    public void sort() {
        quickSort(array, 0, array.length - 1);
    }
    public void print() {
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }
}
   
    /**
     * µÝ¹éÅÅÐò
     * @param src
     * @param begin
     * @param end
     */
    private void quickSort(int src[], int begin, int end) {//3,2,1,8,0
        if (begin < end) {
            int key = src[begin]; //key=3
            int i = begin;//i=0
            int j = end;//j=4
            while (i < j) {
                while (i < j && src[j] > key) {
                    j--;
                }
                if (i < j) {
                    src[i] = src[j];
                    i++;
                }
                while (i < j && src[i] < key) {
                    i++;
                }
                if (i < j) {
                    src[j] = src[i];
                    j--;
                }
            }
            src[i] = key;
            quickSort(src, begin, i - 1);
            quickSort(src, i + 1, end);
        }
    }


