#ifndef SPRIAL_H
#define SPRIAL_H

#include <QObject>
#include <QPainterPath>
#include <math.h>
#include <QFileDialog>
#include <QPainter>
#include <QPen>
#include <QDebug>

class Sprial : public QObject
{
    Q_OBJECT
public:
    explicit Sprial(QObject *parent = 0);
    void setString(QString s);

private:
    QPainterPath * liner;
    QImage sourceImg;

    double Radians(double a);
    void drawFillLine();
    void convertAlongLine(double x0,double y0,double x1,double y1,double stepSize,double r2,double level);
signals:


public slots:

};

#endif // SPRIAL_H
