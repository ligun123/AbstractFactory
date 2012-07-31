//
//  Window.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_Window_h
#define AbstractFactory_Window_h
#include "Bar.h"
#include "Button.h"
#include "View.h"
class Window {
    
public:
    Window(){};
    virtual ~Window();
    virtual Bar *CreateBar();
    virtual Button *CreateButton();
    virtual View *CreateView();
};

#endif
