#ifndef CHART_HPP
#define CHART_HPP

#include <QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QLayout>

#include "datamanager.hpp"


class ChartOld
{
public:
    ChartOld();
    static QtCharts::QChartView *getChart(DataManager& dataManager, int begin, int end);

};

#endif // CHART_HPP
