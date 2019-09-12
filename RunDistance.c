#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int run = 1; 
	int walk = 4; 
	int jog = 2; 
	int blocks; 
	char choice[9]; 
	int w; 
	int j; 
	int r; 
	
	do 
	{
		printf("How many blocks would you like to go today?: ");
		scanf("%d", &blocks);  
	}
	while (blocks > 0);

	do 
	{
		printf("Will you walk, jog, or run today?: "); 
		scanf("%s", choice); 
	}
	while (isalpha(choice[0]));

	if (choice[0] == walk)
	{
		w = walk*blocks;
		printf("It will take you %d minutes to go %d blocks", w, blocks); 
	}
	else if (choice[0] == jog)
	{
		j = jog*blocks; 
		printf("It will take you %d minutes to go %d blocks", j, blocks); 
	}
	else (choice[0] == run);
	{
		r = run*blocks; 
		printf("It will take you %d minutes to go %d blocks", r, blocks); 
	}

	return 0; 
}





