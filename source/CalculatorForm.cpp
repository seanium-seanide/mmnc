#include "CalculatorForm.hpp"
#include "ui_CalculatorForm.h"


#include <QString>


CalculatorForm::CalculatorForm(QWidget* parent)
: QWidget(parent)
, ui(new Ui::CalculatorForm)
{
  ui->setupUi(this);

  connect(ui->inputSpinbox1, &QSpinBox::valueChanged, this, &CalculatorForm::updateResult);
  connect(ui->inputSpinbox2, &QSpinBox::valueChanged, this, &CalculatorForm::updateResult);
}

CalculatorForm::~CalculatorForm()
{
  delete ui;
}

void CalculatorForm::updateResult()
{
  const int sum = ui->inputSpinbox1->value() + ui->inputSpinbox2->value();
  ui->outputLabel->setText(QString::number(sum));
}

void CalculatorForm::changeEvent(QEvent* event)
{
  QWidget::changeEvent(event);

  switch(event->type())
  {
  case QEvent::LanguageChange:
  {
    ui->retranslateUi(this);
    break;
  }

  default:
  {
    break;
  }
  }
}
