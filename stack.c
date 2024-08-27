#include<stdio.h>
#define size 3

int arr[size];
int top = -1;

int isFull(){
	return(top == size - 1);
}

int isEmpty(){
	return(top == -1);
}


int peek(){
	printf("\nTop Item: %d", arr[top]);
}


int push(int item){
	top++;
	arr[top] = item;
	printf("\n--- Item Pushed!! ---");
}

int pop(){
	printf("\nPopped Item: %d", arr[top]);
	top--;
}

int display(){
	printf("\n--- Stack Content ---\n");
	for(int i = top; i >=0 ; i--){
		printf("%d  ", arr[i]);
	}
}


int main(){
	while(1){
		printf("\n--- Stack Menu ---");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.Exit");
		printf("\nEnter your choice: ");
		int c;
		scanf("%d", &c);
		
		switch(c){
			
			case 1:
				if(isFull()){
					printf("\n--- Stack Overflow!! ---");
				}
				else{
					int item;
					printf("\nEnter item: ");
					scanf("%d", &item);
					push(item);
				}
				break;
			case 2:
				if(isEmpty()){
					printf("\n--- Stack Underflow!! ---");
				}
				else{
					pop();
				}
				break;
			case 3:
				if(isEmpty()){
					printf("\n--- Stack is Empty!! ---");
				}
				else{
					peek();
				}
				break;
			case 4:
				if(isEmpty()){
					printf("\n--- Stack is Empty!! ---");
				}
				else{
					display();
				}
				break;
			case 5:
				printf("\n--- Program Terminated ---\n");
				return 0;
				break;
			default:
				printf("\n--- Invalid Choice ---");
				break;
		
		}
	
	}
}
