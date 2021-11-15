#include <stdio.h>
#include <math.h>

float alunosala(float alunos);

//b
const float maxsala = 50;

int main(void) {

    float alunos;
    int contar=1,salaExame=0,pos; 

    //a
    // printf("Insira o numero de alunos por sala:");
    // scanf("%d",&maxsala);

    do{

        printf("Numero de alunos inscritos na UC %d: ",contar);
        scanf("%f",&alunos);

        if (alunos > 0){ 
            printf("Numero de salas necessário para a UC %d: %0.f \n", contar, alunosala(alunos));

                if(alunosala(alunos)>salaExame){
                    salaExame = alunosala(alunos);
                    pos = contar;
                }

            
            contar++;
        }

    }while(alunos != 0);

    printf("\nMaior numero de salas por exame: %d\n", salaExame);
    printf("Ocorre na UC %d",pos);

}

float alunosala(float alunos){

   return ceil(alunos/maxsala);

}
