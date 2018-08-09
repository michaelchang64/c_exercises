#include <stdio.h>

int main() {
    unsigned int count = 1;
    for(; count <= 1000000000000000000; count *= 2) {
        printf("%u\n", count);
    }
    return 0;
}
