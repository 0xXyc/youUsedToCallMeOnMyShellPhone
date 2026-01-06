#include <stdio.h>
#include <windows.h>

// A simple, non-encrypted shellcode "loader" in C. 
//Will more than likely always trigger AV/EDR solutions in its current form.
// Will execute MessageBoxA() unless shellcode is changed.
// Compile: gcc loader.c -o loader.exe -z execstack -fno-stack-protector -no-pie

unsigned char shellcode[] =
#include <stdio.h>
#include <windows.h>

// A simple, non-encrypted shellcode "loader" in C. 
//Will more than likely always trigger AV/EDR solutions in its current form.
// Will execute MessageBoxA() unless shellcode is changed.
// Compile: gcc loader.c -o loader.exe -z execstack -fno-stack-protector -no-pie

unsigned char shellcode[] = "\x89\xe5\x81\xc4\xf0\xf9\xff\xff\x31\xc9\x64\x8b\x71\x30\x8b\x76\x0c\x8b\x76\x1c\x8b\x5e\x08\x8b\x7e\x20\x8b\x36\x66\x39\x4f\x18\x75\xf2\xeb\x06\x5e\x89\x75\x04\xeb\x54\xe8\xf5\xff\xff\xff\x60\x8b\x43\x3c\x8b\x7c\x03\x78\x01\xdf\x8b\x4f\x18\x8b\x47\x20\x01\xd8\x89\x45\xfc\xe3\x36\x49\x8b\\x5e\x89\x75\x04\xeb\x54\xx45\xfc\x8b\x34\x88\x01\xde\x31\xc0\x99\xfc\xac\x84\xc0\x74\x07\xc1\xca\x0d\x01\xc2\xeb\xf4\x3b\x54\x24\x24\x75\xdf\x8b\x57\x24\x01\xda\x66\x8b\xe\x31\xc0\x99\xfc\xac\x84\0c\x4a\x8b\x57\x1c\x01\xda\x8b\x04\x8a\x01\xd8\x89\x44\x24\x1c\x61\xc3\x68\x8e\x4e\x0e\xec\xff\x55\x04\x89\x45\x10\x68\x83\xb9\xb5\x78\xff\x55\x044\x24\x1c\x61\xc3\x68\x8e4\x89\x45\x14\x31\xc0\x66\xb8\x6c\x6c\x50\x68\x33\x32\x2e\x64\x68\x55\x73\x65\x72\x54\xff\x55\x10\x89\xc3\x68\xa8\xa2\x4d\xbc\xff\x55\x04\x89\x45x72\x54\xff\x55\x10\x89\xc\x18\x31\xc0\x66\xb8\x73\x73\x50\x68\x21\x21\x00\x00\x68\x42\x6f\x78\x41\x68\x73\x61\x67\x65\x68\x20\x4d\x65\x73\x68\x46\x72\x6f\x6d\x68\x52\x4c\\x65\x73\x68\x46\x72\x6f\xx44\x20\x68\x4f\x20\x57\x4f\x68\x48\x45\x4c\x4c\x54\x8b\x1c\x24\x31\xc0\x50\x53\x53\x50\xff\x55\x18\x31\xc0\x50\x6a\xff\xff\x55\x14";

int main()
{
    // Allocate memory for the shellcode contained within the buffer
    void *execShellcode = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    
    // Copy shellcode buffer to memory
    memcpy(execShellcode, shellcode, sizeof shellcode);
    
    printf("Shellcode length: %zu\n", sizeof(shellcode));

    printf("Executing shellcode...\n");
    
    // Execute shellcode
    ((void(*)())execShellcode)();
    
    // Exit gracefully and return 0
    exit(0);

}

int main()
{
    // Allocate memory for the shellcode contained within the buffer
    void *execShellcode = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    
    // Copy shellcode buffer to memory
    memcpy(execShellcode, shellcode, sizeof shellcode);
    
    printf("Shellcode length: %zu\n", sizeof(shellcode));

    printf("Executing shellcode...\n");
    
    // Execute shellcode
    ((void(*)())execShellcode)();
    
    // Exit gracefully and return 0
    exit(0);

}