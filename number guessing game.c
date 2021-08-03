#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int  num , guess , nguesses=1;
  srand(time(0));
  num = rand()%100+1; // Generates a random number between 1 and 100
  // printf("The Random Number is %d\n",num);
  // Keep running the loop until the number is guessed
  do
  {

     if (nguesses > 10) {
			printf("\nYou Loose The Game!\n");
			break;
		}
  // Input by user
    printf("Guess The Number Between 1 And 100\n");
    scanf("%d",&guess);
  // When user guesses lower
	// than actual number
     if(guess<num)
      {
       printf("Higher Number Please!\n");
      }
  // When user guesses higher
	// than actual number
     else if(guess>num)
      { 
       printf("Lower Number Please!\n");
      }
  // Printing number of times
	// user has taken to guess the number
     else if(guess==num)
      { 
       printf("Correct! You Guessed It In After %d Attempts\n",nguesses);
      }
    nguesses++;
  }
   while (guess!=num);
 return 0;
}

    
    
  

