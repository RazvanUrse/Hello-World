#include <iostream>
#include<vector>

using namespace std;

template <class T>
class Stack{
private:
    vector <T> s;
public:
    bool empty(){
        return (s.empty());
    }

    void push(const T x){
        s.push_back(x);
    }

    void pop(){
        s.pop_back();
    }

    T & top (){
        return s.back();
    }

    void print();
};

template<class T>
void Stack<T>::print(){
        cout << "Vectorul contine :";
            for (typename vector<T>::iterator it = s.begin() ; it != s.end(); ++it)
                cout << ' ' << *it;
        cout << '\n';
}

int main()
{
    Stack <int> stiva;
    Stack <char*> siruri;

    stiva.push(1);
    stiva.push(5);
    stiva.push(7);
    stiva.push(9);

    stiva.print();

    stiva.pop();

    stiva.print();

    if(stiva.empty())
        cout << "Stiva goala!\n";
    else
        cout << "Stiva nu este goala!\n";

    cout << "Ultimul element este: " << stiva.top() << "\n";


    cout << "\n\nStack siruri:\n\n";
    char sir1[] = "ana";
    char sir2[] = "are";
    char sir3[] = "mere";
    siruri.push(sir1);
    siruri.push(sir2);
    siruri.push(sir3);

    siruri.print();

    siruri.pop();
    siruri.print();






    return 0;
}
