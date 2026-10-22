#include <stdio.h>
struct Student {
int id;
float marks; 
};
void display(int id, float marks)
{ 
	printf("ID: %d, Marks: %.2f\n", id, marks); 
}
int main() 
{ 
	struct Student s = {101, 95.5}; 
	display(s.id, s.marks); 
	return 0; 
}
