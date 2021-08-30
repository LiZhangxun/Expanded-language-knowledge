/********************************************************************************
** Form generated from reading UI file 'carmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARMANAGER_H
#define UI_CARMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <histogram.h>
#include <pie.h>

QT_BEGIN_NAMESPACE

class Ui_CarManager
{
public:
    QAction *actionCar;
    QAction *actionSale;
    QAction *actionPassword;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QStackedWidget *stackedWidget;
    QWidget *manager;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *factory;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *brand;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *price;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *number;
    QLabel *label_6;
    QLabel *last_num;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *sum;
    QLabel *label_9;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ok;
    QPushButton *cancle;
    QSpacerItem *horizontalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableView;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *add;
    QPushButton *del;
    QPushButton *submit;
    QPushButton *revert;
    QListWidget *listWidget;
    QWidget *tongji;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *changjia;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QComboBox *pinpai;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    Histogram *wg_histgram;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    Pie *wg_pie;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *CarManager)
    {
        if (CarManager->objectName().isEmpty())
            CarManager->setObjectName(QStringLiteral("CarManager"));
        CarManager->resize(576, 371);
        actionCar = new QAction(CarManager);
        actionCar->setObjectName(QStringLiteral("actionCar"));
        actionSale = new QAction(CarManager);
        actionSale->setObjectName(QStringLiteral("actionSale"));
        actionPassword = new QAction(CarManager);
        actionPassword->setObjectName(QStringLiteral("actionPassword"));
        centralWidget = new QWidget(CarManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));

        verticalLayout_2->addWidget(title);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        manager = new QWidget();
        manager->setObjectName(QStringLiteral("manager"));
        verticalLayout_3 = new QVBoxLayout(manager);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(manager);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 272, 240));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        factory = new QComboBox(widget);
        factory->setObjectName(QStringLiteral("factory"));

        horizontalLayout->addWidget(factory);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(page);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        brand = new QComboBox(widget_2);
        brand->setObjectName(QStringLiteral("brand"));

        horizontalLayout_2->addWidget(brand);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(page);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        price = new QLineEdit(widget_3);
        price->setObjectName(QStringLiteral("price"));

        horizontalLayout_3->addWidget(price);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(page);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        number = new QSpinBox(widget_4);
        number->setObjectName(QStringLiteral("number"));

        horizontalLayout_4->addWidget(number);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        last_num = new QLabel(widget_4);
        last_num->setObjectName(QStringLiteral("last_num"));

        horizontalLayout_4->addWidget(last_num);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(page);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        sum = new QLineEdit(widget_5);
        sum->setObjectName(QStringLiteral("sum"));

        horizontalLayout_5->addWidget(sum);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(page);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        ok = new QPushButton(widget_6);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout_6->addWidget(ok);

        cancle = new QPushButton(widget_6);
        cancle->setObjectName(QStringLiteral("cancle"));

        horizontalLayout_6->addWidget(cancle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_6);

        toolBox->addItem(page, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 272, 240));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_4->addWidget(tableView);

        widget_7 = new QWidget(page_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        add = new QPushButton(widget_7);
        add->setObjectName(QStringLiteral("add"));
        add->setMinimumSize(QSize(45, 0));
        add->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_7->addWidget(add);

        del = new QPushButton(widget_7);
        del->setObjectName(QStringLiteral("del"));
        del->setMinimumSize(QSize(45, 0));
        del->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_7->addWidget(del);

        submit = new QPushButton(widget_7);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setMinimumSize(QSize(45, 0));
        submit->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_7->addWidget(submit);

        revert = new QPushButton(widget_7);
        revert->setObjectName(QStringLiteral("revert"));
        revert->setMinimumSize(QSize(45, 0));
        revert->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_7->addWidget(revert);


        verticalLayout_4->addWidget(widget_7);

        toolBox->addItem(page_2, QString::fromUtf8("\346\226\260\350\275\246\345\205\245\345\272\223"));
        splitter->addWidget(toolBox);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        splitter->addWidget(listWidget);

        verticalLayout_3->addWidget(splitter);

        stackedWidget->addWidget(manager);
        tongji = new QWidget();
        tongji->setObjectName(QStringLiteral("tongji"));
        verticalLayout_7 = new QVBoxLayout(tongji);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_8 = new QWidget(tongji);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        changjia = new QComboBox(widget_8);
        changjia->setObjectName(QStringLiteral("changjia"));

        horizontalLayout_8->addWidget(changjia);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        pinpai = new QComboBox(widget_8);
        pinpai->setObjectName(QStringLiteral("pinpai"));

        horizontalLayout_8->addWidget(pinpai);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_7->addWidget(widget_8);

        widget_9 = new QWidget(tongji);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        frame_10 = new QFrame(widget_9);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(frame_10);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(frame_10);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(12);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_11);

        wg_histgram = new Histogram(frame_10);
        wg_histgram->setObjectName(QStringLiteral("wg_histgram"));

        verticalLayout_5->addWidget(wg_histgram);


        horizontalLayout_9->addWidget(frame_10);

        frame_11 = new QFrame(widget_9);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        verticalLayout_6 = new QVBoxLayout(frame_11);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_12 = new QLabel(frame_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);

        wg_pie = new Pie(frame_11);
        wg_pie->setObjectName(QStringLiteral("wg_pie"));

        verticalLayout_6->addWidget(wg_pie);


        horizontalLayout_9->addWidget(frame_11);


        verticalLayout_7->addWidget(widget_9);

        stackedWidget->addWidget(tongji);

        verticalLayout_2->addWidget(stackedWidget);

        CarManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CarManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 576, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        CarManager->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionCar);
        menu->addAction(actionSale);
        menu_2->addAction(actionPassword);

        retranslateUi(CarManager);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CarManager);
    } // setupUi

    void retranslateUi(QMainWindow *CarManager)
    {
        CarManager->setWindowTitle(QApplication::translate("CarManager", "CarManager", Q_NULLPTR));
        actionCar->setText(QApplication::translate("CarManager", "\350\275\246\350\276\206\347\256\241\347\220\206", Q_NULLPTR));
        actionSale->setText(QApplication::translate("CarManager", "\351\224\200\345\224\256\347\273\237\350\256\241", Q_NULLPTR));
        actionPassword->setText(QApplication::translate("CarManager", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        title->setText(QApplication::translate("CarManager", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("CarManager", "\345\216\202\345\256\266:", Q_NULLPTR));
        label_2->setText(QApplication::translate("CarManager", "\345\223\201\347\211\214:", Q_NULLPTR));
        label_3->setText(QApplication::translate("CarManager", "\346\212\245\344\273\267:", Q_NULLPTR));
        label_4->setText(QApplication::translate("CarManager", "\344\270\207", Q_NULLPTR));
        label_5->setText(QApplication::translate("CarManager", "\346\225\260\351\207\217:", Q_NULLPTR));
        label_6->setText(QApplication::translate("CarManager", "\345\211\251\344\275\231\346\225\260\351\207\217:", Q_NULLPTR));
        last_num->setText(QApplication::translate("CarManager", "11111", Q_NULLPTR));
        label_8->setText(QApplication::translate("CarManager", "\351\207\221\351\242\235:", Q_NULLPTR));
        label_9->setText(QApplication::translate("CarManager", "\344\270\207", Q_NULLPTR));
        ok->setText(QApplication::translate("CarManager", "\347\241\256\345\256\232", Q_NULLPTR));
        cancle->setText(QApplication::translate("CarManager", "\345\217\226\346\266\210", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("CarManager", "\345\207\272\345\224\256\350\275\246\350\276\206", Q_NULLPTR));
        add->setText(QApplication::translate("CarManager", "\346\267\273\345\212\240", Q_NULLPTR));
        del->setText(QApplication::translate("CarManager", "\345\210\240\351\231\244", Q_NULLPTR));
        submit->setText(QApplication::translate("CarManager", "\346\217\220\344\272\244", Q_NULLPTR));
        revert->setText(QApplication::translate("CarManager", "\346\222\244\351\224\200", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("CarManager", "\346\226\260\350\275\246\345\205\245\345\272\223", Q_NULLPTR));
        label_7->setText(QApplication::translate("CarManager", "\345\216\202\345\256\266\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("CarManager", "\345\223\201\347\211\214\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("CarManager", "\345\216\202\345\256\266\345\223\201\347\211\214", Q_NULLPTR));
        label_12->setText(QApplication::translate("CarManager", "\345\223\201\347\211\214\350\275\246\350\276\206", Q_NULLPTR));
        menu->setTitle(QApplication::translate("CarManager", "\351\224\200\345\224\256\347\256\241\347\220\206", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("CarManager", "\347\263\273\347\273\237\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CarManager: public Ui_CarManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARMANAGER_H
