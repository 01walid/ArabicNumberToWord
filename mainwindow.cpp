#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Number Line edit validation

    QRegExp rx("[0-9]+\\.?[0-9][0-9]");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->numberLineEdit->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_numberLineEdit_textChanged(const QString &arg1)
{
    numberValidation();
    double amount   = arg1.toDouble();
    ushort  currency = ui->currencyComboBox->currentIndex();
    QString prefix   = ui->prefixLineEdit->text().trimmed();
    QString suffix   = ui->suffixLineEdit->text().trimmed();


    NumberToWord number(amount, currency, prefix, suffix);

    ui->toWordTextEdit->setText(number.ConvertToArabic());
}

void MainWindow::on_currencyComboBox_currentIndexChanged()
{
    on_numberLineEdit_textChanged(ui->numberLineEdit->text().trimmed());
}

void MainWindow::on_prefixLineEdit_textChanged()
{
    on_numberLineEdit_textChanged(ui->numberLineEdit->text().trimmed());
}

void MainWindow::on_suffixLineEdit_textChanged()
{
    on_numberLineEdit_textChanged(ui->numberLineEdit->text().trimmed());
}

void MainWindow::numberValidation()
{
    QString var = ui->numberLineEdit->text().trimmed();
    if (var.contains('.'|','))
    {
        QString part2 = var.split('.'|',').at(1);
        if(!part2.isEmpty() && part2.length() == 1 && !decimalPartSolved)
        {
            part2 +='0';
            ui->numberLineEdit->setText(ui->numberLineEdit->text()+'0');
            ui->numberLineEdit->cursorBackward(true);
            decimalPartSolved = true;
        }
        else decimalPartSolved = false;
    }
}
