//
// Created by Timm Nicolaizik on 23.09.22.
//

#include "GameObject.h"
#include "iostream"
#include "GLFW/glfw3.h"

GameObject::GameObject(float width, float height, float x, float y) {
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
}


void GameObject::render() {
    //std::cout << "Rendering GameObject." << std::endl;hh
    glVertex2f(this->x, this->y);
    glVertex2f(this->x + this->width, this->y);
    glVertex2f(this->x + this->width, this->y + this->height);

    glVertex2f(this->x, this->y);
    glVertex2f(this->x, this->y + this->height);
    glVertex2f(this->x + this->width, this->y + this->height);
}