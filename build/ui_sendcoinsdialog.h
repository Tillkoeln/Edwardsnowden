/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QStringLiteral("SendCoinsDialog"));
        SendCoinsDialog->resize(686, 217);
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 666, 165));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QStringLiteral("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(SendCoinsDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        clearButton = new QPushButton(SendCoinsDialog);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SendCoinsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(SendCoinsDialog);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(SendCoinsDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon2);
        sendButton->setDefault(true);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendCoinsDialog);

        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", 0));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("SendCoinsDialog", "Add &Recipient", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", 0));
        label->setText(QApplication::translate("SendCoinsDialog", "Balance:", 0));
        labelBalance->setText(QApplication::translate("SendCoinsDialog", "123.456 BTC", 0));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCoinsDialog", "Confirm the send action", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCoinsDialog", "S&end", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
