#include<bits/stdc++.h>
using namespace std;
class multiOfFirstFiveNumber;
class sumOfFirstFiveNumber
{
private:
    int sum=0;
    public:
     sumOfFirstFiveNumber()
    {
        for(int i=1; i<=5; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
friend int frindFun(sumOfFirstFiveNumber,multiOfFirstFiveNumber);
};
class multiOfFirstFiveNumber
{
private:
    int mul=1;
public:
     multiOfFirstFiveNumber()
    {

        for(int i=1; i<=5; i++)
        {
            mul*=i;
        }
        cout<<mul<<endl;
    }
friend int frindFun(sumOfFirstFiveNumber,multiOfFirstFiveNumber);
};
int frindFun(sumOfFirstFiveNumber sumNum,
              multiOfFirstFiveNumber mulNum)
{
    return sumNum.sum+mulNum.mul;
}
int main()
{
    sumOfFirstFiveNumber sumObj;
    multiOfFirstFiveNumber mulobj;
   int total= frindFun(sumObj,mulobj);
   cout<<total;

}
