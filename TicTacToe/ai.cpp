#include "ai.h"
#include "gameboard.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

QVariant eq;

AI::AI()
{

}
//CustomItem gameBoard::myBoard[6][6];
//int gameBoard::turn = -1;

void AI :: callAI(int i, gameBoard * b){
    switch(i){
    case 1 : easy(b);
//        case 2 : newAI->medium(this);
//        case 3 : newAI->hard(this);
        default: ;
    }
}


void AI::easy(gameBoard * b){
    //int pScore = 0;
    //int aScore = 0;
    //CustomItem * gameBoard::myBoard[6][6];
    srand((unsigned int)time(NULL));

/*
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0 ; j < 6; j++)
        {
            b->myBoard[i][j] = 0;  //sets a clear board
            cout << b->myBoard[i][j] << " "; // to display and have spaces in between
        }
        cout << endl; // to add the rows
    }

    cout << endl;
*/
   // int turn = 1; // for a.i. turn

   // for (int i = 0; i < 36; i++){
        int check = 0;
        int row = (rand()%6);
        int col = (rand()%6);
        cout << "check 1" << endl;
        while(check == 0){
            cout << "check 2" << endl;
            if(!(b->myBoard[row][col]->isEnabled())){
                 cout << "check 3" << endl;
                 row = (rand()%6);
                 col = (rand()%6);
             }else{
                 cout << "check 4" << endl;
                 check = 1;
            }
         }
         cout << "chekc 2" << endl;

        //b->myBoard[row][col]->setData(turn,eq);
 /*       if(turn == 1){
            b->myBoard[row][col]->setData(turn,eq);
           // pScore = checker(b->myBoard, row, col, turn, pScore);
        }else{
            b->myBoard[row][col]->(-1);
            //aScore = checker(b->myBoard, row, col, turn, aScore);
        }*/
         cout << "check 3" << endl;
        b->myBoard[row][col]->playEvent(-1);

        // gameBoard::turn *= -1;

  //  }
/*
    for (int i = 0; i < 6; i++){
        for (int j = 0 ; j <6; j++){
            if(myBoard[i][j] == 1)
                cout << " ";
            cout << b->myBoard[i][j] << " "; // to display and have spaces in between
        }

        cout <<endl; // to add the rows
    }*/

//    cout << "pScore: " << pScore << endl;
  //  cout << "aScore: " << aScore << endl;

}
/*
void AI::medium(gameBoard * b){

}

void AI::hard(gameBoard * b){

}*/
