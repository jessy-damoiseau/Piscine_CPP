#include "Span.hpp"

int main() {
	Span sp = Span(5);

	sp.addNumber(-42);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(-41);
	sp.addNumber(42); // error;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span error = Span(10);
	std::cout << error.shortestSpan() << std::endl;
	std::cout << error.longestSpan() << std::endl;

	return 0;
}