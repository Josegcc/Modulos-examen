void limpiarPantalla()
{
#ifdef _WIN32
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    DWORD cellCount = csbi.dwSize.X * csbi.dwSize.Y;

    FillConsoleOutputCharacter(hStdOut, (TCHAR)' ', cellCount, coord, &count);

    FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, cellCount, coord, &count);

    SetConsoleCursorPosition(hStdOut, coord);
#else
    printf("\033[H\033[2J\n");
#endif
}
