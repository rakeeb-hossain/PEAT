/********************************************************************************
** Form generated from reading UI file 'mainframe.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFRAME_H
#define UI_MAINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainFrame
{
public:
    QAction *actionOpenFile;
    QPushButton *folderButton;
    QFrame *line;
    QFrame *line_2;
    QPushButton *rewindButton;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *forwardButton;
    QSlider *slider;
    QLabel *label;
    QLabel *timeLabel;
    QPushButton *reportButton;
    QLabel *label_2;
    QFrame *frame;
    QVideoWidget *videoWidget;
    QLabel *label_4;
    QCustomPlot *customPlot;
    QFrame *frame_2;
    QFrame *line_3;
    QScrollBar *horizontalScrollBar;
    QLabel *label_3;
    QWidget *widget;
    QLabel *label_5;
    QPushButton *backWarning;
    QPushButton *forwardWarning;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *restartButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QSlider *horizontalSlider;
    QSlider *slider_2;

    void setupUi(QDialog *mainFrame)
    {
        if (mainFrame->objectName().isEmpty())
            mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->resize(870, 591);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy);
        mainFrame->setAutoFillBackground(false);
        mainFrame->setSizeGripEnabled(false);
        mainFrame->setModal(false);
        actionOpenFile = new QAction(mainFrame);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Res/EjectUp.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon);
        folderButton = new QPushButton(mainFrame);
        folderButton->setObjectName(QStringLiteral("folderButton"));
        folderButton->setGeometry(QRect(240, 480, 41, 41));
        folderButton->setFocusPolicy(Qt::NoFocus);
        folderButton->setStyleSheet(QLatin1String("#folderButton\n"
"{\n"
"background-image: url(:/images/Res/EjectUp.bmp);\n"
"border-image: url(:/images/Res/EjectUp.bmp);\n"
"}\n"
"#folderButton:hover \n"
"{\n"
"border-image: url(:/images/Res/EjectDownHilite.png);\n"
"}\n"
"#folderButton:pressed \n"
"{\n"
"border-image: url(:/images/Res/EjectPressed.png);\n"
"}"));
        line = new QFrame(mainFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 420, 901, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(mainFrame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(260, 40, 20, 381));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        rewindButton = new QPushButton(mainFrame);
        rewindButton->setObjectName(QStringLiteral("rewindButton"));
        rewindButton->setEnabled(false);
        rewindButton->setGeometry(QRect(20, 530, 41, 41));
        rewindButton->setFocusPolicy(Qt::NoFocus);
        rewindButton->setStyleSheet(QLatin1String("#rewindButton\n"
"{\n"
"background-image: url(:/images/Res/FastBackDisabled.png);\n"
"border-image: url(:/images/Res/FastBackDisabled.png);\n"
"}\n"
""));
        playButton = new QPushButton(mainFrame);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setEnabled(false);
        playButton->setGeometry(QRect(70, 530, 41, 41));
        playButton->setFocusPolicy(Qt::NoFocus);
        playButton->setStyleSheet(QLatin1String("background-image: url(:/images/Res/PlayDisabled.png);\n"
"border-image: url(:/images/Res/PlayDisabled.png);"));
        pauseButton = new QPushButton(mainFrame);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setEnabled(false);
        pauseButton->setGeometry(QRect(120, 530, 41, 41));
        pauseButton->setFocusPolicy(Qt::NoFocus);
        pauseButton->setStyleSheet(QLatin1String("background-image: url(:/images/Res/StopDisabled.png);\n"
"border-image: url(:/images/Res/StopDisabled.png);"));
        forwardButton = new QPushButton(mainFrame);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setEnabled(false);
        forwardButton->setGeometry(QRect(170, 530, 41, 41));
        forwardButton->setFocusPolicy(Qt::NoFocus);
        forwardButton->setStyleSheet(QLatin1String("background-image: url(:/images/Res/FFwdDisabled.png);\n"
"border-image: url(:/images/Res/FFwdDisabled.png);"));
        slider = new QSlider(mainFrame);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(80, 450, 771, 22));
        slider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 10px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0.0 #B1B1B1, stop: 1.0 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 8px;\n"
"    margin: -6px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
""));
        slider->setMaximum(99);
        slider->setSingleStep(1);
        slider->setPageStep(1);
        slider->setSliderPosition(0);
        slider->setOrientation(Qt::Horizontal);
        slider->setTickPosition(QSlider::NoTicks);
        label = new QLabel(mainFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 480, 321, 33));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:rgb(172, 196, 214);\n"
"border-style:solid;\n"
"border-color:black;\n"
"border-width:1px;\n"
"-webkit-border-radius: 5px;\n"
"-moz-border-radius: 5px;\n"
"border-radius: 10px;"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        timeLabel = new QLabel(mainFrame);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setGeometry(QRect(70, 490, 131, 31));
        QFont font1;
        font1.setPointSize(11);
        timeLabel->setFont(font1);
        timeLabel->setToolTipDuration(-1);
        timeLabel->setStyleSheet(QLatin1String("background-color:rgb(214, 214, 214);\n"
"border-style:solid;\n"
"border-color:black;\n"
"border-width:1px;\n"
"-webkit-border-radius: 5px;\n"
"-moz-border-radius: 5px;\n"
"border-radius: 10px;"));
        timeLabel->setAlignment(Qt::AlignCenter);
        reportButton = new QPushButton(mainFrame);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        reportButton->setEnabled(false);
        reportButton->setGeometry(QRect(240, 530, 41, 41));
        reportButton->setFocusPolicy(Qt::NoFocus);
        reportButton->setStyleSheet(QLatin1String("background-image: url(:/images/Res/AnalyzeDisabled.png);\n"
"border-image: url(:/images/Res/AnalyzeDisabled.png);"));
        label_2 = new QLabel(mainFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 251, 111));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Res/TraceLogoSmall.bmp")));
        label_2->setScaledContents(true);
        frame = new QFrame(mainFrame);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 270, 251, 151));
        frame->setStyleSheet(QLatin1String("border-color: black;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"background: transparent;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        videoWidget = new QVideoWidget(frame);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        videoWidget->setGeometry(QRect(0, 0, 251, 151));
        videoWidget->setFocusPolicy(Qt::StrongFocus);
        videoWidget->setAutoFillBackground(false);
        videoWidget->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(videoWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 251, 151));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);
        customPlot = new QCustomPlot(mainFrame);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(280, 50, 581, 351));
        customPlot->setStyleSheet(QLatin1String("border-color:black;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
""));
        frame_2 = new QFrame(customPlot);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 581, 351));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QLatin1String("-webkit-border-radius: 5px;\n"
"-moz-border-radius: 5px;\n"
"border-radius: 6px;\n"
"border-color: black;\n"
"border-width: 3px;\n"
"border-style: solid;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(290, 0, 2, 350));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        horizontalScrollBar = new QScrollBar(mainFrame);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setEnabled(false);
        horizontalScrollBar->setGeometry(QRect(280, 400, 581, 20));
        horizontalScrollBar->setPageStep(1);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(mainFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 170, 251, 91));
        label_3->setAutoFillBackground(true);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/Res/GraphLegend[OLD].bmp")));
        label_3->setScaledContents(true);
        widget = new QWidget(mainFrame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 911, 21));
        widget->setStyleSheet(QStringLiteral("background-color:white;"));
        label_5 = new QLabel(mainFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(810, 560, 61, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Res/NiddrLogo.bmp")));
        label_5->setScaledContents(true);
        backWarning = new QPushButton(mainFrame);
        backWarning->setObjectName(QStringLiteral("backWarning"));
        backWarning->setEnabled(false);
        backWarning->setGeometry(QRect(650, 480, 41, 41));
        backWarning->setFocusPolicy(Qt::NoFocus);
        backWarning->setStyleSheet(QLatin1String("#backWarning\n"
"{\n"
"background-image: url(:/images/Res/PrevWarningDisabled.png);\n"
"border-image: url(:/images/Res/PrevWarningDisabled.png);\n"
"}\n"
""));
        forwardWarning = new QPushButton(mainFrame);
        forwardWarning->setObjectName(QStringLiteral("forwardWarning"));
        forwardWarning->setEnabled(false);
        forwardWarning->setGeometry(QRect(790, 480, 41, 41));
        forwardWarning->setFocusPolicy(Qt::NoFocus);
        forwardWarning->setStyleSheet(QLatin1String("#forwardWarning\n"
"{\n"
"background-image: url(:/images/Res/NextWarningDisabled.png);\n"
"border-image: url(:/images/Res/NextWarningDisabled.png);\n"
"}"));
        label_6 = new QLabel(mainFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(690, 480, 101, 33));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setWeight(50);
        label_6->setFont(font3);
        label_6->setStyleSheet(QLatin1String("border-color: red;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"background-color: pink;\n"
"-webkit-border-radius: 5px;\n"
"-moz-border-radius: 5px;\n"
"border-radius: 10px;\n"
""));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(mainFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(710, 520, 61, 21));
        QFont font4;
        font4.setPointSize(10);
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignCenter);
        restartButton = new QPushButton(mainFrame);
        restartButton->setObjectName(QStringLiteral("restartButton"));
        restartButton->setEnabled(false);
        restartButton->setGeometry(QRect(20, 440, 41, 41));
        restartButton->setFocusPolicy(Qt::NoFocus);
        restartButton->setStyleSheet(QLatin1String("background-image: url(:/images/Res/RewindDisabled.png);\n"
"border-image: url(:/images/Res/RewindDisabled.png);"));
        label_8 = new QLabel(mainFrame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);
        label_8->setGeometry(QRect(310, 530, 121, 20));
        label_8->setStyleSheet(QLatin1String("background-color:rgb(220, 220, 220);\n"
""));
        label_8->setFrameShape(QFrame::WinPanel);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(mainFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 530, 91, 20));
        label_9->setStyleSheet(QLatin1String("background-color:rgb(220, 220, 220);\n"
""));
        label_9->setFrameShape(QFrame::WinPanel);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(mainFrame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(520, 530, 111, 20));
        label_10->setMouseTracking(false);
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QLatin1String("background-color:rgb(220, 220, 220);\n"
""));
        label_10->setFrameShape(QFrame::WinPanel);
        label_10->setFrameShadow(QFrame::Sunken);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(mainFrame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(310, 550, 121, 20));
        label_11->setStyleSheet(QLatin1String("background-color:rgb(200, 200, 210);\n"
""));
        label_11->setFrameShape(QFrame::WinPanel);
        label_11->setFrameShadow(QFrame::Sunken);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(mainFrame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(430, 550, 91, 20));
        label_12->setStyleSheet(QLatin1String("background-color:rgb(200, 200, 210);\n"
""));
        label_12->setFrameShape(QFrame::WinPanel);
        label_12->setFrameShadow(QFrame::Sunken);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(mainFrame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(520, 550, 111, 20));
        label_13->setStyleSheet(QLatin1String("background-color:rgb(200, 200, 210);\n"
""));
        label_13->setFrameShape(QFrame::WinPanel);
        label_13->setFrameShadow(QFrame::Sunken);
        label_13->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(mainFrame);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(280, 430, 581, 22));
        horizontalSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 5px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0.0 #B1B1B1, stop: 1.0 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 8px;\n"
"    margin: -6px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
""));
        horizontalSlider->setMinimum(-50);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        slider_2 = new QSlider(mainFrame);
        slider_2->setObjectName(QStringLiteral("slider_2"));
        slider_2->setGeometry(QRect(80, 450, 771, 22));
        slider_2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 10px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0.0 #00B1B1B1, stop: 1.0 #00c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #00b4b4b4, stop:1 #008f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width:0px;\n"
"    margin: 0px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
""));
        slider_2->setMaximum(99);
        slider_2->setSingleStep(1);
        slider_2->setPageStep(1);
        slider_2->setSliderPosition(0);
        slider_2->setOrientation(Qt::Horizontal);
        slider_2->setTickPosition(QSlider::NoTicks);
        slider_2->raise();
        folderButton->raise();
        line->raise();
        line_2->raise();
        rewindButton->raise();
        playButton->raise();
        pauseButton->raise();
        forwardButton->raise();
        slider->raise();
        label->raise();
        timeLabel->raise();
        reportButton->raise();
        label_2->raise();
        frame->raise();
        customPlot->raise();
        horizontalScrollBar->raise();
        label_3->raise();
        widget->raise();
        label_5->raise();
        backWarning->raise();
        forwardWarning->raise();
        label_6->raise();
        label_7->raise();
        restartButton->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        horizontalSlider->raise();

        retranslateUi(mainFrame);

        QMetaObject::connectSlotsByName(mainFrame);
    } // setupUi

    void retranslateUi(QDialog *mainFrame)
    {
        mainFrame->setWindowTitle(QApplication::translate("mainFrame", "Dialog", nullptr));
        actionOpenFile->setText(QApplication::translate("mainFrame", "OpenFile", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpenFile->setToolTip(QApplication::translate("mainFrame", "Open a File", nullptr));
#endif // QT_NO_TOOLTIP
        folderButton->setText(QString());
        rewindButton->setText(QString());
        playButton->setText(QString());
        pauseButton->setText(QString());
        forwardButton->setText(QString());
        label->setText(QApplication::translate("mainFrame", "(No file open)", nullptr));
#ifndef QT_NO_TOOLTIP
        timeLabel->setToolTip(QApplication::translate("mainFrame", "Video duration", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        timeLabel->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        timeLabel->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        timeLabel->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        timeLabel->setText(QApplication::translate("mainFrame", "00:00:00:000", nullptr));
        reportButton->setText(QString());
        label_2->setText(QString());
        label_4->setText(QApplication::translate("mainFrame", "(No file open)", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
        backWarning->setText(QString());
        forwardWarning->setText(QString());
        label_6->setText(QApplication::translate("mainFrame", "0", nullptr));
        label_7->setText(QApplication::translate("mainFrame", "Warnings", nullptr));
        restartButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>Video Extension</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>Framerate</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_9->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>Duration (hh:mm:ss:ms)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>File Dimensions (length x width)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_11->setWhatsThis(QApplication::translate("mainFrame", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>Compression type</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_12->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("mainFrame", "<html><head/><body><p>Decompression Type</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainFrame: public Ui_mainFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
