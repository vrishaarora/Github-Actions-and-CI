#include "../header/rectangle.hpp"
#include <stdexcept>

Rectangle::Rectangle(int w,int h): width(w), height(h){
    if (width < 0 || height < 0){
        throw std::runtime_error("Dimensions can't be negative");
    }
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    if (width < 0 || height < 0){
        throw std::runtime_error("Dimensions can't be negative");
    }
    return this->width * this->height;
}

int Rectangle::perimeter() { 
    if (width < 0 || height < 0){
        throw std::runtime_error("Dimensions can't be negative");
    }
    return (2 * this->width) + (2 * this->height);
}