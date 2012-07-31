//
//  LinuxWindow.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "LinuxWindow.h"

LinuxWindow::~LinuxWindow()
{}
Bar *LinuxWindow::CreateBar()
{
    return new LinuxBar();
}
Button *LinuxWindow::CreateButton()
{
    return new LinuxButton();
}
View *LinuxWindow::CreateView()
{
    return new LinuxView();
}