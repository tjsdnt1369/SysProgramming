#include <stdio.h>
#include <unistd.h>
/* 부모 프로세스가 자식 프로세스를 생성하고 서로 다른 메시지를 프린트한다. */
int main() 
{
	int pid;
	pid = fork();
	if(pid ==0){ // 자식 프로세스
		printf("[Child] : Hello, world pid=%d\n",getpid());
		printf("Child 1\n");
		printf("Child 2\n");
		printf("Child 3\n");
		printf("Child 4\n");
		printf("Child 5\n");
	}
	else { // 부모 프로세스
		printf("[Parent] : Hello, world pid=%d\n",getpid());
		printf("p 1\n");
		printf("p 2\n");
		printf("p 3\n");
		printf("p 4\n");
		printf("p 5\n");
	}
}
