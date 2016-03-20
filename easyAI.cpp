#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace std; 



int checker(int cell[6][6], int x, int y, int player, int score){
 
    int col = 1;
	int row = 1;
	int diag = 1;
	int diag2 = 1; //initiated to 1 since there is always the one just placed
 
    //column
    for(int i = 1; i < 4; i++){
        if(y+i > 5)
            break;
        if (cell[x][y+i] == player)
            col++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0)
            break;
        if (cell[x][y-i] == player)
            col++;
        else
            break;
    }
    if (col >=4)
        score += (col - 3);
     
    //row
    for(int i = 1; i < 4; i++){
        if(x+i > 5)
            break;
        if (cell[x+i][y] == player)
            row++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(x-i < 0)
            break;
        if (cell[x-i][y] == player)
            row++;
        else
            break;
    }
    if (row >= 4)
        score += (row - 3);
     
    //diag '\'
    for(int i = 1; i < 4; i++){
        if(y+i > 5 || x+i > 5)
            break;
        if (cell[x+i][y+i] == player)
            diag++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x-i < 0)
            break;
        if (cell[x-i][y-i] == player)
            diag++;
        else
            break;
    }
    if (diag >= 4)
        score += (diag - 3);
     
    //diag2 /
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x+i > 5)
            break;
        if (cell[x+i][y-i] == player)
            diag2++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y+i >5 || x-i < 0)
            break;
        if (cell[x-i][y+i] == player)
            diag2++;
        else
            break;
    }
    if (diag2 >= 4)
        score += (diag2 - 3);
 	cout << player << " " << score << endl;

return score;
}


int main()
{

	//initialize board
	int board[6][6]; // 2d array matrix
	int pScore = 0;
	int aScore = 0;
	srand((unsigned int)time(NULL));


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0 ; j < 6; j++){
			board[i][j] = 0;  //sets a clear board 
			cout << board[i][j] << " "; // to display and have spaces in between
		}
		cout << endl; // to add the rows
	}

	cout << endl;

	int turn = 1; // for a.i. turn 

	int row = (rand()%6); 
	int col = (rand()%6); 

	//assign the coordinate for first move 
	//board[row][col] = 1; 




	for (int i = 0; i < 36; i++){
		int check = 0;
		while(check == 0){
			if(board[row][col] == 1 || board[row][col] == -1){
				 row = (rand()%6); 
				 col = (rand()%6);
			 }else{
				 check = 1;
			}
		 }
		
		if(turn == 1){
			board[row][col] = 1;
			pScore = checker(board, row, col, turn, pScore);
		}else{
			board[row][col] = -1;
			aScore = checker(board, row, col, turn, aScore);
		}
		turn *= -1;
	}

	for (int i = 0; i < 6; i++){
		for (int j = 0 ; j <6; j++){
			if(board[i][j] == 1)
				cout << " ";
			cout << board[i][j] << " "; // to display and have spaces in between
		}

		cout <<endl; // to add the rows
	}

	cout << "pScore: " << pScore << endl;
	cout << "aScore: " << aScore << endl;
		//assign the board function 

		//	}


	system("pause");
	return 0; 
}
	

