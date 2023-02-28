#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"show.h"
struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;

}b;

static int seat = 60 ;
void find() //find details
{
	struct book b;
	FILE *fp;
	
	char ch[20];
	printf("Enter show code :");
	scanf("%s",ch);
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,ch) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tshow name ::%s",b.name);
				printf("\n\t\tshow date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d",b.cost);
				break;
			}
		}
		
	}

	fclose(fp);
}