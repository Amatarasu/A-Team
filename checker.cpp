<<<<<<< HEAD
int checker(gameBoard cell, int x, int y, int player, int score){

	int col=row=diag=diag2=1; //initiated to 1 since there is always the one just placed

	//column
	for(int i = 1; i < 4; i++){
		if (cell[x][y+i] == player)
			col++;
		else 
			break;
	}
	for(int i = 1; i < 4; i++){
		if (cell[x][y-i] == player)
			col++
		else
			break;
	}
	if col >=4
		score += col - 3;
	
	//row
	for(int i = 1; i < 4){
		if cell[x+i][y] == player;
			row++;
		else 
			break;
	}
	for(int i = 1; i < 4){
		if cell[x-i][y] == player;
			row++;
		else 
			break;
	}
	if row >= 4
		score += row - 3;
	
	//diag '\'
	for(int i = 1; i < 4){
		if cell[x+i][y+i] == player;
			diag++;
		else 
			break;
	}
	for(int i = 1; i < 4){
		if cell[x-i][y-i] == player;
			diag++;
		else 
			break;
	}
	if diag >= 4
		score += row - 3;
	
	//diag2 /
	for(int i = 1; i < 4){
		if cell[x+i][y-i] == player;
			diag2++;
		else 
			break;
	}
	for(int i = 1; i < 4){
		if cell[x-i][y+i] == player;
			diag2++;
		else 
			break;
	}
	if diag2 >= 4
		score += row - 3;

return score;
}
=======
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
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
