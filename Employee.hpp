#include <stdio.h>
#include <iostream>
#include <string>
class Employee{
private:
int age;
string name;
float salary;
int experience;

public:
Employee(int age, string name, float salary, int experience);
void setage (int);
int getage();
void setname(string);
string getname();
void setsalary (float);
float getsalary();
void setexperience(int);
int getexperience ();
};
