#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice ,player;

int winCheck();
void display();
void markTheBoard(char mark);

int main()
{
    int status = 1;
    char mark;

    player = 1;
    do
        {
            display();
    player = (player % 2)? 1 : 2;
    printf("Player %d, enter your position: ", player);
    scanf("%d",&choice);

    mark = (player == 1) ? 'X' : 'O';

    markTheBoard(mark);
    display();
    status = winCheck();
    player++;

        }while(status == -1);

    if (status == 1){
        printf("\aPlayer %d WINS !",--player);
    }
    else
        {
        printf("\aGAME OVER");
    }

return 0;
}

int winCheck()//a 1 is win ,a 0 is draw,a -1 is game is going on
{
    int returnValue = 0;
    if(grid[1]==grid[2]&&grid[2]==grid[3])
    {
        returnValue = 1;
    }
    else if(grid[4]==grid[5]&&grid[5]==grid[6])
    {
        returnValue = 1;
    }
    else if(grid[7]==grid[8]&&grid[8]==grid[9])
    {
        returnValue = 1;
    }
    else if(grid[1]==grid[4]&&grid[4]==grid[7])
    {
        returnValue = 1;
    }
    else if(grid[2]==grid[5]&&grid[5]==grid[8])
    {
        returnValue = 1;
    }
    else if(grid[3]==grid[6]&&grid[6]==grid[9])
    {
        returnValue = 1;
    }
    else if(grid[1]==grid[5]&&grid[5]==grid[9])
    {
        returnValue = 1;
    }
    else if(grid[3]==grid[5]&&grid[5]==grid[7])
    {
        returnValue = 1;
    }
    else if(grid[1] !='1' && grid[2] !='2' && grid[3] !='3' && grid[4] !='4' && grid[5] !='5' && grid[6] !='6' && grid[7] !='7' && grid[8] !='8' && grid[9] !='9')
        returnValue = 0;
    else
    {
        returnValue = -1;
    }
    return returnValue;
}

void display()
{
    system("cls");//to clear th screen just to ensure the final outcome appears
     printf("\n\n      Tic-Tac-Toe\n\n");
     printf("Player 1 (X) - Player (2) O\n\n");

     printf("     |     |     \n");
     printf("  %c  |  %c  |  %c  \n",grid[1],grid[2],grid[3]);
     printf("_____|_____|_____\n");

     printf("     |     |     \n");
     printf("  %c  |  %c  |  %c  \n",grid[4],grid[5],grid[6]);
     printf("_____|_____|_____\n");

     printf("     |     |     \n");
     printf("  %c  |  %c  |  %c  \n",grid[7],grid[8],grid[9]);
     printf("_____|_____|_____\n\n\n");

}
//set the board with Xs and Os
void markTheBoard(char mark)
{
  if(choice == 1 && grid[1]=='1')
        grid[1]=mark;
  else if(choice == 2 && grid[2]=='2')
        grid[2]=mark;
  else if(choice == 3 && grid[3]=='3')
        grid[3]=mark;
  else if(choice == 4 && grid[4]=='4')
        grid[4]=mark;
  else if(choice == 5 && grid[5]=='5')
        grid[5]=mark;
  else if(choice == 6 && grid[6]=='6')
        grid[6]=mark;
  else if(choice == 7 && grid[7]=='7')
        grid[7]=mark;
  else if(choice == 8 && grid[8]=='8')
        grid[8]=mark;
  else if(choice == 9 && grid[9]=='9')
        grid[9]=mark;
  else{
        printf("Invalid move JACKASS");
  player--;
  getch();
}
}