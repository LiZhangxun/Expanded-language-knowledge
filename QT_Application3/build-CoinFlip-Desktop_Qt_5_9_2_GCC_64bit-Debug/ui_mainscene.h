/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *actionQuit;
    QAction *action_help;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QStringLiteral("MainScene"));
        MainScene->resize(1018, 722);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/Coin0001.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainScene->setWindowIcon(icon);
        actionQuit = new QAction(MainScene);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        action_help = new QAction(MainScene);
        action_help->setObjectName(QStringLiteral("action_help"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("res/pig.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_help->setIcon(icon1);
        centralWidget = new QWidget(MainScene);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(898, 634, 111, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/pig.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(200, 200));
        pushButton->setAutoDefault(false);
        MainScene->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainScene);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1018, 28));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainScene->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_help);
        menu->addAction(actionQuit);
        menu->addSeparator();

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QApplication::translate("MainScene", "MainScene", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainScene", "\351\200\200\345\207\272", Q_NULLPTR));
        action_help->setText(QApplication::translate("MainScene", "\346\214\211\344\273\226\345\221\274\345\217\253\345\260\217\347\232\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainScene", "\345\221\274\345\217\253\345\260\217\347\232\256", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainScene", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
