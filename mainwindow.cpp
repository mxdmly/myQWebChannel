#include "mainwindow.h"
#include "ui_mainwindow.h"

WebClass::WebClass(){

}
WebClass::~WebClass(){

}

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    webView = new QWebEngineView(parent);
    webView->load(QUrl::fromLocalFile("D:\\work\\cppProject\\sadasddqwsdcqweasdcs\\html\\index.html"));
    ui->mainLayout->addWidget(webView);
    webChannel = new QWebChannel;
    WebClass *webobj = new WebClass();
    webChannel->registerObject("webobj", webobj);
    webView->page()->setWebChannel(webChannel);
}

MainWindow::~MainWindow()
{
    delete ui;
}
