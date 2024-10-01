#include <stdio.h>

int escolheropcao ()
{
    int opcao;
    
    printf("Digite 1 para Somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para dividir\n");
    printf("Digite 4 para multiplicar\n");
    printf("Digite 0 para encerrar\n");
    
    printf("Digite sua Opção:\n");
    scanf("%d", &opcao);
    
    return opcao;
}

int main()
{
    float n1, n2, calculo;
    int opcao;
    
    do
    {
        
        printf("Digite um número para N1\n");
    scanf("%f", &n1);
    
    printf("Digite um número para N2\n");
    scanf("%f", &n2);
    
        opcao = escolheropcao();
        
        switch(opcao)
        {
            case 1:
            calculo = n1 + n2;
            printf("Resultado da soma %f\n", calculo);
            break;
            
            case 2:
            calculo = n1 - n2;
            printf("Resultado da subtração %f\n", calculo);
            break;
            
            case 3:
            
            if(n1 == 0 || n2 == 0)
            {
                printf("Impossível dividir\n");
            }
            else
            {
            calculo = n1/n2;
            printf("Resultado da divisão %f\n", calculo);
            }
            break;
            
            case 4:
            calculo = n1*n2;
            printf("Resultado da subtração %f\n", calculo);
            break;
            
            default:
            printf("Encerrando...");
            break;
            
        }
        
    }while(opcao != 0);
    

    return 0;
}