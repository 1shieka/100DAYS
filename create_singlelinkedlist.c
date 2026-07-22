//Create and Traverse Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    int n;

    // Read number of nodes
    scanf("%d", &n);
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    // Create the linked list
    for (int i = 0; i < n; i++) {

        newNode = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory for new node
        scanf("%d", &newNode->data); // Read data
        newNode->next = NULL; // New node points to NULL


        if (head == NULL) { // If first node, make it head
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode; // Attach new node at the end
            temp = newNode;
        }
    }
  
    temp = head; // Traverse and print the linked list

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
