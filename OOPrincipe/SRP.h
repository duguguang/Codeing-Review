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
// <summary>��һְ��ԭ��(SRP,Single Responsibility Principle)</summary>
// ***********************************************************************

// ���壺
//��һ����ԭ��Single responsibility principle���涨ÿ���඼Ӧ����һ����һ�Ĺ��ܣ�
//���Ҹù���Ӧ�����������ȫ��װ�������������ģ������ģ�����Ӧ�����ܵĺ͸ù���ƽ��
//������ƽ�У���ζ��û��������������ά���ٿ�

#pragma once
#include <iostream>
#include "gtest/gtest.h"

// ��һְ��ԭ���Ǵ���Ĺ��ܵĽǶ�ȥ��ƣ�����ͬ��ְ��ֱ���ڲ�ͬ�����У�����ʹ����Ƹ������������޸ġ�
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