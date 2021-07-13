#include<stdio.h>
#include<stdlib.h>

/*Code 1*/ 


	struct Aluno{
		int matricula;
		char nome[50];
		float notas[3]; 	
		
		
	};
		
		typedef struct Aluno Aluno;
		
		int main(void){
			
			int i, j, g;
			float a1, a2, a3, a4;
			
		 	Aluno alunos[4];
			 
			 
			 	for (i=0;i<4;i++){
			 	printf("Matricula do aluno %d: \n", i+1);
				scanf("%d", &alunos[i].matricula);		 	
		printf("=====================\n\n");
					printf("Nome aluno %d: \n", i+1);
					scanf("%s", alunos[i].nome);
						for	(j=0;j<3;j++){
		printf("=====================\n\n");
							printf("Entre com a nota %d do aluno %d \n", j+1, i+1);
							scanf("%f", &alunos[i].notas[j]);
						
							
						}			
				}
				
				for (i=0;i<4;i++){
				printf("Nome do aluno %d: %s \n\n", i+1, alunos[i].nome);
		printf("=====================");
					printf("Matricula aluno %d : %d\n\n", i+1, alunos[i].matricula);					
		printf("=====================");
						for	(j=0;j<3;j++){
							printf("Nota do aluno %d igual a %f \n\n", i+1, alunos[i].notas[j]);
		printf("=====================");		
						}
				}
				
				
				
	return 0;
}

