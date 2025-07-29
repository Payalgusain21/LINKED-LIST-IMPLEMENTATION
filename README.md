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

The function insert(int value) is used to add a new node at the end of the linked list. It dynamically allocates memory for a new node, assigns the given value to it, and sets the next pointer to NULL. If the list is empty, this new node becomes the head. Otherwise, the function traverses to the last node and appends the new node at the end by updating the next pointer of the last node.

Delete Operation

The function delete(int value) removes a node that contains a specified value. It handles different cases:

If the list is empty, it simply returns.

If the head node contains the target value, the head is updated to the next node, and the old node is freed.

For all other cases, it traverses the list while keeping track of the previous node to unlink the target node and deallocate its memory safely.


Traverse Operation

The function traverse() prints the elements of the linked list in a readable format. It displays the list in a linear arrow format (e.g., 1 -> 2 -> 3 -> NULL). If the list is empty, it prints a corresponding message.

Main Function Flow

In the main() function, the user is prompted to input three integers. Each input is inserted into the list using the insert() function. After all insertions, the list is displayed. The program then attempts to delete specific values from the list and displays the list after each deletion to show the updated structure.

*EDITOR PLATFORM*: Visual Studio Code
*LIBRARY*: <stdio.h>,<stdlib.h>
