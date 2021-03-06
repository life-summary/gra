#ifndef AMONTHCHART_HPP
#define AMONTHCHART_HPP

#include <QtCharts/QChart>
#include <QtCore/QTimer>
#include <QtCharts/QLineSeries>
#include <QtCharts/QBarSeries>

#include "montylysensortype.hpp"
#include "datamanager.hpp"

QT_CHARTS_BEGIN_NAMESPACE
class QSplineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class Chart : public QChart
{
    Q_OBJECT
public:
    Chart();
    void setMonth(MontylySensorType data);
    void setTermMonth(const DataManager &dataManager, int const begin, int const length);
    void set3HoursInADay(DataManager &dataManager, int year, int month, int day);

private:
    QBarSeries *barSeries;
    QLineSeries *lineSeries;
};

#endif // AMONTHCHART_HPP
