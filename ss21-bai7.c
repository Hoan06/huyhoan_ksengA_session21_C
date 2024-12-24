#include <stdio.h>

struct Students{
	char id[15];
	char name[50];
	int age;
};

int main(){
	int size;
	struct Students students[100];
	FILE *fptr;
	fptr= fopen("students.txt","w");
	printf("moi ban nhap so luong sinh vien ");
	scanf("%d",&size);
	getchar();
	for (int i=0;i<size;i++){
		printf("thong tin sinh vien thu %d \n",i+1);
		printf("nhap id ");
		fgets(students[i].id,15,stdin);
		students[i].id[strcspn(students[i].id, "\n")] = 0;
		printf("nhap ten ");
		fgets(students[i].name,50,stdin);
		students[i].name[strcspn(students[i].name, "\n")] = 0;
		printf("nhap tuoi ");
		scanf("%d",&students[i].age);
		getchar();
		fprintf(fptr,"%s"" %s"" %d\n",students[i].id,students[i].name,students[i].age);
	}
	fclose(fptr);
	return 0;
}

