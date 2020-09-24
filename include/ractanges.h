#pragma once

#include <iostream>
#include <string>
#include "shape.h"

using namespace std;
class Ractanges : public Shape
{
protected :
    double width;
    double height;
    
public:
    Ractanges();
    Ractanges(const string &name, const double &width, const double &height);
    double getWidth() const;
    double getHeight() const;
    void display() const;
};
