#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
    void func()
    {
        cout<<"eating ..."<<endl;
    }
};
class man
{
public:
    void func(){
        // if we want to run parent class function
        // animal::func();
        //ekhane ache base class giye func kaj kore then ekhane ashbe
    cout<<"walking..."<<endl;
    }
};

int main()
{
animal a;
man m;
a.func();
m.func();
}

