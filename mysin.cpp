#include "mysin.h"
#include <iostream>

MySin::MySin()
{
    this->mX = 0.0;
}

MySin::MySin(double x)
{
    this->mX = x;
}

MySin::MySin(const MySin &obj)
{
    this->mX = obj.getX();
}

MySin::~MySin()
{
    this->mX = 0.0;
}

double MySin::value()
{
    double sum=0.0;
    for(int k=0; k<=10; k++)
        sum = sum + (this->power(this->mX,k) / this->factorial(k));
    return sum;
}

void MySin::setX(double x)
{
    this->mX = x;
}

double MySin::getX() const
{
    return this->mX;
}

unsigned int MySin::factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double MySin::power(double x, unsigned int y)
{
    if (y == 0)
        return 1.0;
    else if (y % 2 == 0)
        return power(x, y / 2.0) * power(x, y / 2.0);
    else
        return x * power(x, y / 2.0) * power(x, y / 2.0);
}

int main(int argc, char **argv)
{
    MySin me(5.0);

    std::cout << me.value() << "\n";

    return 0;
}