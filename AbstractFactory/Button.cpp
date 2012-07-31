//
//  Button.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Button.h"

#pragma mark - Button
Button::~Button()
{}

void Button::ButtonAction()
{
    printf("Button->%s\n", __FUNCTION__);
}

#pragma mark - MacButton

MacButton::~MacButton()
{}
void MacButton::ButtonAction()
{
    printf("MacButton->%s\n", __FUNCTION__);
}

#pragma mark - LinuxButton

LinuxButton::~LinuxButton()
{}
void LinuxButton::ButtonAction()
{
    printf("LinuxButton->%s\n",__FUNCTION__);
}
