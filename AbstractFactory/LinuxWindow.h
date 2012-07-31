//
//  LinuxWindow.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_LinuxWindow_h
#define AbstractFactory_LinuxWindow_h
#include "Window.h"

class LinuxWindow : public Window {
    
public:
    LinuxWindow(){};
    virtual ~LinuxWindow();
    virtual Bar *CreateBar();
    virtual Button *CreateButton();
    virtual View *CreateView();
};


#endif
