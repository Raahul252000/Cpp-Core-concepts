#include<iostream>
using namespace std;

class complexx
{
private:
    int a,b;
public:
    void set_values(int a,int b)
    {
        this ->a = a;
        this ->b = b;
    }
    void show_data()
    {
        cout << "a: " << a <<endl;
        cout << "b: " << b <<endl;

    }

    friend sum_complex(complexx obj1, complexx obj2);
};

complexx sum_complex(complexx obj1, complexx obj2)
{
    complexx obj3;
    obj3.set_values((obj1.a + obj2.a),(obj1.b + obj2.b));
    return obj3;
}
int main()
{
    complexx c1, c2, c_sum;
    c1.set_data(2,5);
    c2.set_data(4,8);
    c2.show_data();
    return 0;
}
