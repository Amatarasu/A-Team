coor = [x,y] //coordinates being played
player //?? maybe bool, int or char depends on how we pass it in

int col=row=diag=diag2=1; //initiated to 1 since there is always the one just placed
count // also passed in

//column
for(int i = 1; i < 4; i++){
	if (cell[x,y+i] == player)
		col++;
	else 
		break;
}
for(int i = 1; i < 4; i++){
	if (cell[x,y-i] == player)
		col++
	else
		break;
}
if col >=4
	count += col - 3;

//row
for(int i = 1; i < 4){
	if cell[x+i, y] == player;
		row++;
	else 
		break;
}
for(int i = 1; i < 4){
	if cell[x-i, y] == player;
		row++;
	else 
		break;
}
if row >= 4
	count += row - 3;
//diag \
for(int i = 1; i < 4){
	if cell[x+i, y+i] == player;
		diag++;
	else 
		break;
}
for(int i = 1; i < 4){
	if cell[x-i, y-i] == player;
		diag++;
	else 
		break;
}
if diag >= 4
	count += row - 3;
//diag2 /
for(int i = 1; i < 4){
	if cell[x+i, y-i] == player;
		diag2++;
	else 
		break;
}
for(int i = 1; i < 4){
	if cell[x-i, y+i] == player;
		diag2++;
	else 
		break;
}
if diag2 >= 4
	count += row - 3;
