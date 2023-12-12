#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho_maximo 100

typedef struct aluno{
    char nome[100];
    int nota;
}Aluno;

typedef struct listaAlunos{
    int primeiro;
    int ultimo;
    Aluno alunos[tamanho_maximo];
}ListaAlunos;


ListaAlunos lista_vazia(ListaAlunos listaAlunos){
    listaAlunos.primeiro=0;
    listaAlunos.ultimo=0;
    return listaAlunos;
}
ListaAlunos add(ListaAlunos listaAlunos, Aluno aluno){
   
        printf("Digite o nome do aluno:");
        scanf("%s", listaAlunos.alunos[listaAlunos.ultimo].nome);
        
        printf("Digite a nota do aluno:");
        scanf(" %d", &listaAlunos.alunos[listaAlunos.ultimo].nota);
        
        
        return listaAlunos;
}

void menu(){
    printf("1-Inserir Aluno:\n");
    printf("2-Remover um aluno:\n");
    printf("3-Retornar o tamanho da lista:\n");
    printf("4-Averiguar se um aluno está presente:\n");
    printf("5-Retorna a lista ordenada do menor para maior resultado:\n");
}
int main()
{
    
    int opc,cont=0,guarda,guarda02,tamanho,cont2=0;
    char nomes[50],armazena[tamanho],armazena02[50];
    ListaAlunos listaAlunos;
    Aluno aluno;
    listaAlunos.primeiro=0;
    listaAlunos.ultimo=0;
    menu();
    printf("Digite a opcao: ");
    scanf("%d",&opc);
    
    do{
    switch (opc){
        case 1: {
            
            if(cont ==0){
                
                
                printf("Digite o nome do aluno:");
                scanf("%s", listaAlunos.alunos[listaAlunos.ultimo].nome);
        
                printf("Digite a nota do aluno:");
                scanf(" %d", &listaAlunos.alunos[listaAlunos.ultimo].nota);
                
                listaAlunos.ultimo++;
                cont++;
            }
            else{
                printf("Digite o nome do aluno:");
                scanf("%s", listaAlunos.alunos[listaAlunos.ultimo].nome);
        
                printf("Digite a nota do aluno:");
                scanf(" %d", &listaAlunos.alunos[listaAlunos.ultimo].nota);
                
                listaAlunos.ultimo++;
            }
            break;
        }
        case 2: {
            printf("Digite o nome do aluno que deseja remover: ");
            scanf("%s",nomes);
            
            
            for(int n=0;n<listaAlunos.ultimo;n++){
                if(strcmp(listaAlunos.alunos[n].nome, nomes)==0){
                  
                   strcpy(listaAlunos.alunos[n].nome,listaAlunos.alunos[listaAlunos.ultimo].nome);
                   listaAlunos.ultimo--;
                }
            }
            break;
        }
        case 3: {
            printf("O tamanho da lista e:%d \n",listaAlunos.ultimo);
        }
        case 4: {
            printf("Digite o aluno para saber se está presente na lista: ");
            scanf("%s", nomes);
            
             for(int n=0;n<listaAlunos.ultimo;n++){
                if(strcmp(listaAlunos.alunos[n].nome, nomes)==0){
                  cont2++;
                  
                   
                }
                
                                    
                
                
            }
            if(cont2==0){
                printf("O aluno nao esta presente");
            }
            else{
                 printf("O aluno esta presente na lista");
            }
            break;
        }
        case 5: {
                for(int i=0;i<listaAlunos.ultimo;i++){
                    for(int j=0;j<listaAlunos.ultimo;j++){
                        if(listaAlunos.alunos[i].nota<listaAlunos.alunos[j].nota){
                            
                            strcpy(armazena,listaAlunos.alunos[j].nome);
                            guarda = listaAlunos.alunos[j].nota;
                            strcpy(listaAlunos.alunos[j].nome,listaAlunos.alunos[i].nome);
                            listaAlunos.alunos[j].nota =listaAlunos.alunos[i].nota;
                            strcpy(listaAlunos.alunos[i].nome,armazena);
                            listaAlunos.alunos[i].nota = guarda;
                        }
                    }
                }
            for(int k=0;k<listaAlunos.ultimo;k++){
                printf("Nome: %s",listaAlunos.alunos[k].nome);
                printf("(%d)",listaAlunos.alunos[k].nota);
                printf("\t");
            }
            
            break;
        }
        
    }
    cont2=0;
    printf("\n");
    menu();
    printf("Escolha a opcao: ");
    scanf("%d",&opc);
    }while(opc!=6);
    return 0;
}
