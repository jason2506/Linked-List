#ifndef ITERATOR_HPP_INCLUDED
#define ITERATOR_HPP_INCLUDED

namespace ctn
{

/*************************************************
    Declaration of Class BaseIterator
*************************************************/
template <typename ElementType, typename PointerType, typename SeekStrategy>
class BaseIterator
{
    public:
        // Type Definition(s)
        typedef ElementType value_type;
        typedef PointerType pointer_type;
        typedef ptrdiff_t   difference_type;

        // Constructor(s) & Destructor(s)
        BaseIterator(pointer_type *pointer = NULL);
        //~BaseIterator(void);

        // Get Function(s)
        pointer_type    *location(void) const;

        // Coversion Operator(s)
        operator pointer_type *(void) const;

        // Arithmetic Operator(s)
        BaseIterator    operator+(difference_type n) const;
        BaseIterator    operator-(difference_type n) const;
        BaseIterator    &operator++(void);
        BaseIterator    &operator--(void);
        BaseIterator    operator++(int);
        BaseIterator    operator--(int);
        BaseIterator    &operator+=(difference_type n);
        BaseIterator    &operator-=(difference_type n);

        // Member Access Operator(s)
        value_type      &operator*(void) const;
        value_type      *operator->(void) const;

        // Relational Operator(s)
        bool            operator==(const BaseIterator &iter) const;
        bool            operator!=(const BaseIterator &iter) const;

    protected:
        // Data Member(s)
        pointer_type    *_pointer;
};

} // end of namespace ctn

#include "iterator-implement.hpp"

#endif // ITERATOR_HPP_INCLUDED
