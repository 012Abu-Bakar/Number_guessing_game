#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
int g_no,temp,guess=0,trial=0,score=6;
 
srand(time(0));
temp=rand()%50+1;
printf("--------------------------------Number Guessing Game---------------------------\n");
printf("\n\nINSTRUCTION: If you guess in 1st trial then your score is 5 if in 2nd trial then score is 4 and so on.... ");
//printf("\n\nRandom number is: %d\n",temp);

do{
	printf("\n\nEnter a number (1-50): ");
	scanf("%d",&g_no);
	trial++;
	score--;
	if(g_no>temp){
		printf("Please enter lower number.\n");
	}
	else if(g_no<temp){
		printf("Please enter greater number.\n");
	}
	else{
	printf("You guessed in %d trials.\n",trial);
	printf("Your score is %d\n",score);
	}guess++;
}while(g_no!=temp);

}
