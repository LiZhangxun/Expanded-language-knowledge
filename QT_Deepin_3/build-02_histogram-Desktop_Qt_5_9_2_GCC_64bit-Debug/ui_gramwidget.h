/********************************************************************************
** Form generated from reading UI file 'gramwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAMWIDGET_H
#define UI_GRAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <histogram.h>

QT_BEGIN_NAMESPACE

class Ui_GramWidget
{
public:
    QGridLayout *gridLayout;
    Histogram *widget;

    void setupUi(QWidget *GramWidget)
    {
        if (GramWidget->objectName().isEmpty())
            GramWidget->setObjectName(QStringLiteral("GramWidget"));
        GramWidget->resize(400, 300);
        gridLayout = new QGridLayout(GramWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new Histogram(GramWidget);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(GramWidget);

        QMetaObject::connectSlotsByName(GramWidget);
    } // setupUi

    void retranslateUi(QWidget *GramWidget)
    {
        GramWidget->setWindowTitle(QApplication::translate("GramWidget", "GramWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GramWidget: public Ui_GramWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAMWIDGET_H
