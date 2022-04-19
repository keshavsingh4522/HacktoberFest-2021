/*A program with a mother class and a derived daughter class. Both of them should
have a method void display () that prints a message (different for mother and daughter).In
the main function declare an object of class daughter and call the display() method on it.
Also suitably invoke the display() function of mother class using this object of class
daughter.*/
#include<iostream>
using namespace std;
class mother
{
public:
void display()
{
cout<<"The display Function is Called for mother class."<<endl;
}
};
class daughter : public mother
{
public:
void display()
{
cout<<"the display Function is called for Daughter class."<<endl;
}
};

63

int main()
{
daughter obj;
obj.display();
obj.mother::display();
return 0;
}
