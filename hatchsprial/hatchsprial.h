#ifndef HATCHSPRIAL_H
#define HATCHSPRIAL_H

#include <QObject>
#include <QPainterPath>
#include <QFileDialog>
#include <QDateTime>
#include <math.h>

#include <QPainter>
#include <QPen>
#include <QDebug>

class HatchSprial : public QObject
{
    Q_OBJECT
public:
    explicit HatchSprial(QObject *parent = 0);
    void drillHatchCross();
    QPainterPath* getPath(){return liner;}
    void setImg(QImage d);
private:
    QPainterPath * liner;
    QImage sourceImg;

    void convertPaperSpace();
    void convertAlongLine(double x0,double y0,double x1,double y1,double stepSize,double r2,double level);
    double Radians(double a);


signals:

public slots:

};

#endif // HATCHSPRIAL_H
