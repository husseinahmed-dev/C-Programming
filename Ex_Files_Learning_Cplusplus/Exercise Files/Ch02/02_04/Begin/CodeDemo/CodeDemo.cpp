// Learning C++ 
// Exercise 02_04
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    auto a = 8;
    auto b = 3.2f;
    auto c = 'a';
    auto d = 3.14;
    auto e = "hussein";
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    return (0);
}
