#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug> //

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Заполнение главного меню
    createActions();
    createMenus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createAction(QAction** action, const QString& actionTitle,
                    const QString& statusTitle, void (MainWindow::*funcSlot)())
{
   *action = new QAction(actionTitle, this);

   (*action)->setStatusTip(statusTitle);

   connect(*action, &QAction::triggered, this, funcSlot);
}

void MainWindow::createActions()
{
    // 'File'
    createAction(&openAction, tr("Open"),
        tr("Open a file"), &MainWindow::onOpen);
    createAction(&closeAction, tr("Close"),
        tr("Close a file"), &MainWindow::onClose);
    createAction(&saveAction, tr("Save"),
        tr("Save a file"), &MainWindow::onSave);
    createAction(&saveAsAction, tr("Save as"),
        tr("Save file as"), &MainWindow::onSaveAs);
    createAction(&printAction, tr("Print"),
        tr("Print a file"), &MainWindow::onPrint);
    createAction(&exitAction, tr("Exit"),
        tr("Exit application"), &MainWindow::onExit);

    // 'Edit'
    createAction(&copyTextFormatAction, tr("Copy text format"),
        tr("Copy text format"), &MainWindow::onCopyTextFormat);
    createAction(&applyTextFormatAction, tr("Apply text format"),
        tr("Apply text format"), &MainWindow::onApplyTextFormat);
    createAction(&alignTextRightAction, tr("Align text right"),
        tr("Align text right"), &MainWindow::onAlignTextRight);
    createAction(&alignTextLeftAction, tr("Align text left"),
        tr("Align text left"), &MainWindow::onAlignTextLeft);
    createAction(&switchFontAction, tr("Switch font"),
        tr("Switch font to other"), &MainWindow::onSwitchFont);

    // 'Settings'
    createAction(&changeLangAction, tr("Language"),
        tr("Change application language"), &MainWindow::onChangeLang);
    createAction(&changeKeyBindAction, tr("Key bindings"),
        tr("Edit key bindings settings"), &MainWindow::onChangeKeyBind);
    createAction(&changeStyleAction, tr("Change style"),
        tr("Change application style"), &MainWindow::onChangeStyle);

    // '?'
    createAction(&helpAction, tr("Help"),
        tr("Show application manual"), &MainWindow::onHelp);
    createAction(&aboutAction, tr("About"),
        tr("Short info about application"), &MainWindow::onAbout);
}

void MainWindow::createMenus()
{
    // 'File'
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openAction);
    fileMenu->addAction(closeAction);
    fileMenu->addSeparator();
    fileMenu->addAction(saveAction);
    fileMenu->addAction(saveAsAction);
    fileMenu->addSeparator();
    fileMenu->addAction(printAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    // 'Edit'
    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(copyTextFormatAction);
    editMenu->addAction(applyTextFormatAction);
    editMenu->addSeparator();
    editMenu->addAction(alignTextRightAction);
    editMenu->addAction(alignTextLeftAction);
    editMenu->addSeparator();
    editMenu->addAction(switchFontAction);

    // 'Settings'
    settingsMenu = menuBar()->addMenu((tr("&Settings")));
    settingsMenu->addAction(changeLangAction);
    settingsMenu->addSeparator();
    settingsMenu->addAction(changeKeyBindAction);
    settingsMenu->addSeparator();
    settingsMenu->addAction(changeStyleAction);

    // '?'
    questionMenu = menuBar()->addMenu("?");
    questionMenu->addAction(helpAction);
    questionMenu->addSeparator();
    questionMenu->addAction(aboutAction);
}

void MainWindow::onOpen()
{

}

void MainWindow::onClose()
{

}

void MainWindow::onSave()
{

}

void MainWindow::onSaveAs()
{

}

void MainWindow::onPrint()
{

}

void MainWindow::onExit()
{

}

void MainWindow::onCopyTextFormat()
{

}

void MainWindow::onApplyTextFormat()
{

}

void MainWindow::onAlignTextRight()
{

}

void MainWindow::onAlignTextLeft()
{

}

void MainWindow::onSwitchFont()
{

}

void MainWindow::onChangeLang()
{

}

void MainWindow::onChangeKeyBind()
{

}

void MainWindow::onChangeStyle()
{

}

void MainWindow::onHelp()
{

}

void MainWindow::onAbout()
{

}





