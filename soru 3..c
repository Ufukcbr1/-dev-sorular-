#include <stdio.h>
#include <stdlib.h>
   struct node{ int num;
   struct node *next;
 }*head,*x,*y,*temp,*New,*show;
 
 
 typedef struct node node;
 
     node *makeList(int size){
     int i;
     
     head=(node*)malloc(sizeof(node));
     temp=head;
     
     printf("ilk deger: ");scanf("%d",&head->num);
     
     for(i=1;i<size;i++){
        New=(node*)malloc(sizeof(node));
        
        printf("yeni deger: ");scanf("%d",&New->num);
        temp->next=New;
        temp=New;
 }
        temp->next=NULL;
        printf("olusturuldu.\n");
 }
 
       node *showList(node *head){
       show=head;
       
       printf("Liste:");
       
       while(show!=NULL){
            printf("%d,",show->num);
            show=show->next;
 }
            printf("\n");
 }
 
     node *deleteMiddle(node *head){
     int i,delte,cnt=1;
     x=head;
     
     while(x->next!=NULL){
          x=x->next;
          cnt++;
 }
         delte=cnt/2;
         if(cnt%2!=0)
           delte++;
           x=head;
           y=head->next;
           
           
         for(i=0;i<=delte-3;i++){
            y=y->next;
            x=x->next;
 }
         x->next=y->next;
         
        free(y);
        printf("guncellendi.\n");
        
        return head;
}
    int main(){
        int size;
        
        if(head==NULL){
           printf(" Lutfen boyut giriniz:");scanf("%d",&size);
           makeList(size);
 }
        showList(head);
        deleteMiddle(head);
        showList(head);
        free(head);
 }
