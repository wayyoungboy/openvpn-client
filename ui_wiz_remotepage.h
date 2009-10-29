/********************************************************************************
** Form generated from reading ui file 'wiz_remotepage.ui'
**
** Created: Thu 29. Oct 11:16:09 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIZ_REMOTEPAGE_H
#define UI_WIZ_REMOTEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_RemotePage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtRemoteIP;
    QLineEdit *txtRemotePort;
    QComboBox *cmbRemoteProtocol;
    QTextEdit *memHelp;
    QPushButton *cmdInfoIP;
    QPushButton *cmdInfoPort;
    QPushButton *cmdInfoProto;

    void setupUi(QWizardPage *RemotePage)
    {
        if (RemotePage->objectName().isEmpty())
            RemotePage->setObjectName(QString::fromUtf8("RemotePage"));
        RemotePage->resize(400, 300);
        label = new QLabel(RemotePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 301, 16));
        label_2 = new QLabel(RemotePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 51, 16));
        label_3 = new QLabel(RemotePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 95, 41, 16));
        label_4 = new QLabel(RemotePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 122, 46, 14));
        txtRemoteIP = new QLineEdit(RemotePage);
        txtRemoteIP->setObjectName(QString::fromUtf8("txtRemoteIP"));
        txtRemoteIP->setGeometry(QRect(80, 69, 171, 20));
        txtRemotePort = new QLineEdit(RemotePage);
        txtRemotePort->setObjectName(QString::fromUtf8("txtRemotePort"));
        txtRemotePort->setGeometry(QRect(80, 93, 71, 20));
        cmbRemoteProtocol = new QComboBox(RemotePage);
        cmbRemoteProtocol->setObjectName(QString::fromUtf8("cmbRemoteProtocol"));
        cmbRemoteProtocol->setGeometry(QRect(80, 118, 71, 22));
        memHelp = new QTextEdit(RemotePage);
        memHelp->setObjectName(QString::fromUtf8("memHelp"));
        memHelp->setGeometry(QRect(13, 220, 371, 71));
        memHelp->setContextMenuPolicy(Qt::NoContextMenu);
        memHelp->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 161, 80);"));
        memHelp->setFrameShape(QFrame::Box);
        memHelp->setFrameShadow(QFrame::Plain);
        memHelp->setReadOnly(true);
        cmdInfoIP = new QPushButton(RemotePage);
        cmdInfoIP->setObjectName(QString::fromUtf8("cmdInfoIP"));
        cmdInfoIP->setGeometry(QRect(253, 71, 16, 16));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cmdInfoIP->setIcon(icon);
        cmdInfoIP->setFlat(true);
        cmdInfoPort = new QPushButton(RemotePage);
        cmdInfoPort->setObjectName(QString::fromUtf8("cmdInfoPort"));
        cmdInfoPort->setGeometry(QRect(154, 95, 16, 16));
        cmdInfoPort->setIcon(icon);
        cmdInfoPort->setFlat(true);
        cmdInfoProto = new QPushButton(RemotePage);
        cmdInfoProto->setObjectName(QString::fromUtf8("cmdInfoProto"));
        cmdInfoProto->setGeometry(QRect(154, 122, 16, 16));
        cmdInfoProto->setIcon(icon);
        cmdInfoProto->setFlat(true);

        retranslateUi(RemotePage);

        QMetaObject::connectSlotsByName(RemotePage);
    } // setupUi

    void retranslateUi(QWizardPage *RemotePage)
    {
        RemotePage->setWindowTitle(QApplication::translate("RemotePage", "WizardPage", 0, QApplication::UnicodeUTF8));
        RemotePage->setTitle(QApplication::translate("RemotePage", "Remote Settings", 0, QApplication::UnicodeUTF8));
        RemotePage->setSubTitle(QApplication::translate("RemotePage", "Specify the remote settings of the connection.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RemotePage", "Please enter the IP and Port of the remote OpenVPN server.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RemotePage", "IP:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RemotePage", "Port:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RemotePage", "Protocol:", 0, QApplication::UnicodeUTF8));
        memHelp->setHtml(QApplication::translate("RemotePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Please click the info symbol of the item you want to see the help. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">For further informations please visit: http://www.openvpn.net</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cmdInfoIP->setText(QString());
        cmdInfoPort->setText(QString());
        cmdInfoProto->setText(QString());
        Q_UNUSED(RemotePage);
    } // retranslateUi

};

namespace Ui {
    class RemotePage: public Ui_RemotePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZ_REMOTEPAGE_H