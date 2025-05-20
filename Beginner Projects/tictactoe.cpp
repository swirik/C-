#include <iostream>

using namespace std;

char square [10] = {'o','1', '2', '3', '4', '5','6','7','8','9'};


// FUNCTION TO RETURN THE GAME STATUS

int checkwin()
{
    if(square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if(square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
             && square[4] != '4' && square[5] != '5' && square[6] != '6'
             && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
         return 0;
    }
    else
    {
        return -1;
    }   
}

    // THIS FUNCTION WILL DRAW THE BOARD WITH THE PLAYERS MARK

    void board()
    {
        system("cls");
        cout << "\n\n\tTic Tac Toe Game \n\n";

        cout << "Player 1(X) - Player 2(O)" << endl << endl;
        cout <<endl;

        // drawing of the board
        cout << "     |     |     " << endl;
        cout << " " << square[1] << "   |  " << square[2] << "  |  " << square[3] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << " " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << " " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

        cout << "     |     |     " << endl;
    }

int main()
{
    int player = 1, i, choice;

    char mark;

    do
    {
        board();
       // player=(player%2)?1:2;
        if (player % 2 == 1) {
                player = 1;
        }
        else {
            player = 2;
        }

        cout << "Player " << player << ", enter the number: ";
        cin >> choice;
                            
        // mark=(player == 1) ? 'X' : 'O';
        if (player == 1) {
                mark = 'X';
        }
        else {
                mark = 'O';
        }

        if(square[choice] != 'X' && square[choice] != 'O')
        {
            square[choice] = mark;
        }
        
        else 
        {
                cout << "INVALID MOVE!";
                player--;
                cin.ignore();
                cin.get();
        }

        i = checkwin();
        player++;
    }
    while(i == -1);
    if(i == 1)
    {
        cout << "\aCONGRATULATIONS! PLAYER  " << --player << " WINS!";
    }
    else
    {
        cout << "\a GAME DRAW!";
    }
    cin.ignore();
    cin.get();
    return 0;
}    
