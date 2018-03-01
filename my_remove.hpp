

template <class outputIterator, class T>
outputIterator my_remove(outputIterator first, outputIterator last, T value){
    outputIterator it = first;

    while (it != last){
        if (*it == value)
            while (*it == value)
                ++it;
        *first = *it;
        ++first;
        ++it;
    }
    return first;
}
