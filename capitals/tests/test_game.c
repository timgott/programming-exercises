#include <stdio.h>

#include "../src/game.h"
#include "string.h"

int runGameTest(char* solution, char* charsToTry, int charsToTryCount) {
    
}

void debug_state(GameState *state) {
    printf("Solution/Current mask:\n");
    printf("%s\n", state->solution);
    for (int i=0; i<strlen(state->solution); i++)
        printf("%c", state->visiblityMask[i] ? '1' : '0');
    printf("\n");
    printf("Mistakes: %d\n", state->mistakes);
}

int testGame(char* solution, char* charsToSolve, int charCount) {
    GameState* testState = createGameState(solution);

    for (int i=0; i<charCount; i++) {
        if (isGameFinished(testState)) {
            printf("Failure: Game should not be finished\n");
            printf("%d characters entered: ", i);
            for (int j=0;j<i;j++)
                printf("%c ", charsToSolve[j]);
            printf("\n");
            debug_state(testState);
            return 1; 
        }
        tryRevealCharacter(testState, charsToSolve[i]);
    }
    if (!isGameFinished(testState)) {
        printf("Failure: Game should be finished\n");
        printf("%d characters entered: ", charCount);
        for (int j=0;j<charCount;j++)
            printf("%c ", charsToSolve[j]);
        printf("\n");
        debug_state(testState);
        return 2; 
    }
    destroyGameState(testState);
}

#define TEST_GAME(solution, charsToSolve) if (testGame(solution, charsToSolve, sizeof charsToSolve - 1) != 0) return 1;

int main() {
    TEST_GAME("H", "H")
    TEST_GAME("Aa", "a")
    TEST_GAME("a .b", "Ba")
}