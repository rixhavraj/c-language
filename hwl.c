#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Function to draw a single alphabet
void drawAlphabet(char alphabet) {
    switch (alphabet) {
        case 'A':
            printf("   ***\n");
            printf("  *   *\n");
            printf(" *     *\n");
            printf("*******\n");
            printf("*     *\n");
            printf("*     *\n");
            break;
        case 'B':
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            break;
        // Add more cases for other alphabets
    }
}

// Function to animate alphabets
void animateAlphabets() {
    char alphabet = 'A';
    int delay = 1000; // 1 second delay

    while (alphabet <= 'Z') {
        system("cls"); // Clear screen
        drawAlphabet(alphabet);
        Sleep(delay); // Pause for delay
        alphabet++;
    }
}

int main() {
    animateAlphabets();
    return 0;
}