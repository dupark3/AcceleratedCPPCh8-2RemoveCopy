#include <iostream>
#include <iterator> // back_inserter
#include <vector>

#include "my_remove.h"
#include "my_remove_copy.h"
#include "my_remove_copy_if.h"

bool IsDivisibleByThree (int n){
    return (n % 3) == 0;
}
int main() {
    // remove copy function copies any non-matching value to a NEW container, doesn't actually REMOVE
    // Only creates a new vector without any matching value

    int myints[] = {1, 2, 3, 3, 4, 3, 5, 6};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(*myints));
    std::vector<int> vec2;
    std::vector<int> vec3;

    // print original vector
    std::cout << "Original vector to modify: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    // copy all values that are NOT 3 into vec2 and print results
    my_remove_copy(vec.begin(), vec.end(), back_inserter(vec2), 3);
    std::cout << "Result of my_remove_copy with value 3: ";
    for (std::vector<int>::size_type i = 0; i != vec2.size(); ++i)
        std::cout << vec2[i] << " ";
    std::cout << std::endl;

    // copy all values that are not divisible by 3 and print results
    my_remove_copy_if(vec.begin(), vec.end(), back_inserter(vec3), IsDivisibleByThree);
    std::cout << "Result of my_remove_copy_if with predicate \"Divisible by Three\": ";
    for (std::vector<int>::size_type i = 0; i != vec3.size(); ++i)
        std::cout << vec3[i] << " ";
    std::cout << std::endl;

    // move any value equal to 3 to the front of the vector. Do not resize to show that the vector size didn't change.
    my_remove(vec.begin(), vec.end(), 3);
    std::cout << "Result of my_remove with value 3: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    return 0;
}
