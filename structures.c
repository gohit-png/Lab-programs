#include<stdio.h>
struct student{
	int rollnumber;
	char name[20];
	char section[20];
	char dept[10];
	float fees;
	int totalmarks;
};
int main()
{
	int i;
	struct student stud1,stud2;
	printf("Enter Roll of student 1\n");
	scanf("%d",&stud1.rollnumber);
	printf("Enter name of student 1\n");
	scanf("%s",stud1.name);
	printf("Enter the Section of student 1\n");
	scanf("%s",stud1.section);
	printf("Enter the department of student 1\n");
	scanf("%s",stud1.dept);
	printf("Enter the fees of student 1\n");
	scanf("%f",&stud1.fees);
	printf("Enter total marks of student 1\n");
	scanf("%d",&stud1.totalmarks);
	printf("Enter Roll of student 2\n");
	scanf("%d",&stud2.rollnumber);
	printf("Enter name of student 2\n");
	scanf("%s",stud2.name);
	printf("Enter the Section of student 2\n");
	scanf("%s",stud2.section);
	printf("Enter the department of student 2\n");
	scanf("%s",stud2.dept);
	printf("Enter the fees of student 2\n");
	scanf("%f",&stud2.fees);
	printf("Enter total marks of student 2\n");
	scanf("%d",&stud2.totalmarks);
	printf("Roll Number of student 1: %d\n",stud1.rollnumber);
	printf("Name of student 1: %s\n",stud1.name);
	printf("Section of student 1: %s\n",stud1.section);
	printf("Department of student1: %s\n",stud1.dept);
	printf("Fees of student1 %f\n",stud1.fees);
	printf("Total marks of student 1: %d\n",stud1.totalmarks);
	printf("Roll Number of student 2: %d\n",stud2.rollnumber);
	printf("Name of student 2: %s\n",stud2.name);
	printf("Section of student 2: %s\n",stud2.section);
	printf("Department of student 2: %s\n",stud2.dept);
	printf("Fees of student2: %f\n",stud2.fees);
	printf("Total marks of student 2: %d\n",stud2.totalmarks);
	if(stud1.totalmarks>stud2.totalmarks)
	{
		printf("Student 1 secured highest marks");
	}
	else if(stud1.totalmarks==stud2.totalmarks)
	{
		printf("Student 1 and 2 secured same marks");
	}
	else
	{
		printf("Student 2 secured highest marks");
	}
	return 0;
}
