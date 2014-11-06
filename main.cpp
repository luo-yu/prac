
#include <string>
#include <iostream>
using namespace std;
struct Point
{
	double x, y;
};

int main(){

	struct  Point blank;
	blank.x=3.0;
	blank.y=4.0;


	int x = blank.x;
	cout << blank.x << ", " << blank.y << endl; 
	double distance = sqrt(blank.x * blank.x + blank.y * blank.y);
	cout<<"Distance = "<<distance<<endl;

	system("PAUSE");
	return 0;
}