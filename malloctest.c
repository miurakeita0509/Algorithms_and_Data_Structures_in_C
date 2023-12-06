#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main (void){
	unsigned num = 1920 * 1080 * 400;
	int *img = (int*) malloc(sizeof(int) * num);
	
	for(int i = 0; i < num; i++){
		img[i] = i;
	}

	unsigned num2 = 1920 * 1080 * 400;
	int *img2 = (int*) malloc(sizeof(int) * num2);
	
	for(int i = 0; i < num; i++){
		img2[i] = i;
	}


    sleep(20);
	free(img);

	return 0;

}