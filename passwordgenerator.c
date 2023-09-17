#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character
char getRandomChar() {
    char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

// Function to generate a random password of specified length
void generatePassword(int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", getRandomChar());
    }
    printf("\n");
}

int main() {
    int length;

    printf("Enter the length of the password: ");
    scanf("%d", &length);

    // Seed the random number generator
    srand(time(NULL));

    printf("Generated Password: ");
    generatePassword(length);

    return 0;
}
