#include <stdio.h>
int main() {
    int i; float f; char c;
    printf("Enter an integer, float and character: ");
    scanf("%d %f %c", &i, &f, &c);
    printf("You entered: %d, %f, %c\n", i, f, c);
    return 0;
}
