#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    int num1;
    static int num2;
public:
    student()
    {
        num1++;
        num2++;
        cout<<"normal variable="<<num1<<" "
            <<"static member variable="<<num2<<endl;
    }
};
int student :: num2;
int main()
{
    student stu1;
    student stu2;
    student stu3;
}
