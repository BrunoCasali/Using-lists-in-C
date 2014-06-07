/*
Seguindo o conceito de listas, desenvolva um algoritmo de estrutura de dados, que colete as 2 notas 
durante o bimestre de todos os acadêmicos da disciplina de estrutura e armazene em uma lista...
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct student {

	char *name;
	float grades[2]; //first and second;
	
} Student;

typedef struct list {
	Student* classmate;
	struct list* prox;
} List;

List* insert (List* l, Student* i)
{
	List* new = (List*) malloc(sizeof(List));
	new -> classmate = i;
	new -> prox = l;
	return new;
}

List* initialize (void)
{
	return NULL;
}

Student* initializeStudent (void)
{
	return NULL;
}

int main (void)
{
	List* l;
	l = initialize();
	
 	Student* s;
	s -> grades[0] = 4.5;
//	s -> grades[1] = 6.9;
	//s -> name = "Bruno Casali";
	
	l = insert(l, s);
	
	printf("ASUDG IYAGSUYDGASUYGDUYAS\n\n");
	
	return 0;
}


/*
int value = 0, i = 0;
	printf("---- classmate rme o número de alunos: ");
	scanf("%d", &value);
	
	Student st[value];
	for(i; i < value; i++){

		printf(" ----- Your ID: %d ----- ", i + 1);
		
		printf("classmaterme então o seu nome n° :");
		//fgets(st[i].name, 30, stdin);
		scanf("%10[0-9a-zA-Z ]s", st[i].name);
	
		printf("%s ", st[i].name);
	
		printf("E suas notas separadas por espaço n° %d : ", i + 1);
		scanf("%d %d", &st[i].grades[0], &st[i].grades[1]);

		l = insere(l, st[i]);
	
*/
