#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "NoLifeNx/file.hpp"
#include "AudioPlayerWidget.hpp"
#include <QMainWindow>
#include <QLabel>
#include <QTreeWidget>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent_ = 0);
    ~MainWindow();

private slots:
    void on_action_Open_triggered();
    void handleCurrentItemChanged(QTreeWidgetItem* current, QTreeWidgetItem* previous);
    void handleItemActivated(QTreeWidgetItem *widgetItem, int column);
    void handleItemExpanded(QTreeWidgetItem *widgetItem);

    void on_actionCopy_path_triggered();

    void on_actionCopy_path_NoLifeNx_triggered();

    void on_actionSave_to_file_triggered();

private:
    Ui::MainWindow* ui;
    nl::file* file;
    bool m_looping = true;
    QLabel *statusBarLabel;
    QTreeWidget *m_treeWidget;
    AudioPlayerWidget *m_audioPlayerWidget;
};

#endif // MAINWINDOW_HPP
