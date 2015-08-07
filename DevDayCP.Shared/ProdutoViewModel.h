#pragma once

#include "pch.h"
#include "IStringConvertible.h"
#include<memory>
using namespace std;

namespace DevDayCpShared{

	class ProdutoViewModel : virtual public IStringConvertible
	{			
		
	public:		
		shared_ptr<ProdutoViewModel> produtoPai;
		uint64_t id;
		wstring descricao;

		ProdutoViewModel();
		ProdutoViewModel(const ProdutoViewModel& pai) :produtoPai(std::move(pai.produtoPai)) {};
		ProdutoViewModel& operator=(const ProdutoViewModel& other) {
			produtoPai = std::move(other.produtoPai);
			return *this;		
		}		
		
		
		
		wstring ToString() override;
	};
}
