void casilla(int base, int altura, int posX, int posY)
{

    for(int i = 1; i <= altura; i++)
    {
        gotoxy(posX, posY+i);

        printf("c", 186);

        if(i == 1)
        {
        
            for(int j = 0; j <= base; j ++)
            {
            	if(j == 0){
            	printf("%c", 201);	//Esquina superior izquierda
            	}else if (j == base){
            	printf("%c", 187);	//Esquina superior izquierda
            	}else{
            	printf("%c", 205);	//Lineas horizontales
            	}
            }
            
        }else if(i == altura){
        		if(j == 0){
            	printf("%c", 200);	//Esquina superior izquierda
            	}else if (j == base){
            	printf("%c", 188);	//Esquina superior izquierda
            	}else{
            	printf("%c", 205);	//Lineas horizontales
            	}
        }
        else
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
