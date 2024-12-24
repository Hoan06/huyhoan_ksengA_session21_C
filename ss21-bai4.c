#include <stdio.h>

int main(){
	FILE *fptr;
	char text[50];
	fptr= fopen("bt01.txt","r");
	fgets(text,50,fptr);
	printf("dong dau tien trong file la %s ",text);
	fclose(fptr);
	return 0;
}

