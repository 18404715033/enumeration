//
//  main.cpp
//  enumeration
//
//  Created by 李伯阳 on 15/12/9.
//  Copyright © 2015年 李伯阳. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    enum color
    {
        RED=3,
        YELLOW=6,
        BLUE=9
    };
    enum color a=RED;
    color b;
    cout<<"RED="<<RED<<endl;
    cout<<"YELLOW="<<YELLOW<<endl;
    cout<<"BLUE="<<BLUE<<endl;
    b=a;
    a=BLUE;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    b=BLUE;
    cout<<"a<b="<<(a<b)<<endl;
    return 0;
}
