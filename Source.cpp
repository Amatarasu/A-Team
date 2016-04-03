<<<<<<< HEAD
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace std; 






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
=======
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace std; 






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
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
	