#include <windows.h>

// Simple usage of showcasing the MessageBoxA WinAPI call.
// Compile: gcc .\MessageBoxA.c -o .\MessageBoxA.exe

int main(void)
{
    MessageBoxA(NULL, "HELLO WORLD from MessageBoxA!!!", "HELLO WORLD From MessageBoxA!!", MB_OK);

    return EXIT_SUCCESS;
}