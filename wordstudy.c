#include <stdio.h>
#include <string.h>

int main() {
    int max = 0, i;
    char word;

    char a[1000000];
    int arr[26];

    scanf("%s", &a);

    int size = strlen(a);

    for (i = 0; i < size; i++) {
        if (96 < a[i] && a[i] < 123)
            arr[a[i] - 97]++;
        else if (64 < a[i] && a[i] < 91)
            arr[a[i] - 65]++;
    }

    for (i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            word = 65 + i;
        }
        else if (arr[i] == max) {
            word = 63;
        }
    }

    printf("%c", word);

    return 0;
}
