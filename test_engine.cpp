#include <QDebug>
#include <QException>
#include "test_engine.h"
#include "basic_test.h"

test_engine::test_engine()
{

}

void test_engine::run_tests()
{
  try
  {
    basic_test().run();
  }
  catch(QException& exception)
  {
    qDebug() << "basic_test failed" << exception.what();
  }
}
