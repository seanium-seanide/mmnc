#include <QTest>


class MainWindowTests : public QObject
{
  Q_OBJECT

private slots:
  void dummyTest()
  {
    QCOMPARE(true, false);
  }
};


QTEST_MAIN(MainWindowTests);
#include "qt_unit_tests.moc"
