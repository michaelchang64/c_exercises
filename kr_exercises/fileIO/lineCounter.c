#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    int count = 0;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++count;
    printf("%d\n", count);
}
