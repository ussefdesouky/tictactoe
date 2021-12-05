#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>


using namespace std;

class Tictactoe{
        char gameSpace[4][4];
    public:
        Tictactoe();
        void setGameSpace(int row, int column, char value);
        char getGameSpace(int row, int column);
        int fourInRow();
        int fourInColumn();
        int fourInDiag();
        int fourInDiag2();
        void printInfo();
};
