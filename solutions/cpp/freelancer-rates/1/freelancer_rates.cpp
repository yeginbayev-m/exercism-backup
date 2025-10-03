// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return hourly_rate * 8;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return before_discount - ((before_discount * discount / 100));
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    double a = daily_rate(hourly_rate) * 22;
    int result = ceil(apply_discount(a, discount));
    return result;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    double daily = daily_rate(hourly_rate);
    double daily_with_discount = apply_discount(daily, discount);
    double days = budget / daily_with_discount;
    return floor(days);
}
