#include<bits/stdc++.h>>

using namespace std;

class Student
{
public:
    int feet = 0;
    int inches = 0;
    void getHeight(int f, int i)
    {
        feet = f;
        inches = i;
    }
    bool operator >(Student s2)
    {
        if(feet > s2.feet)
            return true;

        if(feet == s2.feet && inches > s2.inches)
        {
            return true;
        }

        return false;
    }

};

int main()
{
    Student s1,s2;

    s1.getHeight(5,10);
    s2.getHeight(6,1);

    if(s1 > s2)
        cout << "Student 1 is taller" << endl;
    else if(s2 > s1)
        cout << "Student 2 is taller" << endl;
    else
        cout << "Both have equal height" << endl;


    return 0;
}
