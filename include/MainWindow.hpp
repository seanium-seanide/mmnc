#pragma once

#include <QMainWindow>
#include "Material.hpp"


namespace Ui
{
  class MainWindow;
}

class MainWindow: public QMainWindow
{
public:
  explicit MainWindow(QWidget* parent=nullptr);
  ~MainWindow();

public slots:
  void onAddMaterial();
  void onInterfParams();
  void onViewMaterials();
  void onAddLayer();
  void onRemoveLayer();
  void onImportStack();
  void onExportStack();
  void onComputeStack();

private:
  Ui::MainWindow* ui;

  // TODO: Overload operators for Material class, and remove these member functins.
  void addMaterials(Material material1, Material materialb);
  void subMaterials(Material material1, Material materialb);
};


