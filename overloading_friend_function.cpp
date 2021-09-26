#include<bits/stdc++.h>>
using namespace std;
class box
{
public:
    int feet,inch;
    box()
    {
        feet=0;inch=0;
    }
    box(int f,int i)
    {
        feet=f;inch=i;
    }
    friend box operator+(box,box);

};
box operator+(box b1,box b2)
{
    box tem;
    tem.feet=b1.feet+b2.feet;
    tem.inch=b1.inch+b2.inch;
    return tem;

}
int main()
{
    box d1(10,9);
    box d2(8,2);
    box d3;
    d3=d1+d2;
    cout<<"feet and inch="<<d3.feet<<"'"<<d3.inch;
}
