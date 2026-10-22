#include <stdio.h>
#include <conio.h>

int main()
{
    int opcion; 
    float resultado, num1, num2;  

    do {

        printf("\n1- SUMA\n2- RESTA\n3- MULTIPLICACION\n4- DIVISION\n5- SALIR\n");
        scanf("%d", &opcion); 

        if (opcion >= 1 && opcion <= 4){
            printf("Dame el primer numero");
            scanf("%f", &num1); 
            printf("Dame el segundo numero");
            scanf("%f", &num2);
        }

        switch(opcion)
        {
            case 1:
                resultado = num1 + num2;
                printf("%2f", resultado);
                getch(); 
                break;
            case 2: 
                resultado = num1 - num2;
                printf("%2f", resultado);
                getch(); 
                break;
            case 3: 
                resultado = num1 * num2;
                printf("%2f", resultado);
                getch(); 
                break; 
            case 4: 
                resultado = num1 / num2;
                printf("%2f", resultado);
                getch(); 
                break;                                     
            case 5: 
                printf("saliendo");
                getch();
                break; 
            default: 
                printf("Operacion no valida"); 
                getch(); 
                break;
        }
    } while (opcion != 5);

    return 0; 
}