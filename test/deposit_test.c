#include "ctest.h"
#include "deposit.h"


CTEST(date, timemin1ex0)
{
  ASSERT_DBL_NEAR(0, print_income(-1, 10000));
}

CTEST(date, time0exmin1000)
{
  ASSERT_DBL_NEAR(-1000, print_income(0, 10000));
}


CTEST(date, time15exmin1000)
{
  ASSERT_DBL_NEAR(-1000, print_income(15, 10000));
}

CTEST(date, time30exmin1000)
{
  ASSERT_DBL_NEAR(-1000, print_income(30, 10000));
}

CTEST(date, time31ex200)
{
  ASSERT_DBL_NEAR(200, print_income(31, 10000));
}

CTEST(date, time100ex200)
{
  ASSERT_DBL_NEAR(200, print_income(100, 10000));
}

CTEST(date, time120ex200)
{
  ASSERT_DBL_NEAR(200, print_income(120, 10000));
}

CTEST(date, time121ex600)
{
  ASSERT_DBL_NEAR(600, print_income(121, 10000));
}

CTEST(date, time240ex600)
{
  ASSERT_DBL_NEAR(600, print_income(240, 10000));
}

CTEST(date, time241ex1200)
{
  ASSERT_DBL_NEAR(1200, print_income(241, 10000));
}

CTEST(date, time365ex1200)
{
  ASSERT_DBL_NEAR(1200, print_income(365, 10000));
}

CTEST(date, time366ex0)
{
  ASSERT_DBL_NEAR(0, print_income(366, 10000));
}

