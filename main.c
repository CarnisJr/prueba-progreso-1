//Christopher Miranda
#include<stdio.h>
#include<string.h>

int main(void){

    char contrasenia[20] = "nicoalejo";
    char usr[20] = "Nicolas";
    char contraseniaIngr[20];
    char usrIngr[20];
    int contErrores;
    int valorCentinela = 0;

    //variables para menu
    int selector;

    //variables factorial
    int num, aux, factorial;

    //variables primos
    int num1, aux1, contPrimos, contAux;


    contErrores = 0;

    do{
        printf("\t---LOG IN---\t\n");
        printf("Ingresa tu Usuario: ");
        scanf("%s", &usrIngr);
        printf("Ingresa tu contraseña: ");
        scanf("%s", &contraseniaIngr);

        if((strcmp(contrasenia, contraseniaIngr)) != 0 || (strcmp(usr, usrIngr)) != 0){

            printf("\t---DATOS INCORRECTOS---\n");
            contErrores++;
            if(contErrores == 3){
                printf("Muchos errores\n");
                printf("\t---SALIENDO---\n");
                valorCentinela = 2;
            }

        }else if((strcmp(contrasenia, contraseniaIngr)) == 0 || (strcmp(usr, usrIngr)) == 0){

            //printf("Ingresado\n");
            valorCentinela = 1;
        }

    }
    while(valorCentinela == 0);
    

    if(valorCentinela == 1){

        do{

            printf("\t---MENU---\n");
            printf("1.Factorial\n2.¿Es primo?\n3.Salir\n");
            printf("Elija una opción: \n");
            scanf("%d", &selector);

            switch (selector)
            {
            case 1: //Calcular el factorial
                factorial = 1;
                printf("\t---CALCULAR FACTORIAL DE UN NÚMEROS---\n");

                do{
                    printf("Ingrese un número entero positivo: ");
                    scanf("%d", &num);                   
                }while(num < 0);

                aux = num;

                if(aux == 0){
                    printf("El factorial de %d es: %d\n", num, factorial);
                }else{

                    while(aux > 1){

                        factorial *= aux--;
                    } 
 
                    printf("El factorial de %d es: %d\n", num, factorial);
                }
               break;
            case 2: //Verficar si es primo o no
                contAux = 1;
                contPrimos = 0;
                printf("\t---VERIFICAR SI ES PRIMO O NO--\n");
                do{
                    printf("Ingrese un número entero positivo: ");
                    scanf("%d", &num1);                   
                }while(num1 < 0);
                
                aux1 = num1;
                while(contAux <= aux1){

                    if(aux1 % contAux == 0)
                        contPrimos++;
                    contAux++;
                }

                if(contPrimos == 2){
                    printf("%d es primo\n", num1);
                }else{
                    printf("%d no es primo\n", num1);
                }
                break;
            case 3:
                printf("\t---SALIENDO---\n");
                break;
            default:
                printf("\t--NO EXISTE ESA OPCIÓN---\n");
                printf("Vuelva a intentarlo\n");
                break;
            }

        }while(selector != 3);
    }

    return 0;
}