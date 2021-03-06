// BoostSmartPointerSoleOwnership.cpp : Defines the entry point for the console application.
//

#include <boost/scoped_ptr.hpp>
#include <boost/scoped_array.hpp>
#include <iostream>

int main()
{
	boost::scoped_ptr<int> p{ new int{1} };
	std::cout << *p << std::endl;
	p.reset(new int{ 2 });
	std::cout << *p.get() << std::endl;
	p.reset();
	std::cout << std::boolalpha << static_cast<bool>(p) << std::endl;

	boost::scoped_array<int> pArray{ new int[2] };
	*pArray.get() = 1;
	std::cout << *pArray.get() << std::endl;

	pArray[1] = 2;
	pArray.reset(new int[3]);

	std::cin.get();

    return 0;
}

