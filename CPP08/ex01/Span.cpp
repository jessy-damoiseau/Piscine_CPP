#include "Span.hpp"

Span::Span() : _size(0) {
	//std::cout << "Class Span -> Default constructor call" << std::endl;
}

Span::Span(int N) : _size(N) {
	//std::cout << "Class Span -> Parametric constructor call" << std::endl;
}

Span::Span(const Span &inst) {
	//std::cout << "Class Span -> Copy constructor call" << std::endl;
	*this = inst;
}

Span::~Span() {
	//std::cout << "Class Span -> Destructor call" << std::endl;
}

void Span::addNumber(int nb) {
	try {
		if (static_cast<int>(_stock.size()) == _size)
			throw Span::StockTooFullExp();
		_stock.push_back(nb);
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void Span::addNumberDeluxe(int firstNb, int endNb) {
	try {
		int dist = (firstNb <= endNb ? (endNb - firstNb) : (firstNb - endNb));
		if (_size < dist || ((_size - static_cast<int>(_stock.size())) < dist))
			throw Span::StockTooFullExp();
		for (int begin = (firstNb < endNb ? firstNb : endNb); begin < (firstNb > endNb ? firstNb : endNb); ++begin) {
			_stock.push_back(begin);
		}
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

int Span::longestSpan() {
	try {
		if (_stock.size() <= 1)
			throw Span::FindDistExp();
		int min = *std::min_element(_stock.begin(), _stock.end());
		int max = *std::max_element(_stock.begin(), _stock.end());
		std::cout << max << " " << min << std::endl;
		return max - min;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

int Span::shortestSpan() {
	try {
		if (_stock.size() <= 1)
			throw Span::FindDistExp();
		std::vector<int> tmp = _stock;
		std::sort(tmp.begin(), tmp.end());
		int ret = INT_MAX;
		for (std::vector<int>::iterator it = tmp.begin(); it < tmp.end(); it++){
			if ((it + 1) != tmp.end() && (*(it + 1) - *it) < ret)
				ret = (*(it + 1) - *it);
		}
		return ret;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

Span &Span::operator=(const Span &inst) {
	_size = inst._size;
	std::copy(inst._stock.begin(), inst._stock.end(), _stock.begin());
	return *this;
}