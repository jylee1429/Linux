#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


#define TIMES 3
#define SLEEP_DURATION 3

int main()
{
	int i = 0;

	for( i = 0; i < TIMES; i++){
		printf("raspbian tracing \n");
		sleep(SLEEP_DURATION);
	}

	exit(EXIT_SUCCESS);

	return 0;
}

