//File: a5aMain.c

//Based on C code given in Assignment 5 information sheet.

#include <stdio.h>
#include <stdlib.h>

#define QUEUESIZE 8
#define MODMASK 0x7
#define FALSE 0
#define TRUE 1

void enqueue(int value);
int dequeue();
int queueFull();
int queueEmpty();
void display();

int main()
{
	int operation, value;
	
	do {
	    system("clear");
	    printf("### Queue Operations ###\n\n");
	    printf("Press 1 - Enqueue, 2 - Dequeue, 3 - Display, 4 - Exit\n");
	    printf("Your option? ");
	    scanf("%d", &operation);

	    switch (operation) {
	    case 1:
		printf("\nEnter the positive integer value to be enqueued: ");
		scanf("%d", &value);
		enqueue(value);
		break;
	    case 2:
		value = dequeue();
		if (value != -1) 
		printf("\nDequeued value is %d\n", value);
		break;
	    case 3:
		display();
		break;
	    case 4:
		printf("\nTerminating program\n");
		exit(0);
	   default:
		printf("\nInvalid option! Try again.\n");
		break;
	    }															         
	printf("Press the return key to continue . . . ");
	getchar();
	getchar();
	 } while (operation != 4);
	      return 0;
}
