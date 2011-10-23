//#######################################################################
//# Author: FTG
//# Created Time: 西元2011年10月23日 (週日) 11時57分39秒
//# File Name: links_table.c
//# Description: 
//#######################################################################
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
    char title[20];
    int price;
    
    struct book *next;
};
 
int main(void){
 struct book *head=NULL; 
 struct book *previous,*current;
 char input[50];
 printf("bookname:");
 while(gets(input)!=NULL && input[0]!='\0')
 {
    current= (struct book *)malloc(sizeof(struct book));
    if(head==NULL)
        head=current;
    else
        previous->next=current;
    strcpy(current->title,input);
    printf("price:");
    scanf("%d",&current->price);
    printf("put the next book or line break to stop:");
    if(getchar()!='\n')
       continue;
    previous = current;
 }
if(head ==NULL)
    printf("No data!\n");
else
    printf("Here is the list of:\n");
    current=head;
    while(current!=NULL)
    {
        printf("The book %s  price is %d\n",current->title,current->price);
        current = current->next;
    }

if(head!=NULL)
{
    current=head;
    while(current!=NULL)
        {
        free(current);
        current = current->next;
        }
}




 return 0;
}


