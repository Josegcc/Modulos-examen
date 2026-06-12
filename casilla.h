void casilla(int base, int altura, int posX, int posY)
{

    for(int i = 1; i <= altura; i++)
    {
        gotoxy(posX, posY+i);

        printf("|");

        if(i == 1 || i == altura)
        {
            for(int j = 0; j < base; j ++)
            {
            printf("—");
            }
        }else
        {
            for(int j = 0; j < base; j ++)
            {
            printf(" ");
            }
        }

        printf("|");
        printf("\n");
    }

}
