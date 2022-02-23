#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span{
public:
	Span(int N);
	Span(Span const &inst);
	~Span();

	void    addNumber(int nb);
	void    addNumberDeluxe(int nb, int size);
	int     shortestSpan();
	int     longestSpan();

	Span &operator=(Span const &inst);

	class FindDistExp;
	class StockTooFullExp;
private:
	int _size;
	std::vector<int> _stock;
	Span();
};

class Span::FindDistExp : public std::exception{
	virtual const char *what() const throw(){
		return ("Error-ShortestSpan: distance not found or container size <= 1");
	}
};

class Span::StockTooFullExp : public std::exception {
	virtual const char *what() const throw(){
		return ("Error-FillContainer: container full or container too small");
	}
};

#endif