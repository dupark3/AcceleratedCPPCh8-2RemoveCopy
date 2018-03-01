#include <iostream>
#include <iterator> // back_inserter
#include <vector>

#include "my_remove_copy.h"

int main() {
    // remove copy function copies any non-matching value to a NEW container, doesn't actually REMOVE
    // Only creates a new vector without any matching value

    int myints[] = {1, 2, 3, 3, 4, 3, 5, 6};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int));
    std::vector<int> vec2;

    // copy all values that are NOT 3 into vec2
    my_remove_copy(vec.begin(), vec.end(), back_inserter(vec2), 3);

    // print results
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";

    return 0;
}
