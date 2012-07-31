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

int main(int argc, const char * argv[])
{
    // insert code here...
    
    UIFactory Factory = UIFactory();
    printf("*********test    Mac     UI*****************\n");
    //test mac UI
    Window *macWindow = Factory.CreateMacWindow();
    Bar *macBar = macWindow->CreateBar();
    Button *macButton = macWindow->CreateButton();
    View *macView = macWindow->CreateView();
    macBar->BarAction();
    macButton->ButtonAction();
    macView->ViewAction();
    delete macBar;
    delete macButton;
    delete macView;
    delete macWindow;
    
    printf("*********test    linux   UI*****************\n");
    //test linux UI
    Window *linuxWindow = Factory.CreateLinuxWindow();
    Bar *linuxBar = linuxWindow->CreateBar();
    Button *linuxButton = linuxWindow->CreateButton();
    View *linuxView = linuxWindow->CreateView();
    linuxBar->BarAction();
    linuxButton->ButtonAction();
    linuxView->ViewAction();
    delete linuxBar;
    delete linuxButton;
    delete linuxView;
    delete linuxWindow;
    
    return 0;
}
