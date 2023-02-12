#include<iostream>
using namespace std;
class rational
{
    private: float a,b,x,c,d,r1,r2;
    public:
        void input()
        {
            cout<<"enter p and q of first rational number:"<<endl;
            cin>>a>>b;
            r1=a/b;
        }
        void input2()
        {
            cout<<"enter p and q of second rational number:"<<endl;
            cin>>c>>d;
            r2=c/d;
        }
        friend float add (rational &z);
        void display()
        {
            cout<<"sum is ( "<<a<<"/"<<b<<" ) + ( "<<c<<"/"<<d<<" ):  "<<x<<endl;
        }

};
float add (rational &z)
{
    float x;
    z.x=z.r1+z.r2;
    return x;
}
int main()
{
    rational s;
    s.input();
    s.input2();
    add(s);
    s.display();
    return 0;
}
