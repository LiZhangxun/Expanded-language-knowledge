/********************************************************************************
** Form generated from reading UI file 'photoplaysecene.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOPLAYSECENE_H
#define UI_PHOTOPLAYSECENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhotoPlaySecene
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *photolabel;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *start;
    QSpacerItem *horizontalSpacer;
    QPushButton *next;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *last;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *heart;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PhotoPlaySecene)
    {
        if (PhotoPlaySecene->objectName().isEmpty())
            PhotoPlaySecene->setObjectName(QStringLiteral("PhotoPlaySecene"));
        PhotoPlaySecene->resize(1200, 620);
        PhotoPlaySecene->setMinimumSize(QSize(1200, 620));
        PhotoPlaySecene->setMaximumSize(QSize(1200, 620));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/pig_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        PhotoPlaySecene->setWindowIcon(icon);
        actionExit = new QAction(PhotoPlaySecene);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/aixin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        centralwidget = new QWidget(PhotoPlaySecene);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(280, 10, 691, 571));
        photolabel = new QLabel(widget);
        photolabel->setObjectName(QStringLiteral("photolabel"));
        photolabel->setGeometry(QRect(70, 10, 581, 471));
        photolabel->setFocusPolicy(Qt::NoFocus);
        photolabel->setFrameShape(QFrame::WinPanel);
        photolabel->setFrameShadow(QFrame::Raised);
        photolabel->setTextFormat(Qt::AutoText);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(22, 490, 651, 50));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        start = new QPushButton(widget_2);
        start->setObjectName(QStringLiteral("start"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/cjml.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon2);

        horizontalLayout->addWidget(start);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        next = new QPushButton(widget_2);
        next->setObjectName(QStringLiteral("next"));
        next->setIcon(icon1);

        horizontalLayout->addWidget(next);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        last = new QPushButton(widget_2);
        last->setObjectName(QStringLiteral("last"));
        last->setIcon(icon1);

        horizontalLayout->addWidget(last);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        heart = new QPushButton(widget_2);
        heart->setObjectName(QStringLiteral("heart"));
        heart->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/pig_head2.png"), QSize(), QIcon::Normal, QIcon::Off);
        heart->setIcon(icon3);

        horizontalLayout->addWidget(heart);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        PhotoPlaySecene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhotoPlaySecene);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        PhotoPlaySecene->setMenuBar(menubar);
        statusbar = new QStatusBar(PhotoPlaySecene);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PhotoPlaySecene->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionExit);
        menu->addSeparator();

        retranslateUi(PhotoPlaySecene);

        QMetaObject::connectSlotsByName(PhotoPlaySecene);
    } // setupUi

    void retranslateUi(QMainWindow *PhotoPlaySecene)
    {
        PhotoPlaySecene->setWindowTitle(QApplication::translate("PhotoPlaySecene", "\347\214\252\347\214\252\347\232\204\347\247\201\344\272\272\345\260\217\347\252\235", Q_NULLPTR));
        actionExit->setText(QApplication::translate("PhotoPlaySecene", "\351\200\200\345\207\272", Q_NULLPTR));
        photolabel->setText(QString());
        start->setText(QApplication::translate("PhotoPlaySecene", "\345\274\200\345\247\213", Q_NULLPTR));
        next->setText(QApplication::translate("PhotoPlaySecene", "\344\270\213\344\270\200\344\270\252", Q_NULLPTR));
        last->setText(QApplication::translate("PhotoPlaySecene", "\344\270\212\344\270\200\344\270\252", Q_NULLPTR));
        heart->setText(QApplication::translate("PhotoPlaySecene", "\350\241\250\347\231\275", Q_NULLPTR));
        menu->setTitle(QApplication::translate("PhotoPlaySecene", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PhotoPlaySecene: public Ui_PhotoPlaySecene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOPLAYSECENE_H
