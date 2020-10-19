// STACK USING ARRAY --------> STATIC IMPLEMENTATION

#include<stdio.h>
#define N 5

int stack[N];
int top=-1;

void push();
void pop();
void peek();
void display();



int main()
{
	int choice;
	while(1)
	{
	printf("WHAT DO YOU WANT :\n1: Add an element in the stack.\n2: Remove an element from the stack.\n3: View top element in the stack.\n4: Display\n\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		push();	
	}
	else if(choice==2)
	{
		pop();
	}
	else if(choice==3)
	{
		peek();
	}
	else if(choice==4)
	{
		display();
	}
	else
	{
		break;
	}
	
	}
}


void push()
{
	int data;
	printf("ENTER THE ELEMENT WHICH YOU WANT AT THE TOP OF THE STACK: ");
	scanf("%d",&data);
	if(top==N-1)
	{
		printf("STACK IS FULL\n");
	}
	else
	{
		top=top+1;
		stack[top]=data;
		printf("ITEM INSERTED IS %d\n",data);
	}
}


void pop()
{
	int item;
	if(top==-1)
	{
		printf("STACK IS ALREADY EMPTY\n");
		
	}
	else
	{
		item=stack[top];
		top=top-1;
		printf("ITEM DELETED IS %d\n",item);
	}
}

void peek()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		printf("Top element is %d\n",stack[top]);
	}
}

void display()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		printf("ELEMENTS IN STACK ARE:\n");
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
			printf("\n");
		}
	}
}
