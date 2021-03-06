#ifndef MONTYLYSENSORTYPE_HPP
#define MONTYLYSENSORTYPE_HPP

#include <vector>
#include <QString>

#include "dailysensortype.hpp"

class MontylySensorType
{
public:
    MontylySensorType();
    MontylySensorType(int const _month, std::vector<DailySensorType> const _monthlyData);
    QString getCommentStrings() const;
    std::vector<float> averageTemperature;
    bool existDay(std::size_t d) const;
    void generateTempreatureAverage();

    double s1_sum = 0;
    double s2_sum = 0;
    int const month;
    std::vector<DailySensorType> monthlyData;
    std::vector<QString> comment;
};

#endif // MONTYLYSENSORTYPE_HPP
