#include<bits/stdc++.h>>
using namespace std;
class box
{
public:
    int x,y,sum;
    static int cnt;
    box()
    {
        cnt++;
    }
    void dis()
    {
        cout<<cnt<<"=no object of the array"<<endl;
    }
};
int box::cnt;
int main()
{
    box b[5];
    b[2].dis();
}
