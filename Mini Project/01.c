#include <stdio.h>

char board[9] = {'1','2','3','4','5','6','7','8','9'};  // Board positions

// Function declarations
void displayBoard();
int checkWin();

int main() {
    int player = 1, choice;
    char mark;  // X or O
    int status = -1;  // Status: -1 (continue), 1 (win), 0 (draw)

    do {
        displayBoard();  // Display the board
        printf("\n");
        player = (player % 2) ? 1 : 2;  // Alternate between player 1 and 2
        printf("Player 1 : X\nPlayer 2: O\n");

        // Get player choice
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';  // Assign X or O

        // Mark the board based on player's choice
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
            printf("Invalid move!\n");
            player--;  // Retry the move for the same player
        }

        status = checkWin();  // Check for a win or draw
        player++;  // Switch player

    } while (status == -1);  // Continue until there's a result

    displayBoard();  // Display final board

    // Display result
    if (status == 1)
        printf("==> Player %d  wins!\n", --player);
    else
        printf("==> It's a draw!\n");

    return 0;
}

// Function to display the Tic-Tac-Toe board
void displayBoard() {
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");

    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

// Function to check for a win
int checkWin() {
    // Winning combinations
    if (board[0] == board[1] && board[1] == board[2]) return 1;
    if (board[3] == board[4] && board[4] == board[5]) return 1;
    if (board[6] == board[7] && board[7] == board[8]) return 1;
    if (board[0] == board[3] && board[3] == board[6]) return 1;
    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;
    if (board[0] == board[4] && board[4] == board[8]) return 1;
    if (board[2] == board[4] && board[4] == board[6]) return 1;

    // Check for draw
    if (board[0] != '1' && board[1] != '2' && board[2] != '3' &&
        board[3] != '4' && board[4] != '5' && board[5] != '6' &&
        board[6] != '7' && board[7] != '8' && board[8] != '9')
        return 0;  // Draw

    return -1;  // Game continues
}
