all: enable_if.ast

enable_if.ast: enable_if.cpp
	clang++ -std=c++11 -Xclang -ast-print -fsyntax-only enable_if.cpp > enable_if.ast

