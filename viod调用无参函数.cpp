#include<stdio.h>
int main()
{
	void star();
    void message();

	star();
	star();
	message();
    star();
	star();
    return 0;
}

void star()
{
	printf("*****************\n");
}

void message()
{
	printf("How do you do\n");
}