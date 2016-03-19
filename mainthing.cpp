main:
switch(mode){
	case 1://pvp
		play();
		break;
	case 2://pve
		play(diff, startOrder)
		break;
	default://All hell has broken loose
		cout << "The fuck did you do?!?!?";
		break;
}




	void play(){
		gameBoard b;
		int turn = 0;
		int p1 = 0;
		int p2 = 0;
		for(i = 0, i < 36, i++){
			if(turn % 2 == 0){
				mouseinput(p1)
				p1 = checker(board, x, y, 1, p1);
			}
			else{
				mouseinput(p2);
				p2 = checker(board, x, y, 1, p2);
		}
	

	}
	void play(int diff, int start){
		gameBoard b;
		int turn, 
		int playerScore = 0;
		int AIScore = 0;
		if(starter == 1)
			turn = 0;
		else
			turn = 1;
		for(i = 0; i < 36; i++){
			if(turn % 2 == 0)
				mouseinput
				playerScore = checker(board, x, y, 1, playerScore);
			else
				AI(board);
				AIScore = checker(board, x, y, -1, AIScore);
		}

		if a > b
			print player 1 wins
		if a < b 
			print player 2 wins
		if a = b
			print Tie
