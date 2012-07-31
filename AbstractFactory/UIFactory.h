//
//  UIFactory.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_UIFactory_h
#define AbstractFactory_UIFactory_h

#include "Window.h"


//Use UIFactory to create Window , then use Window to create Every UI items adapt to the window 
class UIFactory {
public:
    UIFactory(){};
    virtual ~UIFactory();
    Window *CreateMacWindow();
    Window *CreateLinuxWindow();
};

#endif
