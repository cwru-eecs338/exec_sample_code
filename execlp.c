#include <unistd.h>
#include <stdio.h>

int main(){
	int ret;
	if(fork()==0){
		if((ret=execlp("ps","ps","-ef",NULL))){
			printf("Execlp error\n");
		}
	}
}
