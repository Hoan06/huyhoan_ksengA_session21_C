#include <stdio.h>

struct Students{
	char id[15];
	char name[50];
	int age;
};

int main(){
	struct Students students[100];
	int size,i;
	FILE *fptr;
	fptr= fopen("students.txt","r");
	i=0;
	while(fscanf(fptr,"%s %s %d",students[i].id, students[i].name, &students[i].age)!=EOF){
		i++;
	}
	size=i;
	fclose(fptr);
	for (int i=0;i<size;i++){
		printf("thong tin sinh vien thu %d \n",i+1);
		printf("ID: %s\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
	}
	
	return 0;
}

