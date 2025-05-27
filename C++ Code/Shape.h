#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Shape{
public:
    Shape(){}; //added a semicolon
    virtual ~Shape(){}; //added a semicolon
    virtual float Area() = 0;
};