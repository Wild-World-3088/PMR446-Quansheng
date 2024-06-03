#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h> // For sleep function

// Function prototypes
void showMenu();
void playPingPong();
void playTetris();
void playGeometryDash();
void displayBitmap(const char* bitmap);

// Global variable for tracking menu state
bool inMenu = true;

int main() {
    // Main loop
    while (true) {
        if (inMenu) {
            showMenu();
        } else {
            // Code for handling other functionalities while not in menu
            // For example, playing radio, adjusting volume, etc.
            printf("Currently playing radio or other tasks.\n");
            sleep(5); // Simulate some delay for other tasks
        }
    }
    return 0;
}

void showMenu() {
    printf("----- Radio Firmware Menu -----\n");
    printf("1. Play Ping Pong\n");
    printf("2. Play Tetris\n");
    printf("3. Play Geometry Dash\n");
    printf("4. Exit\n");
    printf("Select an option: ");
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            playPingPong();
            break;
        case 2:
            playTetris();
            break;
        case 3:
            playGeometryDash();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid option. Please select again.\n");
            break;
    }
}

void playPingPong() {
    printf("Welcome to Ping Pong!\n");
    // Display a simple bitmap for Ping Pong
    displayBitmap("PingPongBitmap");
    // Implement Ping Pong game logic here
    // Simulate game logic with a simple loop
    for (int i = 0; i < 3; i++) {
        printf("Ping... Pong...\n");
        sleep(1);
    }
    inMenu = true; // Return to menu after game logic
}

void playTetris() {
    printf("Welcome to Tetris!\n");
    // Display a simple bitmap for Tetris
    displayBitmap("TetrisBitmap");
    // Implement Tetris game logic here
    // Simulate game logic with a simple loop
    for (int i = 0; i < 3; i++) {
        printf("Tetris block moving...\n");
        sleep(1);
    }
    inMenu = true; // Return to menu after game logic
}

void playGeometryDash() {
    printf("Welcome to Geometry Dash!\n");
    // Display a simple bitmap for Geometry Dash
    displayBitmap("GeometryDashBitmap");
    // Implement Geometry Dash game logic here
    // Simulate game logic with a simple loop
    for (int i = 0; i < 3; i++) {
        printf("Jump... Slide...\n");
        sleep(1);
    }
    inMenu = true; // Return to menu after game logic
}

void displayBitmap(const char* bitmap) {
    // Dummy function to simulate displaying a bitmap
    printf("Displaying %s\n", bitmap);
    // In actual implementation, this function would handle the
    // rendering of bitmaps on the device's screen.
}
