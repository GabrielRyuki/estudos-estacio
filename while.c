#include <stdio.h>

int main() {
    int i = 0;

    while(i <= 10) {
        i % 2 != 0 ? printf("%d\n", i) : 0;
        i++;
    }
    
    
    return 0;
}