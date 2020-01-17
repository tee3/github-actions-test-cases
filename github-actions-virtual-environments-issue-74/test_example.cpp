#define BOOST_TEST_MODULE test_example

#include "boost/test/unit_test.hpp"

#include <iostream>

BOOST_AUTO_TEST_CASE (test_example)
{
   BOOST_TEST (0 == 0);

   std::cout << "Hello, world!\n";
}
