/*# include <stdio.h>
# include <stdlib.h>
// defining the user defined data type node structure
    struct node{
        int data;
        struct node* next ;
    };
    struct node* head ;        //head of the list
    
   
//function for insertion : to insert node at the end creating linked list
void insert (int value) {
    struct node* newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data== value;
    newnode->next== NULL;
    int count = 0;
    if (head ==NULL){              //when list is empty
        head = newnode; 
    }
    
    else {
        struct node* temp = head;
        while(temp->next!= NULL){           
            temp = temp->next;
            //temp->next = newnode ;
            count++;
        }
        temp->next = newnode ;
    } 
    printf("inserted %d\n",value);
    
}   
//function for deletion: to delete a node by value
void delete(int value){
    struct node* prev = NULL;
    struct node* temp =head;
    if(temp==NULL){                     //to check list is empty or not
        printf("list is empty");
        return;
    }
    if(temp!=NULL && temp->data == value){       //if value is in first node
        head = temp->next;
        free(temp);                              //deleting node 
        return;
    }
    while(temp!=NULL && temp->data != value){
        prev = temp ;
        temp = temp->next;                       //to traverse the list till the node containing the value is found   
    }
    if(temp == NULL){
        printf("value %d is not founf in the list",value);
    }
    prev->next = temp->next;                    
    free(temp);                           //deleting node containing given value
    return;
}
// function for traversing 
void traverse(){
    struct node*t = head; 
    if (t==NULL){
        printf("list is empty");
        return;
    }
    
        printf("linked list: ");
        while(t!=NULL){
            printf("%d->",t->data);
            t=t->next;        
    }
    printf("NULL\n");
}

int main(){
    int value,value2,value3,num;
    
    
    
        printf("enter the value:");
        scanf("%d",&value);
        scanf("%d",&value2);
        scanf("%d",&value3);
        insert(value);
        insert(value2);
        insert(value3);
    
    traverse();
    printf("done");
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Global head pointer
struct node* head = NULL;

// Function to insert at the end
void insert(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    printf("inserted %d\n", value);
}

//function for deletion: to delete a node by value
void delete(int value){
    struct node* prev = NULL;
    struct node* temp =head;
    if(temp==NULL){                     //to check list is empty or not
        printf("list is empty");
        return;
    }
    if(temp!=NULL && temp->data == value){       //if value is in first node
        head = temp->next;
        free(temp);                              //deleting node 
        return;
    }
    while(temp!=NULL && temp->data != value){
        prev = temp ;
        temp = temp->next;                       //to traverse the list till the node containing the value is found   
    }
    if(temp == NULL){
        printf("value %d is not found in the list",value);
    }
    prev->next = temp->next;                    
    free(temp);                           //deleting node containing given value
    return;
}

// Function to traverse and print the list
void traverse() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int value1, value2, value3, value4;

    printf("Enter 4 values:\n");
    scanf("%d%d%d%d", &value1, &value2, &value3, &value4);

    insert(value1);
    insert(value2);
    insert(value3);
    insert(value4);

    traverse();
    printf("list after deleting a node: ");
    delete(4);
    traverse();
    delete(6);
    traverse();
    delete(8);
    traverse();
    return 0;
}