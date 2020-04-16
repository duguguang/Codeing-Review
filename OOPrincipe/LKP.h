// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="LKP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>����֪��ԭ��(Least Knowledge Principle)</summary>
// ***********************************************************************

//��ī߯��(������)���ɣ�Law of Demeter����дLoD�����Ϊ������֪ʶԭ��Principle of Least Knowledge��������һ��������������ָ��ԭ���ر����������ĳ�����ơ���ī߯��(������)����������ϵ�һ�־��尸������ԭ��������������ѧ��1987��ĩ�ڷ����ģ����Լ򵥵���������һ�ַ�ʽ�ܽ�:
//
//1. ÿ����Ԫ���������ĵ�Ԫֻ��ӵ�����޵�֪ʶ��ֻ���뵱ǰ��Ԫ������ϵ�ĵ�Ԫ��
//
//2. ÿ����Ԫֻ�ܺ��������ѽ�̸�����ܺ�İ����Ԫ��̸��
//
//3. ֻ���Լ�ֱ�ӵ����ѽ�̸��
//
//���ԭ���������Դ��ϣ�����е�ũҵŮ�񣬹¶��ĵ�ī߯����

#pragma once
#include <iostream>
#include <vector>
#include "gtest/gtest.h"

class Maid
{
public:
	void cook()
	{

	}
};

using MaidList = std::vector<Maid>;

class Butler
{

public:
	void cook()
	{
		auto maids = getMaids(10);
		for (auto maid : maids)
		{
			maid.cook();
		}
	}

private:
	MaidList getMaids(int n)
	{
		MaidList maids;
		for (int i = 0; i < n; ++i)
		{
			maids.push_back(Maid());
		}
		return maids;
	}
};

class Master
{
public:
	void cookCommand(Butler butler)
	{
		butler.cook();
	}
};


TEST(LKP, test)
{

}