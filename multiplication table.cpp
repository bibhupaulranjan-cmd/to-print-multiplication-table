
#include <stdio.h>

void printTable(int num, int i, int limit) {
    if (i > limit)  
        return;
    printf("%d x %d = %d\n", num, i, num * i);
    printTable(num, i + 1, limit); 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printTable(num, 1, 10); 
    return 0;
}

