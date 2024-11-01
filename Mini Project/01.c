#include <stdio.h>

char board[9] = {'1','2','3','4','5','6','7','8','9'};  // Array representing the Tic-Tac-Toe board

// Function declarations
void displayBoard();  
int checkWin();

int main() {

    
    int player = 1, choice;
    char mark;  // X or O for players
    int status = -1;  // Game status: -1 = ongoing, 1 = win, 0 = draw

    do {
        displayBoard();  // Show the current state of the board
        printf("\n");

        // Determine current player (alternates between 1 and 2)
        player = (player % 2) ? 1 : 2;  
        printf("Player 1 : X\nPlayer 2: O\n");

        // Prompt the current player to make a move
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        // Assign X or O based on the current player
        mark = (player == 1) ? 'X' : 'O';

        // Update the board based on the player's choice
        if (choice == 1 && board[0] == '1')
            board[0] = mark;
        else if (choice == 2 && board[1] == '2')
            board[1] = mark;
        else if (choice == 3 && board[2] == '3')
            board[2] = mark;
        else if (choice == 4 && board[3] == '4')
            board[3] = mark;
        else if (choice == 5 && board[4] == '5')
            board[4] = mark;
        else if (choice == 6 && board[5] == '6')
            board[5] = mark;
        else if (choice == 7 && board[6] == '7')
            board[6] = mark;
        else if (choice == 8 && board[7] == '8')
            board[7] = mark;
        else if (choice == 9 && board[8] == '9')
            board[8] = mark;
        else {
            // If the move is invalid, notify the player and retry
            printf("Invalid move!\n");
            player--;  // Undo player switch
        }

        status = checkWin();  // Check the game status (win, draw, or continue)
        player++;  // Switch to the next player

    } while (status == -1);  // Continue the game until there's a result

    displayBoard();  // Display the final board

    // Show the result of the game
    if (status == 1)
        printf("==> Player %d wins!\n", --player);
    else
        printf("==> It's a draw!\n");

    return 0;
}

// Function to display the current state of the board
void displayBoard() {
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");

    // Display the 3x3 board layout
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

// Function to check if there's a winner or a draw
int checkWin() {
    // Check all possible winning combinations
    if (board[0] == board[1] && board[1] == board[2]) return 1;
    if (board[3] == board[4] && board[4] == board[5]) return 1;
    if (board[6] == board[7] && board[7] == board[8]) return 1;
    if (board[0] == board[3] && board[3] == board[6]) return 1;
    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;
    if (board[0] == board[4] && board[4] == board[8]) return 1;
    if (board[2] == board[4] && board[4] == board[6]) return 1;

    // If all positions are filled and no winner, it's a draw
    if (board[0] != '1' && board[1] != '2' && board[2] != '3' &&
        board[3] != '4' && board[4] != '5' && board[5] != '6' &&
        board[6] != '7' && board[7] != '8' && board[8] != '9')
        return 0;  // Draw

    return -1;  // Game is still ongoing
}
