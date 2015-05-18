//
//  main.cpp
//  Cpp_Study_03_mk2
//
//  Created by ssas on 2015. 5. 18..
//  Copyright (c) 2015년 ShockRabbit. All rights reserved.
//

#include <iostream>
#include "Warrior.h"

using namespace std;        // -> namespace std 안에 있는 것들을 명시하지 않고도 그냥 사용하겠다.

void Swap(int a, int b)
{
    // int a = iFirst
    // int b = iSecond
    
    // call by value
    
    cout<<a<<", "<<b<<endl;
    
    int iTempNum;
    iTempNum = a;
    a = b;
    b = iTempNum;
    
    cout<<a<<", "<<b<<endl;
}

void SwapByRef(int& a, int& b)    // Reference : 변수에 이름을 하나 더 지어주는 것
{
    // 전달인자 (int& a, int& b) .. 를 풀어쓰자면.. SwapByRef(iFirst, iSecond);
    //int& a = iFirst;
    //int& b = iSecond; 이렇게 호출된 것이라고 생각하면 된다.
    
    // call by Ref
    cout<<a<<", "<<b<<endl;
    
    int iTempNum;
    iTempNum = a;
    a = b;
    b = iTempNum;
    
    cout<<a<<", "<<b<<endl;
}

int main(void)
{
    int iValue;
    int iFirst = 19;
    int iSecond = 99;
    Warrior cWr;//(277, 999, "DrO"); //cWr = Warrior(277, 999);
    Warrior* pWr;
    
    cout<<"Hello World"<<endl;  // cout, end, <<
    cout<<17<<endl;
    cout<<"Hello World"<<endl;
    
    // 입력           cin
    cin>>iValue;
    cout<<"Value is : "<<iValue<<endl;
    
    // Swap
    SwapByRef(iFirst, iSecond);     // Swap 으로는 안바뀌고 SwapByRef 로는 바뀐다.
    cout<<iFirst<<", "<<iSecond<<endl;
    
    
    cWr.SetHp(777);
    cWr.SetDamage(444);
    cWr.PrintInfo();
    
    pWr = new Warrior(1000, 1700, "JSoon");
    pWr->PrintInfo();
    delete pWr;
    
    return 0;
}
