#ifndef AI_H
#define AI_H
#include "gameboard.h"
class gameBoard;

using namespace std;


class AI {//: public gameBoard{
public:
    AI();
    static void callAI(int i, gameBoard * b);
    static void easy(gameBoard * b);
//    void medium(gameBoard * b);
//    void hard(gameBoard * b);
};

#endif // AI_H
