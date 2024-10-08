#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
 int data;  
 struct node *next;  
};  
struct node *HEAD;  
 
void insert_node();
void delete_at_begin();
void delete_at_last();
void delete_random();
void searching();
void print();    
void main()  
{  
 int your_choice=0;  
 while(your_choice != 9)  
 {
   ​printf("\n \n");
   ​printf("\n\nOperations on Singly Linked List!\n\n");
   ​printf("Choose an option from the below list!\n");  
   ​printf("\n \n");  
   ​printf("1.Insert node in list!\n2.Do deletion at beginning!\n3.Do deletion at end!\n4.Do deletion at any position!\n5.Search an element in list!\n6.Display!\n7.Exit!\n");  
   ​printf("\nEnter your choice?\n");    ​
   ​scanf("\n%d",&your_choice);  
   ​switch(your_choice)  
   ​{  
       ​case 1:  
       ​insert_node(); ​
       ​break;  
       ​case 2:  
       ​delete_at_begin();    ​
       ​break;  
​​​case 3:  
       ​delete_at_last();    ​
       ​break;
           case 4:  
       ​delete_random();   ​
       ​break;  
           case 5:  
       ​searching();   ​
       ​break;
           case 6:  
       ​print();   ​
       ​break;
       ​case 7:  
       ​exit(0);  
       ​break;  
       ​default:  
       ​printf("Please enter a choice from the following list!");  
   ​}  
 }  
}  
void insert_node()  
{  
 struct node *point,*tmp;  
 int value;​
 point = (struct node*)malloc(sizeof(struct node)); ​
 if(point == NULL)  
 {  
   ​printf("\nInvalid!!");​
 }  
 else  
 {  
   ​printf("\nEnter the value: \n");  
   ​scanf("%d",&value);  
   ​point->data = value;  
   ​if(HEAD == NULL)  
   ​{  
       ​point -> next = NULL;  
       ​HEAD = point;  
       ​printf("\nNice, The Node is inserted!");  
   ​}  
   ​else  
   ​{  
       ​tmp = HEAD;  
       ​while (tmp -> next != NULL)  
       ​{  
           ​tmp = tmp -> next;  
       ​}  
       ​tmp->next = point;  
       ​point->next = NULL;  
       ​printf("\nNice, The Node is inserted!");  
    ​
   ​}  
 }  
}  
 
void delete_at_begin()  
{  
 struct node *point;  
 if(HEAD == NULL)  
 {  
   ​printf("\nThe List is empty!\n");  
 }  
 else  
 {  
   ​point = HEAD;  
   ​HEAD = point->next;  
   ​free(point);  
   ​printf("\nThe node is deleted from the beginning!\n");  
 }  
}  
void delete_at_last()  
{  
 struct node *point,*point1;  
 if(HEAD == NULL)  
 {  
   ​printf("\nThe List is empty!");  
 }  
 else if(HEAD -> next == NULL)  
 {  
   ​HEAD = NULL;  
   ​free(HEAD);  
   ​printf("\nOne node is deleted from the list!\n");  
 }  
 else  
 {  
   ​point = HEAD;  
   ​while(point->next != NULL)  
   ​{  
       ​point1 = point;  
       ​point = point ->next;  
   ​}  
   ​point1->next = NULL;  
   ​free(point);  
   ​printf("\nThe Node is deleted from the last of the node!\n");  
 }​
}  
void delete_random()  
{  
 struct node *point,*point1;  
 int pos,a;    
 printf("\nEnter the position of the node after which you want to delete!\n");  
 scanf("%d",&pos);  
 point=HEAD;  
 for(a=0;a<pos;a++)  
 {  
   ​point1 = point;  ​
   ​point = point->next;  
        ​
   ​if(point == NULL)  
   ​{  
       ​printf("\nSorry, but you cannot delete!");  
       ​return;  
   ​}  
 }  
 point1 ->next = point ->next;  
 free(point);  
 printf("\nThe Node is deleted at location: %d",pos+1);  
}  
 
void searching()  
{  
 struct node *point;  
 int value,a=0,count;  
 point = HEAD;  
 if(point == NULL)  
 {  
   ​printf("\nSorry, but the list is empty!\n");  
 }  
 else  
 {  
   ​printf("\nEnter the value which you want to search: \n");  
   ​scanf("%d",&value);  
   ​while (point!=NULL)  
   ​{  
       ​if(point->data == value)  
       ​{  
           ​printf("The value which you searched for, found at: %d ",a+1);  
           ​count=0;  
       ​}  
       ​else  
       ​{  
           ​count=1;  
       ​}  
       ​a++;  
       ​point = point -> next;  
   ​}  
 if(count==1)  
 {  
   ​printf("Sorry, the value is not found!\n");  
 }  
 }​
    ​
}  
 
void print()  
{  
 struct node *point;  
 point = HEAD;  
 if(point == NULL)  
 {  
   ​printf("Please enter something to print!");  
 }  
 else  
 {  
   ​printf("\nPrinting the values!\n");  
   ​while (point!=NULL)  
   ​{  
       ​printf("\n%d",point->data);  
       ​point = point -> next;  
   ​}  
 }  
}
