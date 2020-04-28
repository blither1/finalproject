//
// final project: connect 4
// marissa floam
// Bridget LaBonney
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100
#define MAX 50

int getMenuChoice();
void playerNames(char[], char[]);
void printBoard(char[][SIZE]);
void updateBoard(char[][SIZE]);
int checkPlayer();
int winCheck (char *boardState, int row, int col);

int main(){
  
  int option, difficulty = 4;
  char playera[MAX], playerb[MAX];
  
  do{
  option = getMenuChoice();
  switch(option){
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
        printf("Please enter a valid option!\n");
      break;
    }
  }
    while(option != 0);
  return 0;
}

int getMenuChoice(){
  int input;
  printf("***CONNECT 4***\n");
  printf("1. Play Game\n2. Show Scores\n 0. EXIT\n");
  printf("Enter your choice: ");
  scanf("%d", &input);
         return input;
  }

void playerNames(char player1[], char player2[]){
  //prompts user for player names, stores them in appropriate strings
  printf("Player 1, enter your name: ");
  scanf("%s", player1);
  printf("Player 2, enter your name: ");
  scanf("%s", player2);  
}
  
void printBoard(char arr[][SIZE]){
  // simply prints out the board to the screen.
  }
  
void updateBoard(char arr[][SIZE]){
  //prompts the user for a move, and places the players move onto the board.
  int player, move;
  
  }
 
int checkPlayer(){
  //checks which player's turn it is and returns a 0 or 1.
  return 0;
}

int winCheck (char *boardState, int row, int col, int difficulty) {
  //checks for a connect 4 in all directions. vertical only has to be checked going down but everything else must be checked in both directions.
  //Also works for different 'difficulties', the difficulty is how many pieces have to be connected for a win, this is for the extra credit.
int hor = 0;
int ver = 0;
int d1 = 0;
int d2 = 0;
int i = row-1;
int j = col;
while (boardState[row][col] == boardState[i, j]) {
  ver++; 
  i--;
}
int i = row;
int j = col-1;
while (boardState[row][col] == boardState[i, j]) {
  hor++; 
  j--;
}
int i = row;
int j = col+1;
while (boardState[row][col] == boardState[i, j]) {
  hor++; 
  j++;
}
int i = row-1;
int j = col-1;
while (boardState[row][col] == boardState[i, j]) {
  d1++; 
  j--;
  i--;
}
int i = row+1;
int j = col+1;
while (boardState[row][col] == boardState[i, j]) {
  d1++; 
  j++;
  i++;
}
int i = row-1;
int j = col+1;
while (boardState[row][col] == boardState[i, j]) {
  d2; 
  j++;
  i--;
}
int i = row+1;
int j = col-1;
while (boardState[row][col] == boardState[i, j]) {
  d2; 
  j--;
  i++;
}
if (hor>difficulty-1||ver>difficulty-1||d1>difficulty-1||d2>difficulty-1) {
  return 1;
}
else {
  return 0;
}

