//////////////////////////////////////
/*Input:--
*Output:--
*Description: XOXO Game Project
*Date: 24-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
char square[10]={'o','1','2','3','4','5','6','7','8','9'}; //it gives the position of square //Global Declaration
int checkwin() //this function checks the winning conditions of game are satisfied or not
{
   if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1; //Win
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0; //if no one is winner
	else 
		return -1;	//if the game is in progress
}
int main()
{
	system("color 5a");
	int player = 1, i ,choice;
	char mark; // X,O
	do {
		drawBoard();
		player = (player % 2) ? 1 : 2; //checks which player is going to play first and store it value
		printf("Player %d, enter the choice : ",player);   //it will take the choice from the player in which square block he has to play
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O'; //For Player 1 mark is X and for player 2 mark is O
		if(choice == 1 && square[1] == '1') //it checks the choice and square position are the same or not
             square[1] = mark;  //if it returns true it will replace the square position by mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else 
            {
				printf("Invalid option !");
				player--;
				getch();
			}
			i = checkwin();
			player++;	
		
	}while(i == -1);
	
    drawBoard();
	if(i==1)//if i==1 the player won
    {
		printf("==>Player %d Won--------",--player);
		//PlaySound(TEXT(""),NULL,SND_SYNC);
	}
	else //if i==0 no one is winner
	{
		printf("==>Game Draw----------");
	}
		getch();
		return 0;
}
void drawBoard()//this draw the game Board on which User will play
{
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player 1 (X) - Player 2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |      \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}
