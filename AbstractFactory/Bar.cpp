//
//  Bar.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Bar.h"

#pragma mark - Bar

Bar::~Bar()
{}

void Bar::BarAction()
{
    printf("Bar->%s\n", __FUNCTION__);
}

#pragma mark - MacBar

MacBar::~MacBar()
{}
void MacBar::BarAction()
{
    printf("MacBar->%s\n", __FUNCTION__);
}

#pragma mark - LinuxBar

LinuxBar::~LinuxBar()
{}

void LinuxBar::BarAction()
{
    printf("LinuxBar->%s\n", __FUNCTION__);
}
