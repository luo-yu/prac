#include <iostream>
#include <math.h>
using namespace std;

/* The new class Circle inherits the attribute area from the base class Form (the attribute area is implicitly an attribute of the class Circle), but it cannot access it directly. It does so through the functions getArea and setArea (that are public in the base class and remain public in the derived class). The color attribute, however, is inherited as a public attribute, and the class can access it directly.*/
class Form {
private:
    double area;
    
public:
    int color;
    
    double getArea(){
        return this->area;
    }
    
    void setArea(double area){
        this->area = area;
    }
    
};

class Circle : public Form {
public:
    double getRatio() {
        double a;
        a = getArea();
        return sqrt(a / 2 * 3.14);
    }
    
    void setRatio(double diameter) {
        setArea(pow(diameter * 0.5, 2) * 3.14 );
    }
    
    bool isDark() {
        return (color > 10);
    }
    
};




int main(){
    
    
    return 0;
}