#include <stdio.h>
struct Student 
{ 
	int id; 
	char name[50]; 
	float marks; 
}; 
int main() 
{
       	struct Student student1 = {101, "Alice", 85.5};
       	struct Student student2; 
	student2 = student1; 
	student2.id = 202; 
	student2.name[0] = 'E'; 
	student2.marks = 95.5; 
	printf("Student 1 Name: %s\n", student1.name); 
	printf("Student 1 Marks: %.2f\n", student1.marks); 
	printf("Student 2 Name: %s\n", student2.name); 
	printf("Student 2 Marks: %.2f\n", student2.marks); 
	return 0;
}
