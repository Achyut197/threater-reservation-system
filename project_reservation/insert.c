#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"show.h"
struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;

}b;

static int seat = 60 ;

void insert_details()
{
	
	FILE *fp;
	struct book b;
	printf("Enter Show code :- ");	
	scanf("%s",b.code);
	printf("Enter show name :- ");	
	scanf("%s",b.name);
	printf("Enetr Release Date:- ");	
	scanf("%s",b.date);
	printf("Enetr Ticket Price:- ");	
	scanf("%d",&b.cost);
	
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.code,b.name,b.date,b.cost);
		printf("Record insert Sucessfull");
	}
		printf("\n");
	fclose(fp);
}