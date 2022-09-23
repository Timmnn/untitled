//
// Created by Timm Nicolaizik on 23.09.22.
//

#ifndef UNTITLED_GAMEOBJECT_H
#define UNTITLED_GAMEOBJECT_H


class GameObject {
public:
    GameObject(float width, float height, float x, float y);
    void render();

    float width;
    float height;
    float x;
    float y;
};




#endif //UNTITLED_GAMEOBJECT_H
