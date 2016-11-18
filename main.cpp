#include <QCoreApplication>
#include <QVector>
#include <test_engine.h>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  test_engine test_eng;
  test_eng.run_tests();

  return a.exec();
}
