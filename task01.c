#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch;
    int count = 0;
    printf("Enter characters (end with #):\n");
    while ((ch = getchar()) != EOF){
        if (ch == '#'){
            break;
        }
        if (isdigit((unsigned char)ch) && ch >= '0' && ch <= '7'){
            count++;
        }
    }
    printf("Octal digits count: %d\n", count);
    return 0;
}
