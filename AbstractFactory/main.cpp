//
//  main.cpp
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "UIFactory.h"


/*
 In a project , For example , You want to create UI of Iphone or Ipad, Just change  Factory.CreateMacWindow() || Factory.CreateLinuxWindow()  is OK
 */

#define condition 1

int main(int argc, const char * argv[])
{
    // insert code here...
    
    UIFactory Factory = UIFactory();
    Window *myWindow = NULL;
    if (condition) {
        myWindow = Factory.CreateMacWindow();
    } else {
        myWindow = Factory.CreateLinuxWindow();
    }
    
    Bar *currentbar = myWindow->CreateBar();
    Button *currentButton = myWindow->CreateButton();
    View *currentView = myWindow->CreateView();
    currentbar->BarAction();
    currentButton->ButtonAction();
    currentView->ViewAction();
    delete currentbar;
    delete currentButton;
    delete currentView;
    delete myWindow;
    
    return 0;
}
