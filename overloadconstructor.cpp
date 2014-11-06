
myFoo(); // default constructor, the user has no control over initial values
// overloaded constructors

myFoo( int a, int b=0 ); // allows construction with a certain 'a' value, but accepts 'b' as 0
// or allows the user to provide both 'a' and 'b' values
// or

myFoo( int a, int b ); // overloaded constructor, the user must specify both values

class myFoo {
private:
    int Useful1;
    int Useful2;
    
public:
    myFoo(){                     // default constructor
        Useful1 = 5;
        Useful2 = 10;
    };
    
    myFoo( int a, int b = 0 ) { // two possible cases when invoked
        Useful1 = a;
        Useful2 = b;
    };
    
};

myFoo Find;           // default constructor, private member values Useful1 = 5, Useful2 = 10
myFoo Find( 8 );      // overloaded constructor case 1, private member values Useful1 = 8, Useful2 = 0
myFoo Find( 8, 256 ); // overloaded constructor case 2, private member values Useful1 = 8, Useful2 = 256