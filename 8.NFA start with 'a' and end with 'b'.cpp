#include <stdio.h>
#include <stdbool.h>

bool isAccepted(const char *input) {
    int currentState = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        switch (currentState) {
            case 0:
                if (input[i] == 'a') {
                    currentState = 1;
                }
                break;
            case 1:
                if (input[i] == 'a') {
                    currentState = 1;
                } else if (input[i] == 'b') {
                    currentState = 2;
                }
                break;
            case 2:
                if (input[i] == 'b') {
                    currentState = 2;
                }
                break;
        }
    }

    return currentState == 2;
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);

    if (isAccepted(input)) {
        printf("String is accepted.\n");
    } else {
        printf("String is not accepted.\n");
    }

    return 0;
}

