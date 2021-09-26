#include<bits/stdc++.h>
using namespace std;
class copyobj
{
public:
    int num1;
    int num2;
    int sum;
    void add(int a,int b)
    {
        sum=a+b;
    }
    copyobj copyfun(copyobj ob)
    {
        copyobj temobj;
        temobj.num1=ob.num1;
        temobj.num2=ob.num2;
        temobj.sum=ob.sum;
        //temobj.add(temobj.num1,temobj.num2);
        return temobj;
    }
};
int main()
{
    copyobj obj1;
    copyobj obj2;
    obj1.num1=5;
    obj1.num2=10;
    obj1.add(obj1.num1,obj1.num2);
    obj2=obj2.copyfun(obj1);
    cout<<obj2.num1<<" "<<obj2.num2<<" "<<obj2.sum;


}
