#include "basic_test.h"
#include "distributor.h"
#include "checks.h"

#include <QDebug>

basic_test::basic_test()
{

}

void basic1()
{
  ASSERT_EQUAL(1, 2);
}

void basic_test::run()
{
  basic1();
}
