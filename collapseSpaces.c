#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Please invoke as %s <n>\n", argv[0]);
        return 1; 
    }
    int n = atoi(argv[1]); // Convert the string in argv[1] into an integer

    int nextChar = getchar();
    int spaceCount = 0;

    while (nextChar != EOF) {
        if (nextChar == ' ') {
            spaceCount++;
            if (spaceCount == n) {
                putchar('\t'); // replace spaces with tab
                spaceCount = 0; // resets space counter
            }
        } else {
            while (spaceCount > 0) {
                putchar(' ');
                spaceCount--;
            }

            putchar(nextChar);
        }
        nextChar = getchar();
    }

    
    while (spaceCount > 0) {
        putchar(' ');
        spaceCount--;
    }

    return 0;
}