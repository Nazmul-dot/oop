#include<bits/stdc++.h>
using namespace std;
class box
{
private:
    int a,b,c;
    int sum=0;
    void add()
    {
        sum=a+b;
    }
public:
    static int cnt;
    box()
    {
        a=0;
        b=0;
        add();
        cnt++;
    }
    box(int x,int y)
    {
        a=x;
        b=y;
        add();
        cnt++;
    }
    box(const box& ob)
    {
        a=ob.a;
        b=ob.b;
        add();
        cnt++;
    }
    //return object
    /* box pas(box ob1,box ob2)
     {
         box tem;
         tem.a=ob1.a*ob2.a;
         tem.b=ob1.b*ob2.b;
         return tem;
     }*/
    /* void pas(box ob1,box ob2)
     {
         a=ob1.a*ob2.a;
         b=ob1.b*ob2.b;
     }*/
    // friend fuction
    //friend box pas(box,box);
    //friend void pas(box&,box&,box&);

    // unary oparetor 2way
    /* void operator-()
     {
         sum--;
     }*/
    //friend void operator-(box&);

    //binary ovarload in 2 way
    /*box operator+(box ob)
    {
        box tem;
        tem.a=a*ob.a;
        tem.b=b*ob.b;
        return tem;
    }*/
    //friend box operator+(box ,box);

    //relational ovarloading
    bool operator>(box ob)
    {
        if(a>ob.a)
            return true;
        else if(a==ob.a && b>ob.b)
            return true;
        else
            return false;
    }
    void dis()
    {
        add();
        cout<<sum<<endl;
    }
    static int staticVar()
    {
        return cnt;
    }


};
int box::cnt;
/*box pas(box ob1,box ob2)
{
        box tem;
        tem.a=ob1.a*ob2.a;
        tem.b=ob1.b*ob2.b;
        return tem;
}*/
/*void pas(box& ob1,box& ob2,box& ob4)
{
    ob4.a=ob1.a*ob2.a;
    ob4.b=ob1.b*ob2.b;
}*/
/*void operator-(box& ob)
{
    ob.sum--;
}*/
/*box operator+(box ob1 ,box ob2)
{
        box tem;
        tem.a=ob1.a*ob2.a;
        tem.b=ob1.b*ob2.b;
        return tem;
}*/
int main()
{
    box b1(1,2);
    box b2(5,7);

    b1.dis();
    b2.dis();
    //copy constructor
    box b3(b2);
    b3.dis();
    //unary ovarloading
    //-b3;
    //b3.dis();

    box b4;
    // 3 way pass object and get
    //b4=b4.pas(b1,b2);
    //b4.pas(b1,b2);
    //b4=b1.pas(b2)

    //2 way pass object and get from friend function
    //b4=pas(b1,b2);
    //pas(b1,b2,b4);

    // binary operator overloading
    // b4=b1+b2; //b4=b1.operator+(b2)

    //relational
    if(b1>b2)
    {
        cout<<"b1 is big"<<endl;
    }
    else if(b2>b1)
    {
         cout<<"b2 is big"<<endl;
    }
    else
    {
         cout<<"b1 and b2 are same"<<endl;
    }
    b4.dis();
    cout<<box::staticVar();
}
