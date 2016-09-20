#include <iostream>
#include <math.h>
using namespace std;

class rational
{
private:
    int n;
    int d;
public:
    rational();
    rational(int, int);
    ~rational();
    void setn(int);
    void setd(int);
    void setall(int, int);
    int getn();
    int getd();
    void print();
    rational add(rational);
    rational subtract(rational);
    rational multiply(rational);
    rational divide(rational);
    void simplify();
    //int gcf();
};

int main()
{
    rational zero = *new rational;
    zero.print();
    rational one(5, 0);
    rational two(3, 5);
    one.add(two).print();
    return 0;
}
rational::rational()
{
    setall(0, 1);
}
rational::rational(int a, int b)
{
    setall(a, b);
}
rational::~rational()
{
}
void rational::setn(int a)
{
    n = a;
}
void rational::setd(int b)
{
    if (b != 0) {
        d = b;
    }
    else
    {
        d = 1;
        cout << "Your denominator was changed to 1 because it was invalid." << endl;
    }
}
void rational::setall(int a, int b)
{
    setn(a);
    setd(b);
}
int rational::getn()
{
    return n;
}
int rational::getd()
{
    return d;
}
void rational::print()
{
    cout << "The rational number is " << n << " / " << d << endl;
}
rational rational::add(rational second)
{
    rational r(n * second.d + d*second.n, d * second.d);
    r.simplify();
    return r;
}
rational rational::subtract(rational second)
{
    rational r(n * second.d - d*second.n, d * second.d);
    r.simplify();
    return r;
}
void rational::simplify()
{
}
/*int rational::gcf()
{
    for (int a = 0; a < n; a++) {
        if(
    }
}*/