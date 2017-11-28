#include <stdio.h>
#include <string.h>

int main(void){
	char inString[1024];
	printf("type the text to convert and hit enter: \n");
	gets(inString);
	int stringLength = strlen(inString);
	for(int i = 0; i < stringLength; i++){
		printf("Char: %c\n", inString[i] );
		printf("Pos: %i\n", i );
	}

	return 0;
}