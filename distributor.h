#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H

#include <QVector>
#include <QMap>

class distributor
{
  QMap<int, QVector<int>> sequenses_;
public:
  distributor();
  void set_sequence(int id, QVector<int> seq);
  QVector<int> optimize(QVector<int> data);
};

#endif // DISTRIBUTOR_H
