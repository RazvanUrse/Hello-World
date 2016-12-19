# Hello-World
First repository for a school assignment

#include<iostream>
#include<vector>

using namespace std;

template <class T>

class Stack{
std::vector<T> s;

public:
    bool Empty ();
    void push (const T&);
    T top(){return s.back;}
    void pop(){
        if(s.size()>0)
        s.pop_back();
        };
    void print();

};
template <class T>
bool Stack<T>::Empty(){
if(s.size()==0)
    return 1;
return 0;

}

template <class T>
void Stack <T>::push(const T &element){
s.push_back(element);
}


/*template<class T>
void Stack<T>::print(){
for (int i=0;i<=s.size;i++)
    cout<<s[i]<<" ";
cout<<endl;
}
*/
int main()
{
    Stack<double> x;

    x.push(1.1);
    x.push(5.5);
    x.push(9.9);

    x.print();

    x.pop();

    x.print();

    cout<<x.top();


    return 0;
}
