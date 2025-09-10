#include <stdio.h>
#include <string.h>

void cypher(char *message, int shift);

int main(void) {
    char message[100];

    printf("Enter a message: ");

    fgets(message, sizeof(message), stdin);

    int shift;
    printf("Enter shift value: ");
    scanf_s("%d", &shift);
    // scanf("%d", &shift);

    cypher(message, shift);

    printf("Encrypted! %s", message);
}

void cypher(char* msg, int shift) {
    char ch;
    int i;

    for (i = 0 ; msg[i] != '\0' ; ++i) {
        ch = msg[i];

        // 암호 (대문자)
        if (ch > 'A' && ch <= 'Z') {
            ch = ch + shift;

            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            } else if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }

            msg[i] = ch;
        }
        // 암호 (소문자)
        if (ch > 'a' && ch <= 'z') {
            ch = ch + shift;

            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            } else if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }

            msg[i] = ch;
        }
    }
}