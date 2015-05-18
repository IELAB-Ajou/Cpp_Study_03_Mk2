//
//  Warrior.h
//  Cpp_Study_03_mk2
//
//  Created by ssas on 2015. 5. 18..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#ifndef __Cpp_Study_03_mk2__Warrior__
#define __Cpp_Study_03_mk2__Warrior__

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Warrior       // struct + 함수 내장이 가능하고 기타 등등 발전된 기능을 쓸 수 있는 것 ...?
{
    // public, protected, private
private:        // 내부 접근만 허용
    int iHp_;
    int iDamage_;
    char* sName_;

public:         // 외부, 내부 접근 모두 허용
    Warrior();
    Warrior(int iHp, int iDamage, const char* sName);
    ~Warrior();
    
    void PrintInfo();
    void SetHp(int iHp);
    void SetDamage(int iDamage);
};

/*
void PrintInfo(Warrior* pWr)
{
    cout<<pWr->iHp_<<endl;
}
*/
/*
Warrior* CreateWarrior(int iHp, int iDamage)
{
    Warrior* pWr = new Warrior; //(Warrior*)malloc(sizeof(Warrior));
    pWr->iHp_ = 17;
    pWr->iDamage_ = 39;
    
    return pWr;
}
 */

#endif /* defined(__Cpp_Study_03_mk2__Warrior__) */
