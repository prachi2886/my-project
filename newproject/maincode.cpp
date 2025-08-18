#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
int choice;
int player = 1;
char mark;

void displayBoard() {
    cout << "\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    displayBoard();
    cout << "\nTic Tac Toe Game Started!\n";
    return 0;
}