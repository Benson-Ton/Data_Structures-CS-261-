#include <stdio.h>
#include <stdlib.h>

struct student

int main() {
	int* n_ptr = malloc(sizeof(int));
	*n_ptr =13;

	printf("== *n_ptr: %d\n", *n_ptr);
	printf("== n_ptr: %p\n", n_ptr);

	double* array = malloc(1000 * sizeof(double));

	int i;
	for (i = 0; i < 1000; i++){
		array[i] = i;
	}

	struct student* s = malloc(sizeof(struct student));
	// s->name == (*s).name 
	s->name = = malloc(16 * sizeof(char));
	s->id = 9333333;
	s->gpa = 3.0;

	// Sizeof : Grab memory from the heap and store memory from the heap. 
	struct student* students = malloc(2 * sizeof(struct student));
	sutdent[0].name = "Rey";
	student[1].name = malloc(16 * sizeof(char));

	struct student** student_ptrs = malloc(10 * sizeof(struct student*));
	for(i = 0; i < 10; i++){
		student_ptrs[i] = malloc(sizeof(struct student));
		student_ptrs[i] = create_student();
	}




// FREEING MEMORY

	free(n_ptr);
	free(array);
	//free(NULL);

	free(s->name);
	free(s);

	free(students[1].name);
	free(students);

	for (int i = 0; i < 10; ++i)
	{
			free(student_ptrs[i]);
	}
	free(student_ptrs);

}