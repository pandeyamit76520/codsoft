#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void printBoard() {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ' ';
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) {
                cout << '|';
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "  -+-+-" << endl;
        }
    }
}

bool checkWin(char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; 
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; 
    }
    return false;
}

int main() {
    char currentPlayer = 'X';
    char playAgain = 'y';

    cout << "Welcome to Tic Tac Toe Game!" << endl;
    cout << endl;

    while (playAgain == 'y' || playAgain == 'Y') {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }

        int moves = 0;
        bool gameWon = false;

        while (moves < 9) {
            printBoard();
            cout << "Player " << currentPlayer << ", enter your move (row column): ";
            int row, col;
            cin >> row >> col;

            if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
                cout << "Invalid move. Try again." << endl;
                continue;
            }

            board[row - 1][col - 1] = currentPlayer;
            moves++;

            if (checkWin(currentPlayer)) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameWon = true;
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }

        if (!gameWon) {
            printBoard();
            cout << "It's a draw!" << endl;
        }

        cout << "Do you want to play another game? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thank you for playing!" << endl;
    cout << "Have a good day!" << endl;

    return 0;
}

