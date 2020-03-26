/*
Description: STL stack 
Name: Jessis Chao
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std; 
  
class Stack  
{  
    public: 
    int top;  
    unsigned capacity;  
    char* array;  
};  
  
Stack* createStack(unsigned capacity)  
{  
    Stack* stack = new Stack(); 
    stack->capacity = capacity;  
    stack->top = -1;  
    stack->array = new char[(stack->capacity * sizeof(char))];  
    return stack;  
}  

int isFull(Stack* stack)  
{ 
    return stack->top == stack->capacity - 1; 
}  
 
int isEmpty(Stack* stack)  
{ 
    return stack->top == -1; 
}  
  
void push(Stack* stack, char item)  
{  
    if (isFull(stack))  
        return;  
    stack->array[++stack->top] = item;  
}  
  
char pop(Stack* stack)  
{  
    if (isEmpty(stack))  
        return -1;  
    return stack->array[stack->top--];  
}  

void reverse(char str[])  
{  
    int n = strlen(str);  
    Stack* stack = createStack(n);  
  
    int i;  
    for (i = 0; i < n; i++)  
        push(stack, str[i]);  
  
    for (i = 0; i < n; i++)  
        str[i] = pop(stack);  
}  
  
 
int main()  
{  
    int go = 1;
    cout << "This program reverses a string using the STL" << endl;
    while (go == 1)
    {
        cout << "Enter your string of less than 80 characters followed by an Enter" << endl;
        char * s = (char *) malloc(80);
        cin.getline (s,81, '\n');
        reverse(s);  
        cout << s<< endl;;  
        cout << "Enter another? 1 = continue. Anything else to stop" << endl;
        cin >> go; 
        getchar();
    }

    system ("pause");
    return 0;  
}  

