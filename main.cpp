#include <iostream>
#define True 1
#define False 0

using namespace std;


typedef struct {

    int wages;
    int taxable_interest;
    int compensation;
    int marital_status;
    int is_dependent;

} PersonWage;


//// 1  : get a example input data
PersonWage *get_example_input() {

    auto w = new PersonWage;
    w->wages = 100000;
    w->taxable_interest = 1000;
    w->compensation = 2000;
    w->marital_status = True;
    w->is_dependent = False;

    return w;
}

/// 1 : get data from std input
PersonWage *get_input() {

    int wage, ti, comp, ms, dep;
    cin >> wage;
    cin >> ti;
    cin >> comp;
    cin >> ms;
    cin >> dep;


    auto w = new PersonWage;
    w->wages = wage;
    w->taxable_interest = ti;
    w->compensation = comp;
    w->marital_status = ms;
    w->is_dependent = dep;

    return w;
}

//// 2
int get_adjusted_gross_income(PersonWage *d) {

    return d->wages + d->taxable_interest + d->compensation;
}

//// 4
int get_min_standard_deduction(PersonWage *d) {
    if (850 > d->wages + 300) {
        return 850;
    } else {
        return d->wages + 300;
    }
}

//// 5 6 7
int get_max_standard_deduction(PersonWage *d) {
    if (d->marital_status == True) {
        return 10700;

    } else {
        return 5350;
    }
}

/// 8
int get_standard_deduction(int min, int max) {
    if (min > max) {
        return max;
    } else {
        return min;
    }
}


/// 9 10 11

int get_standard_deduction_dependent(PersonWage *d) {
    if (d->marital_status == True) {
        return 17500;
    } else {
        return 8750;
    }
}

/// 1
int get_answer(PersonWage *d) {

    /// 2
    auto i = get_adjusted_gross_income(d);

    /// 3
    if (d->is_dependent) {
        auto min_sd = get_min_standard_deduction(d);
        auto max_sd = get_max_standard_deduction(d);
        auto sd = get_standard_deduction(min_sd, max_sd);

        /// 12
        return i - sd;

    } else {

        /// 12
        return i - get_standard_deduction_dependent(d);
    }

}



/*
 * example :
 * echo "100000 1000 2000 1 0" | ./main
 * output : 85500
 *
 */


int main() {

    auto d = get_input();
    auto ans = get_answer(d);
    cout << ans << endl;


}
