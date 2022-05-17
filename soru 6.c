#include <stdio.h>
#include <stdlib.h>

   struct node{
   int num;
   struct node *next;
  }*head,*a,*newNode;
  
  
   typedef struct node node;

    int main(){
    int y;
    
    printf("Lutfen sayi giriniz: ");
    scanf("%d",&y);
    
    while(y!=-1){
         if(head==NULL){
            head=(node*)malloc(sizeof(node));
            head->num=y;
}
    if(y%2==0){
       newNode=(node*)malloc(sizeof(node));
       newNode->num=y;
       newNode->next=head;
       head=newNode;
       
       printf("cift eklendi.\nsayi giriniz: ");scanf("%d",&y);
       
 } else{
      a=head;
      
   while(a->next==NULL)
        a=a->next;
        newNode=(node*)malloc(sizeof(node));
        newNode->num=y;
        a->next=newNode;
        printf("tek eklendi.\nsayi giriniz: ");scanf("%d",&y);
 }
 }
      free(head);
}
