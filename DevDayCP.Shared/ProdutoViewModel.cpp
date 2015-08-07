#include "pch.h"
#include "ProdutoViewModel.h"
#include<memory>

DevDayCpShared::ProdutoViewModel::ProdutoViewModel()
{
	auto p = make_shared<int>();
	

}



std::wstring DevDayCpShared::ProdutoViewModel::ToString() 
{
	return std::wstring(L"");
}