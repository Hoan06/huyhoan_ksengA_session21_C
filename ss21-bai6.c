#include <stdio.h>

int main(){
	FILE *fptr1;
	FILE *fptr2;
	char text;
	fptr1= fopen("bt01.txt","r");
	fptr2= fopen("bt06.txt","w");
	
	while ((text=fgetc(fptr1))!=EOF){
		fputc(text,fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}

