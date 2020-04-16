// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-15-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="SRP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>单一职责原则(SRP,Single Responsibility Principle)</summary>
// ***********************************************************************

// 定义：
//单一功能原则（Single responsibility principle）规定每个类都应该有一个单一的功能，
//并且该功能应该由这个类完全封装起来。所有它的（这个类的）服务都应该严密的和该功能平行
//（功能平行，意味着没有依赖）。——维基百科

#pragma once
#include <iostream>
#include "gtest/gtest.h"

// 单一职责原则是从类的功能的角度去设计，将不同的职责分别归于不同的类中，这样使得设计更加清晰、易修改。
class Car
{
public:
	virtual void setCarColor() = 0;
	virtual void setCarName() = 0;
	virtual std::string getCarName() = 0;
	virtual std::string getCarColor() = 0;
};


class CarAction
{
public:
	virtual void run() = 0;
	virtual void start() = 0;
	virtual void stop()= 0;
};


const std::string RunningString = "The RealCar is Running";

class RealCar : public Car, public CarAction
{
public:
	void setCarColor() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	void setCarName() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	void run() override
	{
		std::cout << RunningString << std::endl;
	}

	void start() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	void stop() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	std::string getCarName() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	std::string getCarColor() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

};

TEST(SRP, CarTest)
{
	RealCar car;
	car.run();
}