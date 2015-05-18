//
//  Warrior.cpp
//  Cpp_Study_03_mk2
//
//  Created by ssas on 2015. 5. 18..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include "Warrior.h"

void Warrior::PrintInfo()
{
    if (sName_ != NULL)
        cout<<"My Hp : "<<iHp_<<" / My Damage : "<<iDamage_<<" / Name : "<<sName_<<endl;
    else
        cout<<"My Hp : "<<iHp_<<" / My Damage : "<<iDamage_<<endl;
}

void Warrior::SetHp(int iHp)
{
    iHp_ = iHp;
}

void Warrior::SetDamage(int iDamage)
{
    iDamage_ = iDamage;
}

Warrior::Warrior()
{
    sName_ = NULL;
}

Warrior::Warrior(int iHp, int iDamage, const char* sName)
{
    SetHp(iHp);
    SetDamage(iDamage);
    
    sName_ = new char[strlen(sName)+1];   // malloc(sizeof(char)*(strlen(sName)+1))
    strcpy(sName_, sName);
}

Warrior::~Warrior()
{
    cout<<"--- delete Warrior"<<endl;
    if (sName_ != NULL)
        delete sName_;
}