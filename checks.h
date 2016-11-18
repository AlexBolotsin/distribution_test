#ifndef CHECKS_H
#define CHECKS_H

#include <QException>
#include <QDebug>

class AssertException : public QException
{
  QString error_message_;
public:
  explicit AssertException(QString file, QString method, int line);
  virtual const char* what() const throw() override;
};

#define ASSERT_EQUAL(A, B) if((A) != (B)) throw AssertException(__FILE__, __PRETTY_FUNCTION__, __LINE__);
#define ASSERT_NOT_EQUAL(A, B) if((A) == (B)) throw AssertException(__FILE__, __PRETTY_FUNCTION__, __LINE__);

#endif // CHECKS_H
