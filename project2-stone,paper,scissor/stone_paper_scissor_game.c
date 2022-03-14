#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char a,char b){
    if(a == b ){
        return 0;
    }//condition for draw
    if (a == 's' && b == 'p')
    {
        return -1;
        /* code */
    }
    else if (a == 's' && b == 'c')
    {
        return 1;
        /* code */
    }
    else if (a == 'p' && b == 's')
    {
        /* code */
        return 1;
    }
    else if (a == 'p' && b == 'c')
    {
        return -1;
        /* code */
    }
    else if (a == 'c' && b == 's')
    {
        /* code */
        return -1;
    }
    else if (a == 'c' && b == 'p')
    {
        return 1;
        /* code */
    }
}
int main()
{
    char you,comp;
    int a;
    srand(time(0));
    a = rand()%100+1;
    if(a<=33){
        comp='s';

    }
    else if (a<=66)
    {
        comp='p';
        /* code */
    }
    else if(a<=100){
        comp='c';
    }
    printf("Enter s for stone ,p for paper and c for scissor");
    scanf("%c",&you);
    int result= game(you,comp);
    printf("You choose %c and computer choose %c\n",you,comp);
    if (result == 0)
    {
        printf("Game draw!");
        /* code */
    }
    else if (result == 1)
    {
        printf("You won !\n");
        
        /* code */
    }
    else
    {
        printf("You lose!");
    }
    
    
return 0;
}