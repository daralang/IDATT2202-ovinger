#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Bruk: %s <antall>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);

    char str[100];
    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Klarte ikke lese fra standard input\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < x; i++) {
        printf("%s\n", str);
    }

    return 0;
}