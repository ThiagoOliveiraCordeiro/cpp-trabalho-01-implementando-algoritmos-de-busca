/*!
 * A simple implementation of the following algorithms for array of integers:
 *  + linear search
 *  + upper bound
 *  + lower bound
 *  + binary search
 *
 * \author Selan R. dos Santos
 * \date July, 31st.
 */

#ifndef SEARCHING_H
#define SEARCHING_H

#include <iterator>

/// Searching Algorithms Namespace
namespace sa {

    /// just an alias for an integer type.
    using value_type = int;

    /// Linear search.
    value_type * lsearch( value_type * first, value_type * last, value_type value );

    /// Binary search.
    value_type * bsearch( value_type * first, value_type * last, value_type value );

     value_type * brsearch( value_type * first, value_type * last, value_type value );

 value_type * search( value_type * first, value_type * lastAssistant, value_type * middle, value_type value, value_type * last );

    /// Lower bound.
    value_type * lbound( value_type * first, value_type * last, value_type value );

    /// Upper bound.
    value_type * ubound( value_type * first, value_type * last, value_type value );
}

#endif // SEARCHING_H
