//infix form to postfix
    #include<stdio.h>
    #include<stdlib.h>
    char stack[20];
    int top=-1;
    void push(char x)
{
    stack[++top]=x;
}
    char pop()
{
    if(top==-1) //checking if the top value is equal to 1
    return-1;
    else
    return stack[top--]; //decrementing the top stack value
}
    int priority(char x)
{
    if(x=='(') //checking if the operator is (
    return 0;
    if(x=='+'||x=='-') //checking if the operator is +
    return 1;
    if(x=='*'||x=='/') //checking if the operator is *
    return 2;
 }
    int main()
{
    char exp[20];
    char *e,x;
   printf("Enter the expression");
   scanf("%s",exp);
   e=exp;
    while(*e!='\0')
{
    if(isalnum(*e)) //this condition is to check if the expression is alphanumeric 
{
    printf("%c",*e);
}
    else if(*e=='(')
    push(*e);
    else if(*e==')')
{
    while((x=pop(x))!='(')
    printf("%c",x);
}
    else
{
    while(priority(stack[top])>=priority(*e)) //this condition checks the precedence of operators
    printf("%c",pop());
    push(*e);
}
    e++;
}
    while(top!=-1)
{
    printf("%c",pop());
}
    return 0;
}

