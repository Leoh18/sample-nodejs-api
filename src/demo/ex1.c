#include <stdio.h>
#include <stdlib.h>

int main(){
    struct pesquisa{
    char nomeHabitante[50];
    int estadoCivil;
    float salario;
    int numDependentes;
    }habitante[5];

    int i;
    float mediaSalario, somaSalario;

    for(i=0; i<5; i++){
        printf("\nInforme o nome: ");
        // gets(habitante[i].nomeHabitante);
        fflush(stdin);

        printf("\nEstado civil: \n1 - Solteiro\n 2 - Casado\n");
        habitante[i].estadoCivil = 1;
        //scanf("%i",&habitante[i].estadoCivil);

        printf("\nInforme o salario: ");
        habitante[i].salario = 10;
        //scanf("%f",&habitante[i].salario);

        printf("\nInforme o numero de dependentes: ");
        habitante[i].numDependentes = 1;
        //scanf("%i",&habitante[i].numDependentes);

	    somaSalario += habitante[i].salario;
        
    }

    for(i=0; i<5; i++){
        printf("\nNome: %s\nEstado Civil: %i\nSalario: R$ %2.f\nNumero de dependentes: %i\n",habitante[i].nomeHabitante,habitante[i].estadoCivil,habitante[i].salario,habitante[i].numDependentes);
    }

    mediaSalario = somaSalario/5;
    printf("\nMedia de Salario: R$ %2.f\n",mediaSalario);
}