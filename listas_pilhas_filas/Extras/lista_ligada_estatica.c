#include <stdio.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int next[MAX];
    int head;
} StaticLinkedList;

void initList(StaticLinkedList *list) {
    for (int i = 0; i < MAX - 1; i++) {
        list->next[i] = i + 1;
    }
    list->next[MAX - 1] = -1;
    list->head = -1;
}

void insert(StaticLinkedList *list, int value) {
    static int freeIndex = 0;
    if (freeIndex < MAX) {
        list->data[freeIndex] = value;
        list->next[freeIndex] = list->head;
        list->head = freeIndex;
        freeIndex++;
    } else {
        printf("List is full\n");
    }
}

void printList(StaticLinkedList *list) {
    int i = list->head;
    while (i != -1) {
        printf("%d -> ", list->data[i]);
        i = list->next[i];
    }
    printf("NULL\n");
}

int main() {
    StaticLinkedList list;
    initList(&list);
    insert(&list, 10);
    insert(&list, 20);
    insert(&list, 30);
    printList(&list);
    return 0;
}
