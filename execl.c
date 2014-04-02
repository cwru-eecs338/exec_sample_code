#include <stdio.h>
#include <unistd.h>

int main(){
	if(fork()==0){
		if(execl("/bin/ps","ps","-ef",NULL)<0){
			printf("Execl error\n");
		}
	}
}
