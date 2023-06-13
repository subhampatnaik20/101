/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stack>
#include <queue>


using namespace std;


int q_reverse(queue<int> &q){
    if(q.empty())
        return 0;
    int element = q.front();
    q.pop();
    
    q_reverse(q);
    
    q.push(element);
    
}

int main()
{
    // cout<<"Hello World";
    queue<int> q;
    q.push(2);
    q.push(5);
    q.push(6);
    q.push(10);
    q.push(7);
    queue<int> a=q;
    cout<<"before"<<endl;
    while(!a.empty()){
        cout<<a.front()<< " ";
        a.pop();
    }
    
    
    q_reverse(q);

    
    // stack<int> s;
    
    // while(!q.empty()){
    //     int element = q.front();
    //     q.pop();
        
    //     s.push(element);
    // }
    
    // while(!s.empty()){
    //     int element = s.top();
    //     s.pop();
        
    //     q.push(element);
    // }
    
    cout<<endl<< "After"<<endl;
    while(!q.empty()){
        cout<<q.front()<< " ";
        q.pop();
    }

    return 0;
}
