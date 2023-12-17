#include "JGeometry.h"
#include <math.h>
#include <iostream>
#include <stdio.h>

double JGeometry::CalcDistance(const JPoint& PointA, const JPoint& PointB)
{
    JPoint temp = PointA - PointB;

    double distance = std::sqrt((temp.x * temp.x) + (temp.y * temp.y));
    
    return distance;
}

void JGeometry::PrintDistance()
{
    for (int i = 0; i < num_points; ++i)
    {
        if(i + 1  >= num_points)
            break;

        printf("point [%d] ~ point [%d] distance : %f \n", i, i + 1, CalcDistance(*point_array[i], *point_array[i + 1]));
    }
}

void JGeometry::PrintNumMeets()
{
    int cross = 0;

    for (int i = 0; i < num_points; ++i)
    {
        int next_i = i + 1;

        if(next_i >= num_points)
            break;

        int a = point_array[next_i]->x - point_array[i]->x;
        int b = point_array[i]->y - point_array[next_i]->y;
        int c = -(a * point_array[i]->x + b * point_array[next_i]->y);

        for (int j = 0; j < num_points - 1; ++j)
        {
            if(j == i) continue;

            int next_j = j + 1;

            if(next_j == next_i) continue;

            if((a * point_array[j]->x + b * point_array[j]->y + c) * 
            (a * point_array[next_j]->x + b * point_array[next_j]->y + c)
            <= 0) 
                ++cross;
        }
    }
    
    printf("cross point num : %d", cross);
}

void JGeometry::Execute()
{
    JGeometry* JGeo = new JGeometry();

    JGeo->AddPoint(JPoint(1,2));
    JGeo->AddPoint(JPoint(2,3));
    JGeo->AddPoint(JPoint(5,4));
    JGeo->AddPoint(JPoint(4,3));


    JGeo->PrintDistance();
    JGeo->PrintNumMeets();
}
