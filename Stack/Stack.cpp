// Stack.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#define MAXSIZE 10
#include  <iostream>
using namespace std;
struct Stack
{
    int data[MAXSIZE];
    int top;
} myStack;
void push(Stack *s, int e)
{
    if (s->top == MAXSIZE)
    {
        cout << "栈满" << endl;
        return;
    }
    s->data[s->top] = e;
    cout << s->data[s->top] << endl;
    s->top++;
}
int pop(Stack *s)
{
    int e;
    while (s->top <= 0)
    {
        cout << "栈空" << endl;
        return false;
    }
    s->top--;
    e = s->data[s->top];
    return e;
}
int main()
{
    int n;
    cout << "请输入入栈的元素个数，最大为10" << endl;
    cin >> n;
    cout << "入栈" << endl;
    for (auto i = 0; i < n; i++)
    {
        push(&myStack, i);
    }
    cout << "---分隔符---出栈" << endl;
    cout << "出栈" << endl;
    int n1;
    cout<<"请输入要出栈的元素的个数"<<endl;
    cin>>n1;
    for (auto i = 0; i < n1; i++)
    {
       cout<< pop(&myStack)<<endl;
    }
   /* cout << "---分隔符---出栈" << endl;
    while (true)
    {
        int n2;
        cout << "请输入要出栈的元素的个数" << endl;
        cin >> n2;
        for (auto i = 0; i < n2; i++)
        {
            pop(&myStack);
        }
    }    */
    return 0;
}

