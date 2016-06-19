#include "Vector2.hpp"
#include "iostream"
using namespace jumper;
int main()
{
Vector2i aint;
Vector2i bint;
int k = 2;
int b= 1;
bint.setX(k);
aint.setX(k);

if(aint==bint)
{
    std::cout<< "== true"  <<std::endl;
}

Vector2i copy;
copy = Vector2<int>(bint);
if(copy==bint)
{
    std::cout << " copyconstructor true " << std::endl;
}
Vector2i copy2;
copy2 = bint;

if(copy2 == bint)
{
    std::cout <<"operator="<<std::endl;
}
copy = copy + copy;
copy = copy - aint;
copy = copy * k;
int i;
i = copy * copy;

i = copy[0];


}

