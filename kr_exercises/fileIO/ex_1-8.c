#include <stdio.h>
#include <stdlib.h>

// This program counts spaces, tabs, and new lines

int main() {
    unsigned int c, count;
    count = 0;
    
    while((c = getchar()) != EOF)
        if(c == '\n' || c == '\t' || c == ' ')
            ++count;
    printf("%d\n", count);
    return 0;
}
