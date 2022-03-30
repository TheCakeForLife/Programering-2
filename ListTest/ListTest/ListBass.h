#include<iostream>
#pragma once
class ListBase 
{
	public:
	virtual std::string GetData() = 0;
	private:
	ListBase();
};