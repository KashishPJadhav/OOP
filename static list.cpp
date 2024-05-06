#include <stdio.h>

#define MAX_SIZE 10

void displayList(int list[], int size) {
    printf("List elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void insertElement(int list[], int *size, int position, int element) {
    if (*size >= MAX_SIZE) {
        printf("List is full. Cannot insert more elements.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion failed.\n");
        return;
    }

    for (int i = *size; i > position; --i) {
        list[i] = list[i - 1];
    }

    list[position] = element;
    (*size)++;
    printf("Element %d inserted at position %d.\n", element, position);
}

void deleteElement(int list[], int *size, int position) {
    if (*size == 0) {
        printf("List is empty. Cannot delete elements.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion failed.\n");
        return;
    }

    int deletedElement = list[position];

    for (int i = position; i < *size - 1; ++i) {
        list[i] = list[i + 1];
    }

    (*size)--;
    printf("Element %d deleted from position %d.\n", deletedElement, position);
}

int main() {
    int list[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;

    int choice, position, element;

    do {
        printf("\nStatic List Operations:\n");
        printf("1. Display List\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayList(list, size);
                break;
            case 2:
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insertElement(list, &size, position, element);
                break;
            case 3:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteElement(list, &size, position);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

