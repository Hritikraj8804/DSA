#include<stdio.h>

int stack[100],i,j,choice=0,n,top=-1;  

void push()
{
	int val;
	if(top == n-1)
	{
		printf("stack overflow\n");
		return;
	}
	else
	{
		printf("enter the value: ");
		scanf("%d",&val);
		top++;
		stack[top] = val;
	}
}
void pop()
{
	if (top == IsEmpty())
	{
		printf("stack is underflow.\n");
	}
	else
	{
		top--;
	}
}
void peek()
{
	if(IsEmpty())
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("%d\n",stack[top]);
	}
}
int IsEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	printf("Enter the number of elements in the stack ");   
    scanf("%d",&n); 
	printf("*********Stack operations using array*********");  
  
printf("\n----------------------------------------------\n");   
	while(1)
	{
		printf("Enter your choice: \n");
		printf("1.insert 2.delete 3.display 4.exit\n");
		scanf("%d",&choice);
		if(choice == 1)
		{
			push();
		}
		else if(choice == 2)
		{
			pop();
		}
		else if(choice == 3)
		{
			peek();
		}
		else if(choice == 4)
		{
			break;
		}
		else
		{
			printf("invalid choice.");
		}
	}
}
