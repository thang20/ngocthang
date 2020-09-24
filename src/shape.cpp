#include "../include/shape.h"
Shape :: Shape(){
    this->name = "no name";
    this->type = "no type";
    cout << "sep1" << endl;
}
Shape :: Shape(const string &name)
{
    this->name = name;
    this->type = "no type";
    cout << "sep2" << endl;
}
string Shape :: getName() const{
    return name;
}
void Shape :: setName(const string &name){
    this->name = name;
}
string Shape :: geTtype() const{
    return type;

}
    void Shape :: display() const{
        cout << " name : " << name << endl;
        cout << " Type: " << type << endl;
    }