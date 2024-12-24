#include <stdio.h>

int main(){
	FILE *fptr;
	int size;
	fptr= fopen("bt05.txt","w");
	char text[100];
	printf("nhap vao so dong muon them ");
	scanf("%d",&size);
	getchar();
	for (int i=0;i<size;i++){
		printf("nhap noi dung dong %d \n",i+1);
		fgets(text,100,stdin);
		fprintf(fptr,"%s",text);
	}
	fclose(fptr);
	fptr= fopen("bt05.txt","r");
	while (fgets(text,sizeof(text),fptr)){
		printf("%s",text);
	}
	fclose(fptr);
	return 0;
}
