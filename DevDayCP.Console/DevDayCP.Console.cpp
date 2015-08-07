// DevDayCP.Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\DevDayCP.Shared\ProdutoViewModel.h"
#include<string>
#include<iostream>

using namespace DevDayCpShared;

int main()
{
	ProdutoViewModel viewModel;
	viewModel.produtoPai = make_shared<ProdutoViewModel>();
	viewModel.produtoPai->id = 666;
	ProdutoViewModel vm2;
	vm2 = viewModel;
	viewModel.id = 12;
	viewModel.descricao = L"teste";
	vm2.id = 55;
	viewModel.descricao = L"Opa teste";
	wcout << viewModel.descricao << endl;
	char name[256];
	std::cin.getline(name, 256);
    return 0;
}

