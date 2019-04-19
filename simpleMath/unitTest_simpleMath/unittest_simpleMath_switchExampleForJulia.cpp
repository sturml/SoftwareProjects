/* unittest_SimpleMath.cpp : Defines the entry point for the console application. */

#include <stdio.h>

#ifdef SMM_GTEST
#include "gtest/gtest.h"
#endif
extern "C" {
#include "simpleMath.h"
}

int main( int argc, char *argv[] ) {
#ifdef SMM_GTEST
  TEST(testMath, myCubeTest)
  {
      EXPECT_EQ(1000, cubic(10));	
  }
#endif

  unsigned int a = 1;
  unsigned int b = 1;
  unsigned int variable = 1;
  unsigned int result = 0;
  unsigned int index = 0;

  while( index < 3 ) {
    switch( variable ) {
    case 1:
      printf( "case 1\n" );

      result = ( a == b );
      if( result == 1 ) {
        variable = 2;
      }

      printf( "variable = %d\n\n", variable );
      break;
    case 2:
      printf( "case 2\n" );
      variable = 1;
      printf( "variable = %d\n\n", variable );
      break;
    default:
      break;
    }

    index++;
  }

  return 0;
}

