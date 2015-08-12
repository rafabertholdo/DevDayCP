#include "pch.h"
#include "ProdutoViewModel.h"
#include<memory>
#include<sstream>

DevDayCpShared::ProdutoViewModel::ProdutoViewModel()
{
	id = 0;
	descricao = L"This is a cross-platform view model";
}

std::wstring DevDayCpShared::ProdutoViewModel::ToString() 
{
	std::wstringstream stream;
	stream << L"Id: " << id << L" Descricao: " << descricao;
	return  stream.str();
}