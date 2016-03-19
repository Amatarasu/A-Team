main:
	play(){
		new board()
		for(i =0; i < 36; i++)
		if(AIflag)
			AI(board)
		else
			mouseinput(board)
		checker(board, lastplayed)
		endloop

		if a > b
			print player 1 wins
		if a < b 
			print player 2 wins
		if a = b
			print Tie
