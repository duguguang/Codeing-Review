// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="OCP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>开闭原则(Open/Closed Principle)</summary>
// ***********************************************************************


//在面向对象编程领域中，开闭原则规定“软件中的对象（类，模块，函数等等）应该对于扩展是开放的，
//但是对于修改是封闭的”，这意味着一个实体是允许在不改变它的源代码的前提下变更它的行为。
//该特性在产品化的环境中是特别有价值的，在这种环境中，改变源代码需要代码审查，
//单元测试以及诸如此类的用以确保产品使用质量的过程。
//遵循这种原则的代码在扩展时并不发生改变，因此无需上述的过程。

#pragma once
#include <iostream>
#include "gtest/gtest.h"

class Car
{
public:
	virtual std::string getCarNae() = 0;
};

// 通过接口 + 继承来扩展类的功能
class ColorInfo
{
public:
	virtual std::string getCarColor() = 0;
};

class RealCar : public Car
{

};

class RealColorCar : public RealCar, public ColorInfo
{

};

TEST(OCP, test)
{


}