#include <stdio.h>


/* 
The first lesson or 'chapter' is detailed and encouraging, with acute explainations which summarize and explain the topic in the best
way possible.
*/


int main(void){
	for(int i = 0; i < 10; i++){
		printf("-");
	}
	printf("\n");
	for(int i = 0; i < 4; i++){
		printf("|");
		for (int i = 0; i < 8; i++){
			printf(" ");
		}
		printf("|\n");
	}
	for(int i = 0; i < 10; i++){
		if (i == 9){
			printf("-\n");
		} else {
			printf("-");
		}
	}
}
