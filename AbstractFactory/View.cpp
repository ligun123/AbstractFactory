//
//  View.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "View.h"

#pragma mark - View
View::~View()
{}

void View::ViewAction()
{
    printf("View->%s\n", __FUNCTION__);
}

#pragma mark - MacView

MacView::~MacView()
{}
void MacView::ViewAction()
{
    printf("MacView->%s\n", __FUNCTION__);
}

#pragma mark - LinuxView

LinuxView::~LinuxView()
{}
void LinuxView::ViewAction()
{
    printf("LinuxView->%s\n", __FUNCTION__);
}
