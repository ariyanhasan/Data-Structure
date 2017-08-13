// Created By Ariyan Hasan

#include <iostream>
#include"StackType.h"
#include"StackType.cpp"

using namespace std;

int main()
{
    StackType<int> s;
    StackType<int> bkup;

    if(s.IsEmpty())
    {
        cout<<"Stack is Empty"<<endl<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

    int a,b;
    cout<<"enter the desire items: "<<endl;
    cin>>a;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        s.Push(b);
    }

    if(s.IsEmpty())
    {
        cout<<"Stack is Empty"<<endl<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

    if(s.IsFull())
    {
        cout<<"Stack is Full"<<endl<<endl;
    }
    else
    {
        cout<<"Not Full"<<endl;
    }
    int item;
    while(s.IsEmpty()!=true)
    {
        item=s.Top();
        bkup.Push(item);
        s.Pop();
    }
    cout<<"The values are: "<<endl;
    while(bkup.IsEmpty()!=true)
    {
        item=bkup.Top();
        s.Push(item);
        cout<<item<<" " ;
        bkup.Pop();
    }
    s.Push(3);
    while(s.IsEmpty()!=true)
    {
        item=s.Top();
        bkup.Push(item);
        s.Pop();
    }
    cout<<endl<<"After pushing the values are: "<<endl;
    while(bkup.IsEmpty()!=true)
    {
        item=bkup.Top();
        s.Push(item);
        cout<<item<<" ";
        bkup.Pop();
    }
    if(s.IsFull())
    {
        cout<<endl<<"Stack is Full"<<endl<<endl;
    }
    else
    {
        cout<<endl<<"Not Full"<<endl;
    }

    for(int i=0; i<2; i++)
    {
        s.Pop();
    }

    cout<<"After poping two items the top item is: "<<endl;
    cout<<s.Top()<<endl;

    string parenthesis;
    cin>>parenthesis;
    StackType<int> bkup2;

    for(int i=0; i<parenthesis.length(); i++)
    {
        if(parenthesis[i]=='(')
        {
            bkup.Push(parenthesis[i]);
        }
        else if(parenthesis[i]==')')
        {
            if(bkup.IsEmpty()==true)
            {
                bkup2.Push(parenthesis[i]);

            }
            else
            {
                bkup.Pop();
            }
        }

    }

    if(bkup.IsEmpty()&&bkup2.IsEmpty()==true)
    {
        cout<<"Balanced"<<endl;
    }
    else if(bkup.IsEmpty()||bkup2.IsEmpty()!=true)
    {
        cout<<"Not Balanced"<<endl;
    }


}
