#include "mainFunctions.cpp"

int main(int argc, char** argv){
    Tictactoe game1;
    int count = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int row = 0;
            int column = 0;
            char value;
            cin >> value;
            cin >> row;
            cin >> column;
            
            game1.setGameSpace(row, column, value);
            count++;
        }
        if(count >= 0){
            game1.printInfo(); 
            cout << "row : " << game1.fourInRow() << " iteration: " << i << endl;
            cout << "col : " << game1.fourInColumn() << " iteration: " << i << endl;
            cout << "diagonal : " << game1.fourInDiag() << " iteration: " << i << endl;
            cout << "diagonal rev : " << game1.fourInDiag2() << " iteration: " << i << endl;
            
        }
        
    }
    
    game1.printInfo(); 
    cout << game1.fourInRow() << endl;
    cout << game1.fourInColumn() << endl;
    cout << game1.fourInDiag() << endl;
    cout << game1.fourInDiag2() << endl;
}
