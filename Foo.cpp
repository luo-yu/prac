#include "Foo.h"

/* these constructors should really show use of initialization lists
 Foo::Foo() : x(5), y(10)
 {
 }
 Foo::Foo(int a, int b) : x(a), y(b)
 {
 }
 */
Foo::Foo(){
    x = 5;
    y = 10;
}
Foo::Foo( int a, int b ){
    x = a;
    y = b;
}

int Foo::Manipulate( int g, int h ){
    x = h + g*x;
    y = g + h*y;
}