#include<iostream>
#include<stdio.h>
using namespace std;
class Quad
{
    public:
    int length;
    int breadth;

    int  area()
    {
        return length*breadth;
    }
    int  perimeter()
    {
        return 2*(length + breadth);
    }
};
int main()
{
    Quad q1;
    q1.length =10;
    q1.breadth =10;
    cout << q1.area() << endl;
}