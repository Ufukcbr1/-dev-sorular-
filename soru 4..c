#include <stdio.h>
#include <stdlib.h> 
  struct node{
  int num;
 struct node *next;
 }*head,*x,*New,*temp,*show;
 
 
   typedef struct node node;

   node *makeList(int size){
   int i;
   
   head=(node*)malloc(sizeof(node));
   temp=head;
   
   printf("ilk deger?:");
   scanf("%d",&head->num);
   
   for(i=1;i<size;i++){
      New=(node*)malloc(sizeof(node));
      printf("yeni deger?:");
	  scanf("%d",&New->num);
	  
      temp->next=New;
      temp=temp->next;
 }
      temp->next=NULL;
 }
 
   node showList(node *head){
   printf("Liste:");
   show=head;
   
   while(show!=NULL){
   printf("%d,",show->num);
   
   show=show->next;
 }
    printf("\n");
}

    node *changeFirstAndLast(node *head){
    int b;
    x=head;
    
    while(x->next!=NULL)
         x=x->next;
         b=head->num;
         head->num=x->num;
         x->num=b;
         printf("guncellendi.\n");
 }
 
   int main(){
   int size;
   
   if(head==NULL){
      printf("boyut giriniz:");
	  scanf("%d",&size);
	  
      makeList(size);
 }
     showList(head);
     changeFirstAndLast(head);
     showList(head);
     free(head);
     
 }
