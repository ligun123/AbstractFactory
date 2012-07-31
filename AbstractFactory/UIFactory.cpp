//
//  UIFactory.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "UIFactory.h"
#include "MacWindow.h"
#include "LinuxWindow.h"

UIFactory::~UIFactory()
{
}

Window *UIFactory::CreateMacWindow()
{
    return new MacWindow();
}

Window *UIFactory::CreateLinuxWindow()
{
    return new LinuxWindow();
}