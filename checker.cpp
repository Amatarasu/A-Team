int checker(int board[6][6], int x, int y, int player, int score)
{
 
    int col = 1;
	int row = 1;
	int diag = 1;
	int diag2 = 1; //initiated to 1 since there is always the one just placed
 
    //column
    for(int i = 1; i < 4; i++){
        if(y+i > 5)
            break;
        if (board[x][y+i]->data(takingTurns).toInt() == player)
            col++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0)
            break;
        if (board[x][y-i]->data(takingTurns).toInt() == player)
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
        if (board[x+i][y]->data(takingTurns).toInt() == player)
            row++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(x-i < 0)
            break;
        if (board[x-i][y]->data(takingTurns).toInt() == player)
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
        if (board[x+i][y+i]->data(takingTurns).toInt() == player)
            diag++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x-i < 0)
            break;
        if (board[x-i][y-i]->data(takingTurns).toInt() == player)
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
        if (board[x+i][y-i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y+i >5 || x-i < 0)
            break;
        if (board[x-i][y+i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    if (diag2 >= 4)
        score += (diag2 - 3);
 	cout << player << " " << score << endl;
	
	if(takingTurns == 1)
		p1Score += score;
	else
		p2Score += score;

    return score;
}
