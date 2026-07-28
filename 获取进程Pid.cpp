#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t pid = getpid(); // 获取当前进程的PID
	printf("当前进程的PID是: %d\n", pid);
	return 0;
	
	
}
