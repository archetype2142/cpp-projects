#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct{
    int top;
    int count ;
    int items[max] ;

} stack ;

void push(void);
//int pop(void);
void display(void);


int main()
{ int choice, input ;
   stack *p ;
     p->top= -1 ;
     p-> count= 0;

     printf("Choose- 1.Push  2.Pop  3.Display\n");
     scanf(" %d", &choice);

     switch (choice){
        case 1: 
                 push();
                                break;
       /* case 2:  pop();
                                break;
        case 3:  display();
                                break;
     */}
return 0;
}

void push()
{   
    stack *p;
    int num;
    if (p->top == (max - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        p->top = p->top + 1;
        p->items[p->top] = num;
        printf("Item pushed");
    }
    return;
}

/*int pop()
{
     stack *p ;
    if(p->top== -1){
        printf("The Goddamn Stack is empty");
         return 0;
    }else{
      p->top= p->top -1 ;
      p->count= p->count -1 ;
     void display() ;

     }
}

void display()
{    int i;
    stack *p ;
    printf("Stack:  ");
    for(i=0; i<p->top-1; i++){
        printf("%d  ", p->items[i]);
    }
}
*/