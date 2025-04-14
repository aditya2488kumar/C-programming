
#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node *next;
};

// pointer ka address contain karne wale bhi  pointer hi hota hai bas use pointer ko banate samye ** do star likhne pdenge  
// s ponter hai jo start name ke pointer ko point kar rha hai

void insertAtLast(struct node **s, int data) {
    struct node *n, *t;
    n = (struct node*)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;

    if ( *s == NULL) {
        *s = n;
    } 
    else {
        t = *s;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = n;
    }
}

void deleteFirst(struct node **s) {
    struct node *t;
    if (*s != NULL) {
        t = *s;
        *s = t->next;
        free(t);
    }
}

void printVal(struct node *start) {
    while (start) {
        printf("%d  ", start->item);
        start = start->next;
    }
}


int main() {

    struct node *start = NULL;
    insertAtLast(&start, 34);   // 34 will insert in the node
    insertAtLast(&start, 78);
    insertAtLast(&start, 12);   // 34 will insert in the node
    insertAtLast(&start, 90);

    printVal(start);
    printf("\n");
    deleteFirst(&start);
    printVal(start);

    return 0;
}