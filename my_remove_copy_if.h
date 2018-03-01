#ifndef GUARD_my_remove_copy_if_h
#define GUARD_my_remove_copy_if_h

#include "my_remove_copy_if.hpp"

template <class forwardIterator, class outputIterator, class predicate>
outputIterator my_remove_copy_if(forwardIterator, forwardIterator, outputIterator, predicate);

#endif // GUARD_my_remove_copy_if_h
