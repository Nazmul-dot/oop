#include<bits/stdc++.h>>
using namespace std;
class box
{
public:
    static int count_num;
    box()
    {
        count_num++;
    }
    static int dis()
    {
        return count_num;
    }
};
int box:: count_num=0;
int main()
{
    cout<<"initial count="<<box::dis()<<endl;
    box b1,b2;
    cout<<"after creating 2 object="<<box::dis()<<endl;
}
