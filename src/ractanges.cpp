#include "../include/ractanges.h"
Ractanges :: Ractanges(){
    this->height = 0.0;
    this->width = 0.0;
    cout << "rang1" << endl;

}
Ractanges :: Ractanges(const string &name, const double &width, const double &height){
    this->name = name;
    this->width = width;
    this->height = height;
    cout << "rang2" << endl;
}
    double Ractanges :: getWidth() const{
        return width;
    }
    double Ractanges :: getHeight() const{
        return height;
    }
    void Ractanges :: display() const{
        cout << "height : " << height <<endl;
        cout << "width : " << width <<endl;
        cout << "name : " << name <<endl;
    }