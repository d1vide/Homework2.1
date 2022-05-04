#include "Header.h"

std::string removeMinus(std::string s) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '-') {
			s[i] = ' ';
		}
	}
	return s;
}

std::string changeFive(std::string s) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		s[i] = '5';
	}
	return s;
}

std::string changeRandom(std::string s) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		s[i] = char(rand()%10+48);
	}
	return s;
}

