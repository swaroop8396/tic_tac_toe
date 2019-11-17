///////********DEVELOPED BY SWAROOP*******////////
///////***************VER 1.0*************////////
#include<stdio.h>
#include<stdlib.h>
void show_board(void);
void board(int ,char);
int choice(void);
int check_win(void);
void instruction(void);
char s[9]={'1','2','3','4','5','6','7','8','9'};
char d[9];
char name1[20],name2[20];
void main()
{

	char ch;
	int pos,i;
	FILE *fp;
	system("chmod u+w players_log");
	fp=fopen("players_log","a+");
	if(fp<0)
	{
	perror("fopen");
	return;
	}
	perror("fopen");
	printf("Enter Player 1's Name >>");
	scanf("%s",name1);
	fprintf(fp,"%s\n",name1);
	printf("\nEnter Player 2's Name >>");
	scanf("%s",name2);
	fprintf(fp,"%s\n",name2);
	fflush(fp);
	printf("Note: Turn on Full Screen by pressing F11 key\n");
	system("chmod u-w players_log");
	printf("Do you want to read instruction on how to play!!!(y/n) >>");
	scanf("\n%c",&ch);
	if(ch=='y'|| ch=='Y')
		instruction();
	show_board();
	printf("%s's Turn > O\n",name1);
	pos=choice();
	board(pos,'O');
	if(!check_win())
		exit(1);
	for(i=0;i<4;i++)
	{
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t %s's Turn >> X\n",name2);
		pos=choice();
		board(pos,'X');
		if(!check_win())
			exit(1);
		printf("%s's Turn >> O\n",name1);
		pos=choice();
		board(pos,'O');
		if(!check_win())
			exit(1);
	}
	printf("Its a Draw!!!\n");
}
int check_win(void)
{
	if(s[0]=='O' && s[1]=='O' && s[2]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[0]=='O' && s[3]=='O' && s[6]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[0]=='O' && s[4]=='O' && s[8]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[1]=='O' && s[4]=='O' && s[7]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[2]=='O' && s[5]=='O' && s[8]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[3]=='O' && s[4]=='O' && s[5]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[6]=='O' && s[7]=='O' && s[8]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}

	if(s[2]=='O' && s[4]=='O' && s[6]=='O')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name1);
		return 0;
	}



	if(s[0]=='X' && s[1]=='X' && s[2]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[0]=='X' && s[3]=='X' && s[6]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[0]=='X' && s[4]=='X' && s[8]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[1]=='X' && s[4]=='X' && s[7]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[2]=='X' && s[5]=='X' && s[8]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[3]=='X' && s[4]=='X' && s[5]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[6]=='X' && s[7]=='X' && s[8]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

	if(s[2]=='X' && s[4]=='X' && s[6]=='X')
	{
		printf("\n\t\t\t\t\t\t\t    ***---Game Over---***\n");
		printf("\n  \t\t\t\t\t\t\t***--- %s Wins!!! ---***\n",name2);
		return 0;
	}

}
void show_board(void)
{
	system("clear");
	printf("\t\t\t\t\t\t\t------*****Tic Tac Toe*****-----\n\n\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[0],s[1],s[2]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
	printf("\t\t\t\t\t\t\t ____________________________\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[3],s[4],s[5]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
	printf("\t\t\t\t\t\t\t ____________________________\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[6],s[7],s[8]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
}
void board(int pos,char c)
{
	s[pos]=c;
	system("clear");
	printf("\t\t\t\t\t\t\t------*****Tic Tac Toe*****-----\n\n\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[0],s[1],s[2]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
	printf("\t\t\t\t\t\t\t ____________________________\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[3],s[4],s[5]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
	printf("\t\t\t\t\t\t\t ____________________________\n");
	printf("\t\t\t\t\t\t\t	   |	  |    	  \n");
	printf("\t\t\t\t\t\t\t	%c  |   %c  |   %c\n",s[6],s[7],s[8]);
	printf("\t\t\t\t\t\t\t	   |	  |	  \n");
}
void instruction()
{
	char ch;
	printf("***Welcome to Tic Tac Toe Game***\n");
	printf("The Game is played on a grid that's 3 Squares by 3 Squares\n\n");
	printf("You are 'X', your fiend is 'O'. Players take turn putting their marks in empty squares\n\n");
	printf("The first player to get 3 of his/her marks in row (up,down,across,or diagonally) is the winner\n\n");
	printf("When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n"); 
	printf("Press any key to continue...\n");
	scanf("\n%c",&ch);

}
int choice()
{
	static int j=0;
	int pos,i;
l1:
	printf("\n\n\t\t\t\t\t\t\t    Enter position between 1 to 9\n");
	scanf("%d",&pos);
	for(i=0;i<9;i++)
		if(pos==d[i])
		{
			printf("That Place is already played...PLease Enter another place\n");
			goto l1;
		}
	d[j++]=pos;
	return pos-1;
}
