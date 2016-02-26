#include <vcl.h>
#include <conio.h>
#include <iostream.h>
#pragma hdrstop
#pragma argsused
class vect {
public:
   vect(int=0,int=0,int=0,int=0,int=0); //Конструктор
   vect operator+(const vect &) const;   //Сложение
   vect operator-(const vect &) const;//Вычитание
   vect operator*(const vect &); //Умножение вектора на вектор
   vect operator*(const int &); //Умножение скаляра на вектор
   void print() const;//Печать
   private:
   int a,b,c,d,e;
};
//Конструктор:
vect::vect(int a1,int b1,int c1,int d1,int e1)
{
   a = a1;
   b = b1;
   c = c1;
   d = d1;
   e = e1;
}
//Перегруженная операция сложения:
vect vect::operator+(const vect &operand2) const
{
   vect sum;
   sum.a = a + operand2.a;
   sum.b = b + operand2.b;
   sum.c = c + operand2.c;
   sum.d = d + operand2.d;
   sum.e = e + operand2.e;
   return sum;
}
//Перегруженная операция вычитания:
vect vect::operator-(const vect &operand2) const
{
   vect diff;
   diff.a = a - operand2.a;
   diff.b = b - operand2.b;
   diff.c = c - operand2.c;
   diff.d = d - operand2.d;
   diff.e = e - operand2.e;
   return diff;
}
//Перегруженная операция умножения:
vect vect::operator*(const vect &operand2)
{
   vect proizv;
   proizv.a = a * operand2.a;
   proizv.b = b * operand2.b;
   proizv.c = c * operand2.c;
   proizv.d = d * operand2.d;
   proizv.e = e * operand2.e;
   return proizv;
}
//Перегруженная операция умножения:
vect vect::operator*(const int &operand2)
{
   vect proizv;
   proizv.a = a * operand2;
   proizv.b = b * operand2;
   proizv.c = c * operand2;
   proizv.d = d * operand2;
   proizv.e = e * operand2;
   return proizv;
}
//Печать объекта в виде (a,b,c,d,e)
void vect::print() const
{
   cout<<'('<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<')';
}
int main(int argc, char* argv[])
{
   vect x(5,6,7,8,9),y(4,3,2,1,7);
   vect z;
   int scl = 8;
   cout<<"\n Vector 1:   ";
   x.print();
   cout<<"\n Vector 2:   ";
   y.print();
   z = x + y;
   cout<<"\n Slozhenie:   ";
   z.print();
   z = x - y;
   cout<<"\n Vichitanie:  ";
   z.print();
   z = x * y;
   cout<<"\n Vector*Vector:   ";
   z.print();
   z = x * scl;
   cout<<"\n Scalar1:   ";
   z.print();
   z = y * scl;
   cout<<"\n Scalar1:   ";
   z.print();
   getch();
   return 0;
}
//---------------------------------------------------------------------------
