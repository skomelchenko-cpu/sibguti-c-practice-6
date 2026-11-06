#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wint_t ch;
    int count = 0;

    wprintf(L"Enter characters (end with #):\n");

    /* getchar() reads individual bytes, while getwchar() reads wide
       characters decoded according to the active locale. This makes
       getwchar() suitable for multi-byte text encodings such as UTF-8. */
    while ((ch = getwchar()) != WEOF) {
        if (ch == L'#') {
            break;
        }

        if (iswdigit(ch) && ch >= L'0' && ch <= L'7') {
            count++;
        }
    }

    wprintf(L"Octal digits count: %d\n", count);
    return 0;
}
