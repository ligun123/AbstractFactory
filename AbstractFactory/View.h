//
//  View.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_View_h
#define AbstractFactory_View_h

class View {
    
public:
    View(){};
    virtual ~View();
    virtual void ViewAction();
};


//The bar of mac os
class MacView : public View {
    
public:
    MacView(){};
    virtual ~MacView();
    virtual void ViewAction();
};

//The bar of linux
class LinuxView : public View {
    
public:
    LinuxView(){};
    virtual ~LinuxView();
    virtual void ViewAction();
};

#endif
