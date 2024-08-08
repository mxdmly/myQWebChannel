#ifndef MAINWINDOW_H
#include <QWebEngineView>
#include <QtWebChannel>
#include <QMessageBox>
#define MAINWINDOW_H

#include <QMainWindow>

class WebClass : public QObject
{
    Q_OBJECT
public:
    WebClass();
    ~WebClass();
public slots:
    void jscallme()
    {
        QMessageBox::information(NULL, "jscallme", "jscallme");
    }
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWebEngineView *webView = nullptr;
    QWebChannel *webChannel = nullptr;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
