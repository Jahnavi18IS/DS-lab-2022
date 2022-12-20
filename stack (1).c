 //program to implement a stack using an array//
    #include<stdio.h>
    #include<stdlib.h>
    #define size 4
    int top=-1,inp_arr[size];       //top value is always initially set to -1
    void push();                    
    void pop();                     
    void show();                    
    int main()
{
    int choice;
    while(1)
{
    printf("1.push\n2.pop\n3.show\n4.exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
{
    case 1:push();                  //push operator
    break;
    case 2:pop();                   //pop operator
    break;
    case 3:show();                  //display operator
    break;
    case 4:exit(0);                 //to terminate the program
    break;
    default:printf("Invalid option");
}
}
}
    void push()                     
{
    int x;
    if(top==size-1)                 //to check if the top value is equal to the size -1 
{
    printf("\n Overflow");             //if the above statement is true, print overflow
}
    else
{
    printf("Enter the element to be inserted");         //if the above if statement is false, enter a value to be inserted in the stack    
    scanf("%d",&x);
    top=top+1;                                          //top value is incremented
    inp_arr[top]=x;
}
}
    void pop()
{
    if(top==-1)                     //to check if top value is equal to -1
{
    printf("\n Underflow");         //if the above statement is true, print underflow 
}
    else
{
    printf("Enter element to be removed:%d",inp_arr[top]);       //if the above if statement is false,enter the value to be popped out of the stack
    top=top-1;                                                   //top value is decremented
}
}
    void show()
{
    int i;
    printf("The elements are");                                   //to display all the elements that are in the stack
    for(i=0;i<=top;i++)
{
    printf("%d",inp_arr[i]);
}
}


