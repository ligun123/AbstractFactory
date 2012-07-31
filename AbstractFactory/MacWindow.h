//
//  MacWindow.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_MacWindow_h
#define AbstractFactory_MacWindow_h
#include "Window.h"

class MacWindow : public Window {
    
public:
    MacWindow(){};
    virtual ~MacWindow();
    virtual Bar *CreateBar();
    virtual Button *CreateButton();
    virtual View *CreateView();
};


#endif
