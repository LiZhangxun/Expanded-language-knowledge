/********************************************************************************
** Form generated from reading UI file 'piewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIEWIDGET_H
#define UI_PIEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <pie.h>

QT_BEGIN_NAMESPACE

class Ui_PieWidget
{
public:
    QVBoxLayout *verticalLayout;
    Pie *widget;

    void setupUi(QWidget *PieWidget)
    {
        if (PieWidget->objectName().isEmpty())
            PieWidget->setObjectName(QStringLiteral("PieWidget"));
        PieWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(PieWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new Pie(PieWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);


        retranslateUi(PieWidget);

        QMetaObject::connectSlotsByName(PieWidget);
    } // setupUi

    void retranslateUi(QWidget *PieWidget)
    {
        PieWidget->setWindowTitle(QApplication::translate("PieWidget", "PieWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PieWidget: public Ui_PieWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIEWIDGET_H
