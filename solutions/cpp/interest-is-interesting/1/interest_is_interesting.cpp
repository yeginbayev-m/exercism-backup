// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    double rate = 0.0;
    if (balance < 0) {
        rate = 3.213;
    } else if (balance >= 0 && balance < 1000) {
        rate = 0.5;
    } else if (balance >= 1000 && balance < 5000) {
        rate = 1.621;
    } else if (balance >= 5000) {
        rate = 2.475;
    }
    return rate;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    double result = (balance * interest_rate(balance))/ 100;
    return result;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    double balance_update = balance + yearly_interest(balance);
    return balance_update;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {

    if (balance >= target_balance) {
        return 0;
    }

    int years = 0;
    double current_balance = balance;

    while (current_balance < target_balance) {
        current_balance = annual_balance_update(current_balance);
        years++;
    }

    return years;
}
