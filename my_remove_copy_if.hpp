

template <class forwardIterator, class outputIterator, class predicate>
outputIterator my_remove_copy_if(forwardIterator first, forwardIterator last, outputIterator destination, predicate pred){
    for ( ; first != last; ++first){
        if(!pred(*first)){
            *destination = *first;
            ++destination;
        }
    }
    return destination;
}
