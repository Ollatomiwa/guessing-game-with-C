#include <stdio.h>
#include <stdlib.h>
/* Guessing game using while loop and if else statements*/

int main()
{
    int secretnumber=7;
    int guess; /* from user input*/
    int guesscount= 0;
    int guesslimit= 3;
    int outofguess=0;
    
    while(guess!= secretnumber && outofguess==0)
    {
        if(guesscount<guesslimit)
        {
            printf("Enter a Number:");
            scanf("%d", &guess);
            guesscount++;
            }
            else{
                outofguess=1;
                }
        }
        if(outofguess==1){
            printf("Try again");
        }
            else{
            printf("You won");
            }
    return 0;
    }