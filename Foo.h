// the header file named the same as the class helps locate classes within a project
// one class per header file makes it easier to keep the
// header file readable (some classes can become large)
// each programmer should determine what style works for them or what programming standards their
// teacher/professor/employer has

#ifndef FOO_H
#define FOO_H

class Foo{
public:
    Foo();                  // function called the default constructor
    Foo( int a, int b );    // function called the overloaded constructor
    int Manipulate( int g, int h );
    
private:
    int x;
    int y;
};

#endif