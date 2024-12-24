#include <stdio.h>

int main(){
	FILE *fptr;
	char text;
	fptr= fopen("bt01.txt","r");
	text=fgetc(fptr);
	printf("ki tu dau tien trong file la %c ",text);
	fclose(fptr);
	return 0;
}

