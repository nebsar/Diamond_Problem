/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 13, 2018, 10:38 PM
 */

#include <iostream>

class A {public:int a;};

class B : virtual public A {public:int b;};
class C : virtual public A {public:int c;};

class D : public B, public C {int d;};

int main() {
    D d;
    d.a =9;
}

