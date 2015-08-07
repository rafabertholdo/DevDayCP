#pragma once

#ifdef __ANDROID__
#include<tr1/memory>
#include<tr1/utility>
using std::tr1::shared_ptr;
using std::tr1::move;
#else
#include<memory>
#include<utility>
using std::shared_ptr;
using std::move;
#endif
