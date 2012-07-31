//
//  Bar.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_Bar_h
#define AbstractFactory_Bar_h

class Bar {
    
public:
    Bar(){};
    virtual ~Bar();
    virtual void BarAction();
};


//The bar of mac os
class MacBar : public Bar {
    
public:
    MacBar(){};
    virtual ~MacBar();
    virtual void BarAction();
};

//The bar of linux
class LinuxBar : public Bar {
    
public:
    LinuxBar(){};
    virtual ~LinuxBar();
    virtual void BarAction();
};

#endif
