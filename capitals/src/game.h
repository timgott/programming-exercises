#pragma once
#include <stdbool.h>

typedef struct GameState {
    // string that has to be guessed
    char *solution;

    // array of booleans representing visibility of character in capital name at the same position
    bool *visiblityMask;

    // counter for mistakes, should increase when guessed character was incorrect
    int mistakes;
} GameState;

// creates and initializes a game
GameState* createGameState(char *solution);

// cleans up all memory used by this game state
void destroyGameState(GameState* state);


// reveals a character if the character is in the solution, otherwise increases the mistake count
void tryRevealCharacter(GameState* state, char character);

// prints the masked solution
void printGameState(GameState* state);

// checks whether the solution has been completely revealed
bool isGameFinished(GameState* state);