#include<iostream>
using namespace std;

class Parent{
public:
  virtual void doSomething() = 0;
};

class Child1: public Parent{
public:
  void doSomething(){

  }
};

class Child2: public Parent{
public:
  void doSomething(){

  }
};

class Child3: public Parent{
public:
  void doSomething(){

  }
};
