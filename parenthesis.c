// Checks if an expression is correctly parenthesized or not

#include<stdio.h>
int main()
{
        int stack[20];
        char expr[20];
        int top=-1,i=0;
        printf("Enter input : ");
        scanf("%s",expr);
        while(expr[i]!='\0')
        {
                if(expr[i]=='(')
                {
                        top++;
                        stack[top]=1;
                }
                else if(expr[i]==')')
                {
                        top--;
                }
                i++;
        }
        if(top==-1)
        {
                printf("Correct");
        }
        else{
                printf("Not correct");
        }
        return 0;
}
