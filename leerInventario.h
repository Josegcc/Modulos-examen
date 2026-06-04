/*UPT JOSE FELIX RIBAS - JOSE CONTRERAS PRIMERO DE INFORMATICA MODULO DE LECTURA DE ARCHIVOS, INVENTARIO*/

void leerInventario(const char *nombre_archivo_inventario)
{

    FILE *archivo;
    archivo = fopen(nombre_archivo_inventario, "r");

    if (archivo == NULL) {

        printf("Error: No se encontr%c un archivo de inventario\n", 162);
        return;
                         }

    char buffer[1024];
    int j = 1;

    printf("\tCod\tProducto\tPrecio\tCantidad\n");

    while(fgets(buffer, 1024, archivo))
    {
        int i = 1; /*   i = columnas:  j = filas   */

        char *line_ptr = buffer;
        char *next_comma;

        printf("\t%d\t", j);

        while (line_ptr && *line_ptr != '\0')
        {
            if (*line_ptr == '\n' || *line_ptr == '\r')
            {
                printf("\n");
                break;
            }

            next_comma = strchr(line_ptr, ',');
            if (next_comma != NULL)
            {
                *next_comma = '\0';
            }

            if (strlen(line_ptr) == 0){}
            else
            {
                printf("%s\t", line_ptr);
            }

            if (next_comma != NULL)
            {
                line_ptr = next_comma + 1;
            } else
            {
                line_ptr = NULL;
            }
        i++;
        }
    j++;
    }

    fclose(archivo);
}
