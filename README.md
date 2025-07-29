# LINKED-LIST-IMPLEMENTATION

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: PAYAL GUSAIN

*INTERN ID*: CT04DH1488

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

##This program is a basic implementation of a singly linked list using the C programming language. It demonstrates essential operations such as insertion at the end of the list, deletion of nodes by value, and traversal (displaying the entire list). These operations are crucial in understanding how dynamic data structures work in C and how memory is managed manually using pointers.

The program starts by including two standard libraries: <stdio.h> for input and output operations and <stdlib.h> for dynamic memory allocation using functions like malloc() and free(). A global pointer named head is used to keep track of the beginning of the linked list.

The fundamental unit of this data structure is a node, defined using a struct. Each node contains two components:

An integer data field to store the value.

A pointer next to point to the next node in the list.

Three function are there for operation like insertion deletion and traversing

Insert Operation

The insert function performs the insertion operation by adding a new node at the end of the singly linked list. It starts by dynamically allocating memory for a new node using malloc, assigning the user-provided value to the data field, and setting its next pointer to NULL, since it will be the last node. If the list is currently empty (head == NULL), the new node is directly assigned to head, becoming the first node. If the list is not empty, a temporary pointer temp is used to traverse through the list until the last node is reached. The new node is then linked to the end by setting temp->next to point to it. This ensures that elements are inserted in the order they are entered.

Delete Operation

The delete function removes a node containing a specific value from the singly linked list. It first checks if the list is empty by verifying if head is NULL. If it is, the function prints a message and exits. If the node to be deleted is the first node (i.e., head->data == value), the head pointer is updated to the next node, and the original head node is freed using free(). For nodes in the middle or end, a temporary pointer temp is used to traverse the list while tracking the previous node. Once the target node is found, it is unlinked by adjusting the next pointer of the previous node, and the memory of the deleted node is freed.

Traverse Operation

The traverse() function is responsible for printing the contents of the singly linked list. It first checks if the list is empty by verifying whether the head pointer is NULL. If the list is empty, it prints “List is empty.” Otherwise, it uses a temporary pointer temp to iterate through each node starting from the head. For every node, it prints the data followed by -> to visually represent the links. The function continues until the last node and ends the output with NULL, indicating the end of the list.

Main Function Flow

In the main() function, the user is prompted to input three integers. Each input is inserted into the list using the insert() function. After all insertions, the list is displayed. The program then attempts to delete specific values from the list and displays the list after each deletion to show the updated structure.

Applications : In real-world applications, linked lists are used in memory allocation, scheduling algorithms, undo-redo systems, and data organization tasks. The tool (C language and its standard libraries) provides low-level control over memory, making it ideal for system programming, embedded systems, and performance-critical software development.

*EDITOR PLATFORM*: Visual Studio Code

*LIBRARY*: <stdio.h>,<stdlib.h>

*CONCEPTS*: structures, pointers, dynamic memory, linled lists, control flow

*LANGUAGE*: C

*OUTPUT*: <img width="1920" height="1020" alt="Image" src="https://github.com/user-attachments/assets/909a6771-8b56-4bcf-9940-9b0304546e6b" />

<img width="1920" height="1020" alt="Image" src="https://github.com/user-attachments/assets/58a7a402-793f-4b14-9cdf-6257f9b7f332" />
