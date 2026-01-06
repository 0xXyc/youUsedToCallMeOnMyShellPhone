#include <stdio.h>
#include <string.h>

void vuln_function(char *input) {
    char buffer[100];
    strcpy(buffer, input);
}

int main(int argc, char*argv[]){
    if (argc != 2){
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    vuln_function(argv[1]);
    printf("Happy hacking!\n");
    return 0;
}