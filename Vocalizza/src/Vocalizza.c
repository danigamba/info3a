/*
 ============================================================================
 Name        : Vocalizza.c

 Author      : Daniele
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char* vocalizza_ric(char* str, int len){
	char* b = malloc(len*sizeof(char));
	if(!str[0]){
		b[0] = '\0';
		return b;
	}
	char* tmp = vocalizza_ric(str+1, len);
	if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o'  || str[0]=='u'){
		sprintf(b, "%c%s", str[0], tmp);
		free(tmp);
		return b;
	}else{
		sprintf(b, "%s", tmp);
		free(tmp);
		return b;
	}
}

int main(void) {
	char* str = "angelo\0";
	printf("%s", vocalizza_ric(str, 7));
	return EXIT_SUCCESS;
}
