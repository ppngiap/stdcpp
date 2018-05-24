#include <iostream>
#include <algorithm>
#include <vector>

template<typename T> using Iterator = typename T::iterator;

template<typename Cont, typename Pred>
Iterator<Cont> find_if(Cont& c, Pred p)
{
    return find_if(begin(c), end(c), p);
}

bool isOdd(int i) {
    return (i % 2) != 0;
}

void print_num(int i)
{
    std::cout << "num: " << i << '\n';
}


int main()
{
    std::vector<int> v {0, 2, 4, 9, 8, 7};
    auto it = find_if(v, isOdd);
    if (it != end(v)) {
        print_num(*it);
    }
}
