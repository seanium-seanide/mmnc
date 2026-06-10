#pragma once

#include <string>
#include <QDialog>
#include <QDoubleValidator>
#include "Material.hpp"


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
  virtual void accept() override;

private:
  Ui::AddMaterialDialog* ui;

  QDoubleValidator m_doubleValidator;

  Material m_material;
};
