#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int num,guess;
    int nog=0;

    printf("Guess the number game!!\n\n\t\n");
    srand(time(0));
    num = rand()%100 + 1;
    
    do{
         printf("enter ur guess between 1 to 100\n");
        scanf("%d",&guess);
        system("cls");
       
        if(guess>num)
        printf("little LOWER dear\n\n");
        else if(guess<num)
        printf("little HIGHER dear\n\n");

        nog++;
        
      
    
    }while(guess!=num);
    if(guess=num)
    printf("YAY u guessed in %d attempts",nog);
    return 0;
    
}