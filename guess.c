#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int no, guess, count = 1;
    srand(time(0));
    
    //scanf("%d\n", &no);
    no = rand()%100+1;
    do{
        printf("Enter the no between 1 and 100 : ");// pretty basic logic why i am dividing it by 100 because i want user to enter the number between 1 to 100, and remember the remanider
        //exist less than the divisor, that's the reason here and if you want to increase the limit then change the divisor like for example if you want the no in between 1 to 200 
        // then change it like "no = rand()%200 +1", that's it
        
        
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
