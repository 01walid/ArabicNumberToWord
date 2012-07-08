/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 8. Jul 21:27:36 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *prefixLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *numberLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *suffixLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *currencyComboBox;
    QTextEdit *toWordTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(518, 283);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setInputMethodHints(Qt::ImhNone);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        prefixLineEdit = new QLineEdit(centralWidget);
        prefixLineEdit->setObjectName(QString::fromUtf8("prefixLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prefixLineEdit->sizePolicy().hasHeightForWidth());
        prefixLineEdit->setSizePolicy(sizePolicy);
        prefixLineEdit->setInputMethodHints(Qt::ImhNone);

        verticalLayout->addWidget(prefixLineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        numberLineEdit = new QLineEdit(centralWidget);
        numberLineEdit->setObjectName(QString::fromUtf8("numberLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numberLineEdit->sizePolicy().hasHeightForWidth());
        numberLineEdit->setSizePolicy(sizePolicy1);
        numberLineEdit->setInputMethodHints(Qt::ImhNone);

        verticalLayout_2->addWidget(numberLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        suffixLineEdit = new QLineEdit(centralWidget);
        suffixLineEdit->setObjectName(QString::fromUtf8("suffixLineEdit"));
        sizePolicy.setHeightForWidth(suffixLineEdit->sizePolicy().hasHeightForWidth());
        suffixLineEdit->setSizePolicy(sizePolicy);
        suffixLineEdit->setInputMethodHints(Qt::ImhNone);

        verticalLayout_3->addWidget(suffixLineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        currencyComboBox = new QComboBox(centralWidget);
        currencyComboBox->setObjectName(QString::fromUtf8("currencyComboBox"));

        verticalLayout_4->addWidget(currencyComboBox);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        toWordTextEdit = new QTextEdit(centralWidget);
        toWordTextEdit->setObjectName(QString::fromUtf8("toWordTextEdit"));
        toWordTextEdit->setReadOnly(true);

        verticalLayout_5->addWidget(toWordTextEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\330\252\331\201\331\202\331\212\330\267 \330\247\331\204\330\243\330\261\331\202\330\247\331\205 \331\210\330\247\331\204\331\205\330\250\330\247\331\204\330\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\263\330\247\330\250\331\202\330\251:", 0, QApplication::UnicodeUTF8));
        prefixLineEdit->setText(QApplication::translate("MainWindow", "\331\201\331\202\330\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\205\330\250\331\204\330\272: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\247\330\255\331\202\330\251", 0, QApplication::UnicodeUTF8));
        suffixLineEdit->setText(QApplication::translate("MainWindow", "\331\204\330\247 \330\272\331\212\330\261", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\271\331\205\331\204\330\251: ", 0, QApplication::UnicodeUTF8));
        currencyComboBox->clear();
        currencyComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\330\247\331\204\330\257\331\212\331\206\330\247\330\261 \330\247\331\204\330\254\330\262\330\247\330\246\330\261\331\212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\330\247\331\204\331\204\331\212\330\261\330\251 \330\247\331\204\330\263\331\210\330\261\331\212\330\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\330\247\331\204\330\257\330\261\331\207\331\205 \330\247\331\204\330\245\331\205\330\247\330\261\330\247\330\252\331\212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\330\247\331\204\330\261\331\212\330\247\331\204 \330\247\331\204\330\263\330\271\331\210\330\257\331\212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\330\247\331\204\330\257\331\212\331\206\330\247\330\261 \330\247\331\204\330\252\331\210\331\206\330\263\331\212", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\330\260\331\207\330\250 (\330\254\330\261\330\247\331\205)", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
