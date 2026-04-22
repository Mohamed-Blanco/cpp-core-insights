#include <cstddef> // for std::size_t
#include <iostream>

//using template parameters to deduct the length
template <typename T, std::size_t N>
constexpr std::size_t length(const T(&)[N]) noexcept // noexcept for explicitly telling the compiler that it will not throw any exception ever
{
	return N;
}

int main() {

	int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << "The array has: " << length(array) << " elements\n";
  //prints : The array has: 8 elements
	return 0;
}
