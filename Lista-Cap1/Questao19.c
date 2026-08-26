#include <stdio.h>
#include <windows.h>

void cascata(){
    printf(" um\n  dois\n   três");   
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    cascata();

    return 0;
}