#include <iostream>
#include <string>

using namespace std;

class MyClass {
private:
    int i;
    string s;

    static int n;
public:
    int a = 1;

    MyClass(int, string);
};

int MyClass::n = 0;

MyClass::MyClass(int i, string s) {

    this->i = i;
    this->s = s;
    MyClass::n++;
}
/*int main() {

    MyClass myObject = MyClass(2, "Saku");
}*/
