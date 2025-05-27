#pragma once
#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;
class Circle : public Shape{
private:
    float m_radius;
public:
    Circle(float r);
    float Area() override;
    void SetRadius(float radius);
    float GetRadius();
};