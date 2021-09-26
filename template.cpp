#include<bits/stdc++.h>
using namespace std;
template <class var>
class displayclas
{
public:
    void display(var num)
    {
        cout<<num<<endl;
    }
};
int main()
{
    displayclas<int> obj1;
    displayclas<float> obj2;
    displayclas<string> obj3;
    obj1.display(5);
    obj2.display(5.56436);
    obj3.display("fdsf dfsdf");
}
