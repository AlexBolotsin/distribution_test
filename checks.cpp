#include "checks.h"
#include <cstring>

AssertException::AssertException(QString file, QString method, int line)
{
  error_message_.append("An exception appeared in ");
  error_message_.append(file);
  error_message_.append(". A method name is ");
  error_message_.append(method);
  error_message_.append(" and line number is ");
  error_message_.append(QString::number(line));
}

const char* AssertException::what() const throw()
{
  //qDebug() << error_message_;
  char* msg = new char[error_message_.size() + 1];
  msg[error_message_.size()] = '\0';
  strcpy(msg, error_message_.toStdString().c_str());
  return msg;
}
