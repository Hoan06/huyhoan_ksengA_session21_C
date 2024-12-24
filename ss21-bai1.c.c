#include <stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	char text[100];
	printf("nhap vao mot chuoi ");
	fgets(text,100,stdin);
	fprintf(fptr,"%s",text);
	fclose(fptr);
	return 0;
}

