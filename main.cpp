#include <iostream>
#include <cstdlib>


// importing header files

using namespace std;
//A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//These will the numbers corresponding to different positions in the game

int checkIfWon();
// Declare the integer function for compiler

void tictactoe();
// Declare the function which is the "GUI" of the game

int main()
// Declaring main function
{
    int playerNumber = 1;
    // This variable will be used to select which player's chance will be it to play

    int i;
    // i will store the status of the game. i == 1, game won and i = 0 is game draw
    int choice;
    // This will be the input from the player, between 1 to 9

    char crossOrO;

    do{
// loop

        tictactoe();

        playerNumber = (playerNumber % 2) ? 1 : 2;
        // This is a ternary operator, it basically means if playerNumber is divisible by 2 than the value of playerNumber will be 1 else it will be 2

        cout << "Player " << playerNumber << ", enter a number: ";
        cin >> choice;
        // store the input from the player in choice variable

        crossOrO = (playerNumber ==1) ? 'X' : 'O';
        // Now depending on the playerNumber X and O will be marked at one particular position
        //

        if (choice == 1 && square[1] == '1')

            {
                square[1] = crossOrO;
            }

        else if (choice == 2 && square[2] == '2')

            {
                square[2] = crossOrO;
            }

        else if (choice == 3 && square[3] == '3')

            {
                square[3] = crossOrO;
            }

        else if (choice == 4 && square[4] == '4')

            {
                square[4] = crossOrO;
            }

        else if (choice == 5 && square[5] == '5')

            {
                square[5] = crossOrO;
            }

        else if (choice == 6 && square[6] == '6')

            {
                square[6] = crossOrO;
            }

        else if (choice == 7 && square[7] == '7')

            {
                square[7] = crossOrO;
            }


        else if (choice == 8 && square[8] == '8')

            {
                square[8] = crossOrO;
            }

        else if (choice == 9 && square[9] == '9')

            {
                square[9] = crossOrO;
            }

        else
        {

            cout << "Invalid move ";
            // Print this in case the input is not between 1 to 9
            playerNumber = playerNumber - 1;
            // The same player get his chance back because of the wrong input
            cin.ignore();
            // The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer
            cin.get();
            // It just keeps the console window open so the user can see the output of the program. it does so by getting the next character in the console

        }

        i = checkIfWon();
        // This function will check the status of the game and return -1, 0 or 1
        playerNumber++;
        // Increasing the value of playerNumber so that next player can input after every successful input from one player
    } while( i == -1); // This loop will run as long as the value returned from checkIfWon function is -1
    tictactoe();
    // This will run the tictactoe function for the last time if the game comes to an end or draw
    if (i==1)
        cout << "==>\aPlayer"<<--playerNumber<<" win ";
        // Print which player won
    else
        cout<<"==>\aGame draw";
        // Print if game is draw

        cin.ignore();
        // The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer
        cin.get();
        // It just keeps the console window open so the user can see the output of the program. it does so by getting the next character in the console

    return 0;
}

int checkIfWon(){

    if (square[1] == square[2] && square[2] == square[3])

        {
            return 1;
        }

    else if (square[4] == square[5] && square[5] == square[6])

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
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3')
        {
            return 0;
        }
    else if (square[4] != '4' && square[5] != '5' && square[6] != '6')
        {
            return 0;
        }
    else if (square[7] != '7' && square[8] != '8' && square[9] != '9')
        {
            return 0;
        }


    // This checks if someone won the game or not

        // if yes return 0 else return -1 and the game continues
    else
        return -1;

}

void tictactoe(){
    // This function is basically the GUI

    system("cls");
    // clears the previous screen
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl; // this basically changes the line


    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;

    }

