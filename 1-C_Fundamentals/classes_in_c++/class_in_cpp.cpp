/* C++ program to illustrate a simple class for a Rectangle */

#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        int perimeter() {
            return 2 * (length + breadth);
        }

        void set_length(int l) {
            length = l;
        }

        void set_breadth(int b) {
            breadth = b;
        }

        int get_length() {
            return length;
        }

        int get_breadth() {
            return breadth;
        }
        // destructor function that would deallocate dynamically allocated memory
        ~Rectangle() {
            cout<<"Destructor..";
        }
    
};

int main() {
    Rectangle r(10,5);

    cout<<"Area "<<r.area()<<endl;

    return 0;
}