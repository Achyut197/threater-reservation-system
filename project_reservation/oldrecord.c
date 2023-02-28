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
void old_record()
{
	char ch;
	FILE *fp;	
	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		system("clear");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);		
	}
	fclose(fp);
}