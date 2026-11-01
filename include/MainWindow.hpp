#pragma once

#include <QMainWindow>
#include <unordered_map>

#include "Material.hpp"
#include "Interferometer.hpp"


namespace Ui
{
  class MainWindow;
}


class MainWindow: public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget* parent=nullptr);
  ~MainWindow();

public slots:
  void onAddMaterial();
  void onInterfParams();
  void onOutputParams();
  void onViewMaterials();
  void onAddLayer();
  void onRemoveLayer();
  void onImportStack();
  void onExportStack();
  void onComputeStack();

private:
  Ui::MainWindow* m_impl;

  std::unordered_map<std::string, Material> m_materials{};
  Interferometer m_interferometer;
};
