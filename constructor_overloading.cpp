#include<bits/stdc++.h>>
using namespace std;
class box
{
public:
    int x=0,a=0,b=0;

    box()
    {
        x=10;
    }
    box(int m,int n)
    {
        a=m;
        b=n;
    }
};
int main()
{
    box b1;
    box b2(20,30);
    cout<<b1.x<<" "<<b1.a<<" "<<b1.b<<endl;
    cout<<b2.x<<" "<<b2.a<<" "<<b2.b<<endl;
}
