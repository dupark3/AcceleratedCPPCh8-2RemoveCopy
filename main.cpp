#include <iostream>
#include <iterator> // back_inserter
#include <vector>

#include "my_remove_copy.h"
#include "my_remove_copy_if.h"

bool IsDivisibleByThree (int n){
    return (n % 3) == 0;
}
int main() {
    // remove copy function copies any non-matching value to a NEW container, doesn't actually REMOVE
    // Only creates a new vector without any matching value

    int myints[] = {1, 2, 3, 3, 4, 3, 5, 6};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int));
    std::vector<int> vec2;
    std::vector<int> vec3;

    // copy all values that are NOT 3 into vec2
    my_remove_copy(vec.begin(), vec.end(), back_inserter(vec2), 3);

    // print results
    for (std::vector<int>::size_type i = 0; i != vec2.size(); ++i)
        std::cout << vec2[i] << " ";

    // copy all values that are not divisible by 3
    my_remove_copy_if(vec.begin(), vec.end(), back_inserter(vec3), IsDivisibleByThree);

    // print results
    for (std::vector<int>::size_type i = 0; i != vec3.size(); ++i)
        std::cout << vec3[i] << " ";


    return 0;
}
