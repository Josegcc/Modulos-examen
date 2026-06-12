// Modifica el índice actual basado en las flechas 'A' (Arriba) o 'B' (Abajo)
void actualizarIndiceMenu(char tecla, int *i, int max_opciones) {
    if (tecla == 'B') {          // Flecha Abajo
        if (*i < max_opciones - 1) {
            (*i)++;
        }
    } 
    else if (tecla == 'A') {     // Flecha Arriba
        if (*i > 0) {
            (*i)--;
        }
    }
}

// Ejecuta la acción correspondiente a la opción seleccionada
void ejecutarAccionMenu(int opcionSeleccionada) {
    switch (opcionSeleccionada) {
        case 0:
            menuProductos();
            break;

        case 1:
            printf("Modificar inventario\n");
            printf("Presione una tecla para continuar...\r\n");
            leerTecla();
            break;

        case 2:
            printf("Presione una tecla para continuar...\r\n");
            leerTecla();
            break;
            
        default:
            break;
    }
}
