#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game_code();
int main(){
    int user1,a=0,b=0,s;
    printf(",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,''''''''''WELCOME'''''''''''',,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("\n");
    printf("The game begins now \n");
    printf("\n");
    printf("        RULES ARE \n");
    printf("\n");
    printf("You have to guess the correct number gussed by the computer in 10 attempts\n");
    printf("\n");
    printf("If you guess the wrong in any attempt you will be provided with detailed description if you are pretty close or farr from it\n");
    printf("\n");
    printf("The number wiil be between 1 to 100\n");
    printf("\n");
    printf("\n");
    printf("There will be two competitor if any one finds the number in less inputs then other one then he will be the winner\n");
    printf("\n");
    printf("Don't you negative number or you will be exterminated\n");
    printf("\n");
    printf("                              GAME START NOW\n");
    printf("\n");
    printf("\n");
    printf("\n");
    a=game_code();
    b=game_code();
    if(a<b){
        printf("The user1 win and better luck for next time for user2\n");
    }
    else{
        printf("The user2 wins and better luch next time for user1\n");
    }
    return 0;
}
int game_code()
{
    int no,b,user2;
    srand(time(0));
    no=rand()%100+1;
    printf("Your turn starts now\n");
    for(int i=1;i<=10;i++){
        
        printf("Enter the number you gussed\n");
        scanf("%d",&user2);
        if(user2<0){
            printf("The number you input is negative so you are being exterminated from the game");
            break;
        }
        else if(no<user2){
            if((user2-no)>10){
                printf("The number you gussed is far away  and greater from the number gussed by the computer\n");
                printf("Use 10 minus tactics or of your choice\n");
            }
            else{
                printf("The number guessed by you is too much close but is greater then the number gussed by the computer\n");
            }
        }
        else if(no==user2) {
            printf("You win now let another user make its gusses\n");
            printf("You guessed it in %d attempts\n",i);
            b=i;
            break;
        }
        else if(no>user2){
            if((no-user2)>10){
                printf("The number you gussed is far away  and smaller from the number gussed by the computer\n");
                printf("Use 10 minus tactics or of your choice\n");
            }
            else{
                printf("The number gussed by is too much close just few number small\n");
            }            
        }
    }
    return b;
}
