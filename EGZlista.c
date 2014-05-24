#include <stdio.h>
#include <stdlib.h>

struct wezel{

	int liczba;
	struct wezel *next;

};



void push_begin(struct wezel ** head)
{

struct wezel * nowy = (struct wezel*)malloc(sizeof(struct wezel));
if(nowy != NULL)
{
	printf("Prosze podac liczbe \n" );
	scanf("%d", &nowy->liczba);
	nowy->next = *head;
	*head = nowy;
}
}


void push_back(struct wezel ** head)
{
struct wezel * nowy = (struct wezel*)malloc(sizeof(struct wezel));
struct wezel * tymczasowy= *head;	
if(nowy != NULL)
{
	printf("Prosze podac liczbe \n" );
	scanf("%d", &nowy->liczba);
	
	if(*head== NULL)
	{
		*head = nowy;
		nowy->next = NULL;
	}
	else {

	while(tymczasowy->next)
	{
		tymczasowy= tymczasowy->next;
		
	}
	tymczasowy->next = nowy;
	nowy->next = NULL;
	}



}
}

void wypisz(struct wezel **head)
{

	struct wezel *tymczasowy= *head;
	while(tymczasowy)
		{
		printf("Twoja liczba to: ");
		printf("%d", tymczasowy->liczba);
		printf("\n");
		tymczasowy=tymczasowy->next;
		}
}

void delete_end(struct wezel **head)
{

	struct wezel *tymczasowy= * head;
	struct wezel *tymczasowy1;	
	if(head!=NULL)
	{
		while(tymczasowy->next)
		{
		tymczasowy= tymczasowy->next;
		tymczasowy1 = tymczasowy;
		
		}
		delete tymczasowy;
		tymczasowy1->next = NULL;
	}

}

void delete_begin(struct wezel **head)
{

	struct wezel * tymczasowy = * head;
	*head= tymczasowy->next;
	delete tymczasowy;




}


int main()
{


struct wezel * head = NULL;

push_back(&head);
push_back(&head);
push_back(&head);
printf("Lista: \n");
wypisz(&head);
delete_end(&head);
printf("Lista po usunieciu ostatniego elementu: \n");
wypisz(&head);

push_back(&head);
push_back(&head);
push_back(&head);
printf("Lista po dodaniu elementow: \n");
wypisz(&head);
delete_begin(&head);
printf("Lista po usunieciu pierwszego elementu: \n");

wypisz(&head);


}
