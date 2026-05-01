#pragma once

#include <QWidget>
#include <QEvent>


namespace Ui
{
  class CalculatorForm;
}


class CalculatorForm: public QWidget
{
Q_OBJECT

public:
  explicit CalculatorForm(QWidget* parent=nullptr);
  ~CalculatorForm();

private slots:
  void updateResult();
  void changeEvent(QEvent* event) override;

private:
  Ui::CalculatorForm* ui;
};
