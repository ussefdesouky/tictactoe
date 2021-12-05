#include "mainClasses.cpp"

Tictactoe::Tictactoe(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            gameSpace[i][j] = '-';
        }
    }
}

void Tictactoe::setGameSpace(int row, int column, char value){
    gameSpace[row][column] = value;
}

char Tictactoe::getGameSpace(int row, int column){
    return gameSpace[row][column];
}

int Tictactoe::fourInRow(){
    for(int i = 0; i < 4; i++){
        int x_count = 0;
        int o_count = 0;
        for(int j = 0; j < 4; j++){
            if(gameSpace[i][j] == 'x'){
                x_count++;
            }
            if(gameSpace[i][j] == 'o'){
                o_count++;
            }
        }
        if(x_count == 4){
            return 1;
        }
        else if(o_count == 4){
            return 2;
        }
        else{
            return -1;
        }
    }
}

int Tictactoe::fourInColumn(){
    for(int i = 0; i < 4; i++){
        int x_count = 0;
        int o_count = 0;
        for(int j = 0; j < 4; j++){
            if(gameSpace[j][i] == 'x'){
                x_count++;
            }
            if(gameSpace[j][i] == 'o'){
                o_count++;
            }
        }
        if(x_count == 4){
            return 1;
        }
        else if(o_count == 4){
            return 2;
        }
        else{
            return -1;
        }
    }
}

int Tictactoe::fourInDiag(){
    int x_count = 0;
    int o_count = 0;
    for(int i = 0; i < 4; i++){
    
        if(gameSpace[i][i] == 'x'){
            x_count++;
        }
        if(gameSpace[i][i] == 'o'){
            o_count++;
        }
    }    
    if(x_count == 4){
        return 1;
    }
    else if(o_count == 4){
        return 2;
    }
    else{
        return -1;
    }
    
}

int Tictactoe::fourInDiag2(){
    int x_count = 0;
    int o_count = 0;
    for(int i = 0; i < 4; i++){
        
        if(gameSpace[i][3 - i] == 'x'){
            x_count++;
            //cout << x_count << endl;
        }
        if(gameSpace[i][3 - i] == 'o'){
            o_count++;
        }
    }    
    if(x_count == 4){
        return 1;
    }
    else if(o_count == 4){
        return 2;
    }
    else{
        return -1;
    }
    }


void Tictactoe::printInfo(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << gameSpace[i][j] << "\t";
        }
        cout << endl;
    }
}
