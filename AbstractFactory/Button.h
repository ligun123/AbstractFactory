//
//  Button.h
//  AbstractFactory
//
//  Created by Gun Li on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef AbstractFactory_Button_h
#define AbstractFactory_Button_h

class Button {
    
public:
    Button(){};
    virtual ~Button();
    virtual void ButtonAction();
};


//The bar of mac os
class MacButton : public Button {
    
public:
    MacButton(){};
    virtual ~MacButton();
    virtual void ButtonAction();
};

//The bar of linux
class LinuxButton : public Button {
    
public:
    LinuxButton(){};
    virtual ~LinuxButton();
    virtual void ButtonAction();
};


#endif
