/* C++ program demonstrating a basic template class */

#include <iostream>

using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a; // "this" refers to the members of the class (a = a will otherwise assign to itself)
    this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::sub() {
    T c;
    c = a - b;
    return c;
}


int main() {

    Arithmetic<int> ar(10, 5); //<T> -> <int>

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;

    Arithmetic<float> ar_f(10.99, 5.44); //<T> -> <float>

    cout<<"Add "<<ar_f.add()<<endl;
    cout<<"Sub "<<ar_f.sub()<<endl;

    Arithmetic<char> ar_c('A', 'B'); //<T> -> <char>

    cout<<"Add "<<(int)ar_f.add()<<endl; // cast to integer to get difference in ASCII values
    cout<<"Sub "<<(int)ar_f.sub()<<endl;    

    return 0;
}