#include <iostream>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;
Circle::Circle(float r){
    m_radius = r; 
}
float Circle::Area(){
    return 3.14f * m_radius * m_radius;
}
void Circle::SetRadius(float radius){
    m_radius = radius;
}
float Circle::GetRadius(){
    return m_radius; 
}
Rectangle::Rectangle(float w, float h){
    m_width = w;
    m_height = h;
}
float Rectangle::Area(){ //deleted the s
    return m_width * m_height;
}
int main(){
    vector<Shape*> shapes;
    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f); //added a semicolon
    shapes.push_back(c);
    shapes.push_back(r);
    for(int i = 0; i < shapes.size(); i++){
        cout << "Area: " << shapes[i]->Area() << endl;
        Circle* circle = dynamic_cast<Circle*>(shapes[i]);
        if(circle != nullptr){
            cout << "Radius: " << circle->GetRadius() << endl;
        }
    }
    for (Shape* s : shapes){
        delete s;
    }
    return 0;
}