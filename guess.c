#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int no, guess, count = 1;
    srand(time(0));
    
    //scanf("%d\n", &no);
    no = rand()%100+1;
    do{
        printf("Enter the no between 1 and 100 : ");
        scanf("%d", &guess);
        if(guess < no){
            printf("Please enter Higher no\n");

        }
        else if (guess > no){
            printf("Please enter Lower no\n");
        }
        else{
            printf("You guessed the no correctly in %d attempts. Congrats\n", count);
        }
        count++;
    }while(guess!= no);
    
    
    
   
}