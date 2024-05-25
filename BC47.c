#include <stdio.h>

int main() {
    char ch;
    while (scanf("%c", &ch) != EOF) {
        // ¶ÁÈ¡²¢ºöÂÔ»»ÐÐ·û
        getchar();
        
        if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
            printf("%c is an alphabet.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}

