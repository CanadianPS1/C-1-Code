#pragma once
#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;
class Rectangle : public Shape{
private:
    float m_width;
    float m_height;
public:
    Rectangle(float w, float h);
    float Area() override; //deleted the s
}; //added a semicolon