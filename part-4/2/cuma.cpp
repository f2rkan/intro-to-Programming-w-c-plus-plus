#include<iostream>
struct travel_time
{
    int hours;
    int mins;
};
const int mins_per_hr = 60;
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(void)
{
    using namespace std;
    travel_time day1 = {4, 12}; //4 hrs 12 mns
    travel_time day2 = {3, 45}; // 3 hrs 45 mns

    travel_time trip = sum(day1, day2);
    cout << "two-day time: ";
    
    show_time(trip);

    travel_time day3 = {6, 55}; //6 hrs 55 mns
    cout << "three-day time: ";
    show_time(sum(trip, day3));

    cout << "Done.\n";
    return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % mins_per_hr;
    total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / mins_per_hr;

    return total;
}
void show_time(travel_time t)
{
    using namespace std;
    cout << "hours: " << t.hours;
    cout << ", mins: " << t.mins << endl;
}