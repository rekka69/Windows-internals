#define BUILD_WINDOWS

#include<Windows.h>
#include<stdio.h>

int main() {
    OSVERSIONINFOW osi = { sizeof(osi) };
    GetVersionExW(&osi);
    printf("%d.%d.%d\n", osi.dwMajorVersion, osi.dwMinorVersion, osi.dwBuildNumber);
    return 0;
}
