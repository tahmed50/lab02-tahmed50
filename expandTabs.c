#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    if (argc!=2) {
        fprintf(stderr,"Please invoke as %s <n>\n",argv[0]);
        return 1; 
    }

    int n = atoi(argv[1]); 
    int nextChar = getchar();
    while(nextChar != EOF) {
        if (nextChar == '\t') {
            for (int i = 0; i < n; i++) {
                putchar(' ');
            }
        } else {
           
            putchar(nextChar);
        }
        nextChar = getchar();
    }
    return 0;
}