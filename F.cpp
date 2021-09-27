#include <iostream>
#include <cstdint>
#include <type_traits>

struct T
{
	::int32_t a;
	::int64_t b;
};

int main()
{
	std::cout<<sizeof(T)<<std::endl;
		
	T A;
	std::cout<<&A<<std::endl;
	std::cout<<&A.a<<std::endl;
	std::cout<<&A.b<<std::endl;
}
