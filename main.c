#include <stdio.h> 
#include <helpers/vector.h>
#include <compiler.h>

int main()
{
	struct vector* vec = vector_create(sizeof(int));
	int x = 50;
	vector_push(vec, &x);


	x = 30;

	vector_push(vec, &x);
	
	vector_set_peek_pointer(vec, 0);

	int* ptr = vector_peek(vec);
	
	while(ptr) 
	{
		printf("%i\n", *ptr);
		ptr = vector_peek(vec);
	}

	int res = compile_file("./test.c", ".test", 0);
	if (res == COMPILER_FILE_COMPILED_OK)
	{
		printf("Everthing went good");
	}
	else if (res == COMPILER_FAILED_WITH_ERRORS)
	{
		printf("Compiler failed");
	}
	else 
	{
		printf("Unkow response from compile file");

	}

	printf("Hola\n");
	return 0;
}