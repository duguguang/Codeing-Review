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
// <summary>����ԭ��(Open/Closed Principle)</summary>
// ***********************************************************************


//����������������У�����ԭ��涨������еĶ����࣬ģ�飬�����ȵȣ�Ӧ�ö�����չ�ǿ��ŵģ�
//���Ƕ����޸��Ƿ�յġ�������ζ��һ��ʵ���������ڲ��ı�����Դ�����ǰ���±��������Ϊ��
//�������ڲ�Ʒ���Ļ��������ر��м�ֵ�ģ������ֻ����У��ı�Դ������Ҫ������飬
//��Ԫ�����Լ�������������ȷ����Ʒʹ�������Ĺ��̡�
//��ѭ����ԭ��Ĵ�������չʱ���������ı䣬������������Ĺ��̡�

#pragma once
#include <iostream>
#include "gtest/gtest.h"

class Car
{
public:
	virtual std::string getCarNae() = 0;
};

// ͨ���ӿ� + �̳�����չ��Ĺ���
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