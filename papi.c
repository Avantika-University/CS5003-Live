#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
printf("hi cs5003 students I am your Instructor (pid=%d)",(int) getpid());
int cr=fork();
if (cr<0){
fprintf(stderr,"fork failed \n");
exit(1);

}else if(cr==0){
printf("hello i am student (pid=%d)\n", (int) getpid());
}else
{
printf("hello i am instructor of %d (pid:%d)\n",cr,(int) getpid());

		}
	return 0;
}
