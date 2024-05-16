#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(Node** tail, int data) {
    Node* newNode = createNode(data);
    if (*tail == NULL) {
        *tail = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = (*tail)->next;
        (*tail)->next = newNode;
        *tail = newNode;
    }
}

void printList(Node* tail) {
    if (tail==NULL) return;
    Node* temp = tail->next;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("(circular)\n");
}

int main() {
    Node* tail = NULL;
    insert(&tail, 10);
    insert(&tail, 20);
    insert(&tail, 30);
    printList(tail);
    return 0;
}