//
//  Window.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Window.h"

Window::~Window()
{}
Bar *Window::CreateBar()
{
    return new Bar();
}
Button *Window::CreateButton()
{
    return new Button();
}
View *Window::CreateView()
{
    return new View();
}