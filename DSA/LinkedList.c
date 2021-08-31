#include<stdio.h>
#include<stdlib.h>

// declaring node
struct Node
{
    int data;
    struct Node* next;
};

// declaring node
struct Node* head;

//insert at beginning of linkedlist
void InsertBegining(int x){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next=head;
    head = temp;
}

// insert data at last0
void InsertEnd(int x){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        struct Node* temp1 = head;
        while(temp1->next != NULL){
            temp1= temp1->next;
        }
        temp1->next = temp;
    }  
}

// insert data at pos th position
void InsertAtPosition(int x, int pos){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if(pos == 1){
        temp->next = head;
        head = temp;
        return;
    }

    struct Node* temp1 = head;

    // get pos-1 node
    for(int i=0;i<pos-2;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;

}

//delete node at position
void deleteAtPosition(int pos){
    struct Node* temp = head;
    if(pos == 1){
        head = temp->next;      //delete head
        free(temp);
        return;
    }
    int i;
    for(i=0;i<pos-2;i++){   
        temp = temp->next;
    }
    // temp postion to n-1 node
    struct Node* temp1 = temp->next;  //nth node
    temp->next = temp1->next;   //fix the link
    free(temp1);
}

//print list   
void Print(){
    struct Node* temp = head;
    printf("List : ");
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void PrintRecursion(struct Node *p){
    if(p == NULL){
        printf("\n");
         return;
    }
    printf("%d ", p->data);
    PrintRecursion(p->next);
}

void ReversePrint(struct Node *p){
    if(p == NULL){
        printf("\n");
         return;
    }
    ReversePrint(p->next);
    printf("%d ", p->data);

}

void Reverse(){
    struct Node *prev,*current, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {   
        next = current->next;  //addr of next node
        current->next = prev;  //connect the current node with prev node
        prev = current;         //now prev node is current node
        current = next;         //and current node is next node   
    }
    head = prev;   
}

void ReverseRecursion(struct Node *p){
    // exit condition
    if(p->next == NULL){
        head = p;       //set last node to head
        return;
    }
    ReverseRecursion(p->next);
    struct Node *q = p->next;
    q->next = p;
    p->next = NULL;

}


int main(){
    head = NULL;        //empty linkedlist
    
    InsertBegining(10);
    Print();  
    InsertEnd(20);
    Print();
    InsertAtPosition(30, 2);
    Print();
    InsertAtPosition(40, 3);
    Print();
    // deleteAtPosition(1);
    // Print();
    // deleteAtPosition(3);
    // Print();
    // Reverse();
    // Print();
    ReverseRecursion(head);
    PrintRecursion(head);
    // ReversePrint(head);

}