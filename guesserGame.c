#include <stdio.h>

#define TRUE -1
#define FALSE 0
int main(){
	char playerName[20];
	printf("What is your name?:");
	scanf("%s",playerName);
	printf("Hello, %s!\n",playerName);
	
	int randomVar;
	int maxGuess = 3;
	int userGuess;
	int KEEPGOING = TRUE;

	while(KEEPGOING){
		printf("Enter your guess: ");
		scanf("%d",userGuess);
		if(userGuess == randomVar){
			printf("Correct! The random number was %d \n",randomVar);
			KEEPGOING = FALSE;
		}

	}

	return (0);
}
