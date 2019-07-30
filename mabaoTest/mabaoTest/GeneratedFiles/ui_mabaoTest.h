/********************************************************************************
** Form generated from reading UI file 'mabaoTest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MABAOTEST_H
#define UI_MABAOTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mabaoTestClass
{
public:
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsort;
    QAction *actioncut;
    QAction *action3;
    QAction *actioncreate;
    QWidget *centralWidget;
    QTextBrowser *m_EndString;
    QLabel *label;
    QLabel *label_OpenFIleName;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mabaoTestClass)
    {
        if (mabaoTestClass->objectName().isEmpty())
            mabaoTestClass->setObjectName(QStringLiteral("mabaoTestClass"));
        mabaoTestClass->resize(928, 642);
        actionopen = new QAction(mabaoTestClass);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave = new QAction(mabaoTestClass);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionsort = new QAction(mabaoTestClass);
        actionsort->setObjectName(QStringLiteral("actionsort"));
        actioncut = new QAction(mabaoTestClass);
        actioncut->setObjectName(QStringLiteral("actioncut"));
        action3 = new QAction(mabaoTestClass);
        action3->setObjectName(QStringLiteral("action3"));
        actioncreate = new QAction(mabaoTestClass);
        actioncreate->setObjectName(QStringLiteral("actioncreate"));
        centralWidget = new QWidget(mabaoTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_EndString = new QTextBrowser(centralWidget);
        m_EndString->setObjectName(QStringLiteral("m_EndString"));
        m_EndString->setGeometry(QRect(10, 10, 901, 511));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 540, 141, 18));
        label_OpenFIleName = new QLabel(centralWidget);
        label_OpenFIleName->setObjectName(QStringLiteral("label_OpenFIleName"));
        label_OpenFIleName->setGeometry(QRect(130, 540, 781, 18));
        mabaoTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mabaoTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 928, 30));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        mabaoTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mabaoTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mabaoTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mabaoTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mabaoTestClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actionsave);
        menu_2->addAction(actionsort);
        menu_2->addAction(actioncut);
        menu_3->addAction(actioncreate);

        retranslateUi(mabaoTestClass);

        QMetaObject::connectSlotsByName(mabaoTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *mabaoTestClass)
    {
        mabaoTestClass->setWindowTitle(QApplication::translate("mabaoTestClass", "mabaoTest", Q_NULLPTR));
        actionopen->setText(QApplication::translate("mabaoTestClass", "\346\211\223\345\274\200\347\240\201\345\214\205", Q_NULLPTR));
        actionsave->setText(QApplication::translate("mabaoTestClass", "\344\277\235\345\255\230\347\240\201\345\214\205", Q_NULLPTR));
        actionsort->setText(QApplication::translate("mabaoTestClass", "\346\216\222\345\272\217", Q_NULLPTR));
        actioncut->setText(QApplication::translate("mabaoTestClass", "\347\240\201\345\214\205\345\210\206\345\211\262", Q_NULLPTR));
        action3->setText(QApplication::translate("mabaoTestClass", "3", Q_NULLPTR));
        actioncreate->setText(QApplication::translate("mabaoTestClass", "\347\224\237\346\210\220\347\240\201\345\214\205", Q_NULLPTR));
        m_EndString->setPlaceholderText(QApplication::translate("mabaoTestClass", "\346\230\276\347\244\272\347\273\223\346\236\234", Q_NULLPTR));
        label->setText(QApplication::translate("mabaoTestClass", "\346\226\207\344\273\266\346\211\223\345\274\200\347\233\256\345\275\225\357\274\232", Q_NULLPTR));
        label_OpenFIleName->setText(QString());
        menu->setTitle(QApplication::translate("mabaoTestClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("mabaoTestClass", "\345\212\237\350\203\275", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("mabaoTestClass", "\347\240\201\345\214\205\347\224\237\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mabaoTestClass: public Ui_mabaoTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MABAOTEST_H
