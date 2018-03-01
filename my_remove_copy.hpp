

template <class forwardIterator, class outputIterator, class T>
outputIterator my_remove_copy(forwardIterator first, forwardIterator last, outputIterator destination, T value){
    for ( ; first != last; ++first){
        if (*first != value) {
            *destination = *first;
            ++destination;
        }
    }
    return destination;
}
