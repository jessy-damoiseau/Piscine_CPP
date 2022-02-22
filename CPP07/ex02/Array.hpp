#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
public:
    Array(): _len(0) {
        std::cout << "Class template Array -> Default constructor call" << std::endl;
        _tab = new T[_len]; 
    }

    Array(unsigned int n) : _len(n) {
         std::cout << "Class template Array -> Parametric constructor call" << std::endl;
        _tab = new T[_len];
    }

    Array(Array const &inst) : _len(inst._len){
         std::cout << "Class template Array -> Copy constructor call" << std::endl;
        _tab = new T[_len];
        for (size_t i = 0; i < _len; i++){
            _tab[i] = inst._tab[i];
        }
    }

    ~Array(){
         std::cout << "Class template Array -> Destructor call" << std::endl;
        delete[] _tab;
    }

    size_t size() const {
        return _len;
    }

    Array &operator=(Array const &inst){
        delete[] _tab;
        _len = inst._len;
        _tab = new T[_len];
        for (size_t i = 0; i < _len; i++){
            _tab[i] = inst._tab[_len];
        }
        return *this;
    }

    T   &operator[](unsigned int i) const {
        if (i >= _len || i < 0)
            throw Array::FailAcces();
        else
            return _tab[i];
    }

    class FailAcces;
private:
    T   *_tab;
    size_t _len;
};






template <typename T>
class Array<T>::FailAcces : public std::exception {
public:
	virtual const char *what() const throw(){
        return ("invalid operateur");
    }
};

#endif