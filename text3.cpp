#include<bits/stdc++.h>
using namespace std;
class box
{
private:
    int feet,inch,sum;
    static int cnt;
    void add()
    {
        sum=feet+inch;
        cnt++;
    }
public:
    box()
    {
        feet=0;
        inch=0;
    }
    box(int f,int i)
    {
        feet=f;
        inch=i;
        //add();
    }
    box (const box& ob)
    {
        feet=ob.feet;
        inch=ob.inch;
        //add();
    }
    box pas(box ob1,box ob2)
    {
        //box tem;
        feet=ob1.feet+ob2.feet;
        inch=ob1.inch+ob2.inch;
        //return tem;
    }
    /*box operator+(box ob)
    {
        box tem;
        tem.feet=feet+ob.feet;
        tem.inch=inch+ob.inch;
        return tem;
    }*/
    void operator--()
    {
        feet--;
        inch--;
    }
    bool operator>(box ob)
    {
        if(feet>ob.feet)
            return true;
        else if(feet==ob.feet && inch>ob.inch)
            return true;
        else
            return false;
    }
    void dis()
    {
        add();
        cout<<cnt<<", the size="<<feet<<":"<<inch<<" and their sum="<<sum<<endl;
    }
    friend box frnd(box,box);
    friend box operator+(box,box);

};
int box::cnt;
box frnd(box ob1,box ob2)
{
    box tem;
    tem.feet=ob1.feet+ob2.feet;
    tem.inch=ob1.inch+ob2.inch;
    return tem;

}
box operator+(box ob1,box ob2)
{
    box tem;
    tem.feet=ob1.feet+ob2.feet;
    tem.inch=ob1.inch+ob2.inch;
    return tem;
}
int main()
{
    box b1(5,4);
    box b2(4,7);

    b1.dis();
    b2.dis();

    box b3(b2);
    b3.dis();

    box b4;
    //b4=b1.pas(b2);
    //b4=b4.pas(b1,b2);
    //b4.pas(b1,b2);
    //b4=b1+b2;
    //b4.dis();
    // --b3;
    // b3.dis();

    if(b1>b3)
    {
        cout<<"b1 big"<<endl;
    }
    else if(b3>b1)
    {
        cout<<"b3 big"<<endl;
    }
    else
    {
        cout<<"b1 and b3 "<<endl;
    }
    box b5;
    b5=frnd(b1,b3);
    b5.dis();
    box b6;
    b6=b1+b2;
    b6.dis();



}
