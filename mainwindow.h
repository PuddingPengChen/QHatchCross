 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QPainterPath * liner;
    QImage sourceImg;

    double Radians(double a);
    void drawFillLine();
    void convertAlongLine(double x0,double y0,double x1,double y1,double stepSize,double r2,double level);
};

#endif // MAINWINDOW_H
