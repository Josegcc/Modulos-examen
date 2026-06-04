char leerTecla()
{

    char buf = '\0';


#ifdef WIN32
    int ch;

    while (buf == '\0')
    {
        ch = _getch();

        if (ch == 0 || ch == 224)   //Teclas especiales (flechas)
        {
            int arrow = _getch();
            switch (arrow)
            {
                case 72:
                buf = 'A';
                break;

                case 80:
                buf = 'B';
                break;


            }
        }else if (ch == 13) //Tecla Enter
        {
        buf = '\n';
        }else           //Cualquier otra tecla. Usado para la funcion "pregunta", la cual tiene un validador
        {
        buf = ch;
        }

    }

#else
        struct termios old = {0};
        if (tcgetattr(0, &old) < 0)
                perror("tcsetattr()");
        old.c_lflag &= ~ICANON;
        old.c_lflag &= ~ECHO;
        old.c_cc[VMIN] = 1;
        old.c_cc[VTIME] = 0;
        if (tcsetattr(0, TCSANOW, &old) < 0)
                perror("tcsetattr ICANON");
        if (read(0, &buf, 1) < 0)
                perror ("read()");
        old.c_lflag |= ICANON;
        old.c_lflag |= ECHO;
        if (tcsetattr(0, TCSADRAIN, &old) < 0)
                perror ("tcsetattr ~ICANON");
#endif

    return (buf);

}
