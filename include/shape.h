#pragma once

#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
    string name;
    string type;
    
public:
    Shape();
    Shape(const string &name);
    string getName() const;
    void setName(const string &name);
    string geTtype() const;
    void display() const;

  
};
