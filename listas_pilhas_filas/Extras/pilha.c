#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

Stack* createStack() {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->top = NULL;
    return s;
}

void push(Stack* s, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = s->top;
    s->top = temp;
}

int pop(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    Node* temp = s->top;
    int data = temp->data;
    s->top = s->top->next;
    free(temp);
    return data;
}

int isStackEmpty(Stack* s) {
    return s->top == NULL;
}

void printStack(Stack* s) {
    Node* temp = s->top;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Stack* s = createStack();
    push(s, 1);
    push(s, 2);
    push(s, 3);
    printStack(s); // Stack: 3 2 1
    printf("Popped: %d\n", pop(s)); // Popped: 3
    printStack(s); // Stack: 2 1
    return 0;
}
