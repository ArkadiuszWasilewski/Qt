/********************************************************************************
** Form generated from reading UI file 'mytabpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTABPAGE_H
#define UI_MYTABPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mytabpageClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QFrame *frame;

    void setupUi(QMainWindow *mytabpageClass)
    {
        if (mytabpageClass->objectName().isEmpty())
            mytabpageClass->setObjectName(QString::fromUtf8("mytabpageClass"));
        mytabpageClass->resize(744, 546);
        centralWidget = new QWidget(mytabpageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        mytabpageClass->setCentralWidget(centralWidget);

        retranslateUi(mytabpageClass);

        QMetaObject::connectSlotsByName(mytabpageClass);
    } // setupUi

    void retranslateUi(QMainWindow *mytabpageClass)
    {
        mytabpageClass->setWindowTitle(QCoreApplication::translate("mytabpageClass", "mytabpage", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mytabpageClass", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mytabpageClass", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("mytabpageClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mytabpageClass: public Ui_mytabpageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTABPAGE_H
