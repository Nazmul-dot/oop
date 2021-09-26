#include<bits/stdc++.h>
using namespace std;
void fun()
{
    int var1;
    static int var2;
    var1++;
    var2++;
    cout<<"normal variable="<<var1<<" "
    <<"static variable="<<var2<<endl;
}
int main ()
{
    fun();
    fun();
    fun();
    fun();
    fun();
}
