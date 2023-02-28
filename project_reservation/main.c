#include<string.h>
#include<stdio.h>
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

void insert_details();
void viewAll();  
void find(); 
void book_ticket(); 
void old_record(); 

void main()
{

	 int ch;
 	do{
	printf("\n====================================================================");
	printf("\n");	
	printf("\t show Ticket booking ");
	printf("\n");
	printf("\n====================================================================");
	
	printf("\nPress <1> Insert show");
   	printf("\nPress <2> View All show");
	printf("\nPress <3> Find show ");
	printf("\nPress <4> Book Ticket");
	printf("\nPress <5> View All Transections");
   	printf("\nPress <0> Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch); 	

   	switch (ch)
   	{
    		case 1 :
    		insert_details();
   		break;
		case 2:
    		viewAll();
   		break;
    		
		case 3:
    		find();
   		break;

		case 4:
		book_ticket();
		break;
		
		case 5:
		old_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);
}