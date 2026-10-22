#include <stdio.h>
struct Student
{
       	int id;
       	float marks;
};
struct Student createStudent(int id, float marks) 
{ 
	struct Student s; 
	s.id = id; 
	s.marks = marks;
       	return s; 
}
int main() 
{
       	struct Student s = createStudent(101, 95.50); 
	printf("ID: %d, Marks: %.2f\n", s.id, s.marks);
       	return 0;
}
