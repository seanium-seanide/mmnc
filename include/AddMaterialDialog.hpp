#pragma once

#include <QDialog>
#include <QDoubleValidator>


namespace Ui
{
  class AddMaterialDialog;
}


class AddMaterialDialog: public QDialog
{
  Q_OBJECT

public:
  explicit AddMaterialDialog(QWidget* parent=nullptr);
  ~AddMaterialDialog();

public slots:
  void onImportMaterialButtonClicked();

private:
  Ui::AddMaterialDialog* ui;

  QDoubleValidator m_doubleValidator;
};
