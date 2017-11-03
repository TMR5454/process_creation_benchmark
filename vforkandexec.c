#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){
	int i;
	pid_t pid;
	//int status;
	
	for(i=0;i<MAXLOOP;i++){
		pid =vfork();
		if(pid == 0){
			execl("./test", "test", NULL);
			//printf("chile process\n");
			return 0;
		}
		if(pid > 0){
			//printf("wait start\n");
			//waitpid(pid, &status, 0); //子プロセスのプロセスIDを指定して、終了を待つ	
			//printf("wait end\n");
		}
	}
	printf("end\n");
	return 0;
}
