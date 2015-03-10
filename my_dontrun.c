#include <stdio.h>
#include <signal.h>

void ding(int);

int main()
{
	signal(SIGINT,ding);
	while(1)
	{
		puts("look around you ");
		/*puts("you dont listen \n");*/
	}
	return 0;
}

void ding(int signum)
{
	puts("nope ");
}
