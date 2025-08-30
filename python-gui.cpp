#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
#endif

int main() {
    // Try to open index.html in the default browser
    const char* filename = "index.html";

#ifdef _WIN32
    // Windows: use ShellExecute
    ShellExecuteA(NULL, "open", filename, NULL, NULL, SW_SHOWNORMAL);
#elif __APPLE__
    // macOS: use open
    char command[256];
    snprintf(command, sizeof(command), "open %s", filename);
    system(command);
#else
    // Linux/Unix: use xdg-open
    char command[256];
    snprintf(command, sizeof(command), "xdg-open %s", filename);
    system(command);
#endif

    return 0;
}
