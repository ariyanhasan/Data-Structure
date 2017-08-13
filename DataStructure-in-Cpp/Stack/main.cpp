// Created By Ariyan Hasan

#include <iostream>
#include "QueType.cpp"

using namespace std;

int main()
{

    QueType <int> q(5);
    if(q.IsEmpty())
        cout<< "empty" << endl;
    else
        cout << "not empty" << endl;
    int i,j,k;
    cout<<"enter the input number: "<<endl;
    cin>>j;
    cout<<"enter the values: "<<endl;
    for(i=0;i<j;i++){
        cin>>k;
        q.Enqueue(k);
    }

    if(q.IsEmpty())
        cout<< "empty" << endl;
    else
        cout << "not empty" << endl;

    if(q.IsFull())
        cout<< "Full" << endl;
    else
        cout << "not Full" << endl;

    q.Enqueue(6);

    QueType <int> q1;
    int item;
    while(q.IsEmpty()!=true)
    {
         q.Dequeue(item);
         cout << item << " ";
         q1.Enqueue(item);
    }
    cout << endl;

    while(q1.IsEmpty()!= true)
    {
        q1.Dequeue(item);
        q.Enqueue(item);
    }

    if(q.IsFull())
        cout<< "Full" << endl;
    else
        cout << "not Full" << endl;

    //kiu.Enqueue(8);
    q.Dequeue(item);
    q.Dequeue(item);

    while(q.IsEmpty()!=true)
    {
         q.Dequeue(item);
         cout << item << " ";
         q1.Enqueue(item);
    }
    cout << endl;

    while(q1.IsEmpty()!= true)
    {
        q1.Dequeue(item);
        q.Enqueue(item);
    }

    q.Dequeue(item);
    q.Dequeue(item);
    q.Dequeue(item);

    if(q.IsEmpty())
        cout<< "empty" << endl;
    else
        cout << "not empty" << endl;

    QueType<string> binary;

    string temp;
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;

    binary.Enqueue("1");
    for(int i=0;i<num;i++)
    {
        binary.Dequeue(temp);
        cout<<temp<<endl;
        binary.Enqueue(temp+"0");
        binary.Enqueue(temp+"1");
    }


}
