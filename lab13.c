#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	char name[50];
	int age;
	float gpa;
	char major[50];
};

void printStudents(struct Student *arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("\nStudent %d:\n", i + 1);
	    printf("  Name:  %s\n", arr[i].name);
	    printf("  Age:   %d\n", arr[i].age);
        printf("  GPA:   %.2f\n", arr[i].gpa);
        printf("  Major: %s\n", arr[i].major);
	}
}


int main(void)
{
	int n = 2;
	struct Student myStudents[n];
	
	    for (int i = 0; i < n; i++)
	     {
	        printf("Enter name:  ");
	        scanf("%s", myStudents[i].name);
	        
	        printf("Enter age:   "); 
	        scanf("%d", &myStudents[i].age);
	        
	        printf("Enter GPA:   "); 
	        scanf("%f", &myStudents[i].gpa);
	        
	        printf("Enter major: "); 
	        scanf("%s", myStudents[i].major);

	        printf("\n");
	    }
	
	    printf("\nStudent Records: \n");
	    printStudents(myStudents, n);
	
	    return 0;

	
}
