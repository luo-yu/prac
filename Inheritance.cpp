#include <iostream>
using namespace std;

class MyClass {
protected:
    int age;
public:
    void sayAge(){
        this->age = 20;
        cout << age<<endl;
    }
};

class MyNewClass : public MyClass {
    
};

int main() {
    
    MyNewClass *a = new MyNewClass();
    a->sayAge();
    
    return 0;
    
}