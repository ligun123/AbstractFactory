//
//  MacWindow.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "MacWindow.h"

MacWindow::~MacWindow()
{}
Bar *MacWindow::CreateBar()
{
    return new MacBar();
}
Button *MacWindow::CreateButton()
{
    return new MacButton();
}
View *MacWindow::CreateView()
{
    return new MacView();
}