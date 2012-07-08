#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "numbertoword.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void on_numberLineEdit_textChanged(const QString &arg1);

    void on_currencyComboBox_currentIndexChanged();

    void on_prefixLineEdit_textChanged();

    void on_suffixLineEdit_textChanged();

    void numberValidation();

private:
    Ui::MainWindow *ui;
    bool decimalPartSolved;
};

#endif // MAINWINDOW_H
