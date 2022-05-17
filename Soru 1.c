
#include <stdio.h>
#include <stdlib.h>
 struct node{
      int num;
      struct node *next;
 }*head,*p,*yenid;
 
 
 typedef struct node node;
 
 int main(){
     int x;
     
     printf("sayi giriniz: ");
     scanf("%d",&x);
     
     
    while(x!=-1){
         if(head==NULL){
            head=(node*)malloc(sizeof(node));
            head->num=x;
 }
         if(x%2!=0){
            yenid=(node*)malloc(sizeof(node));
           yenid->num=x;
           yenid->next=head;
            head=yenid;
            
            printf("tek eklendi.\nsayi giriniz: ");scanf("%d",&x);
 }       else{
             p=head;
             
             
         while(p->next==NULL)
              p=p->next;
             yenid=(node*)malloc(sizeof(node));
              yenid->num=x;
              p->next=yenid;
              
              printf("cift eklendi.\nsayi giriniz: ");scanf("%d",&x);
 }}
 
        free(head);}
