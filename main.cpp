#include <iostream>
#include <iomanip>

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

typedef struct {

    int adjusted_gross_income = -1;     //Adjusted Gross Income
    int min_sd = -1;                    //Minimum Standard Deduction,
    int max_sd = -1;                    //Maximum Standard Deduction
    int sd = -1;                        //Standard Deduction
    int taxable_income = -1;            //Taxable Income

} Output;


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

    if (wage >= 0)w->wages = wage;
    else return NULL;

    if (wage > 100000) cout << "Warning: wage is over 100,000." << endl;

    if (ti >= 0)w->taxable_interest = ti;
    else {
        cout << "Invalid taxable interest." << endl;
        return NULL;
    }

    if (comp >= 0 && comp < 1000)w->compensation = comp;
    else {
        cout<< "Invalid compensation."<< endl;
        return NULL;
    }

    if (ms == 0 || ms == 1)w->marital_status = ms;
    else {
        cout<< "Invalid marital_status."<< endl;
        return NULL;
    }
    if (dep == 0 || dep == 1)w->is_dependent = dep;
    else {
        cout<< "Invalid dependent_status."<< endl;
        return NULL;
    }

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
Output *get_answer(PersonWage *d) {

    /*
    * adjusted_gross_income : Adjusted Gross Income,
    * min_sd : Minimum Standard Deduction,
    * max_sd : Maximum Standard Deduction,
    * sd : Standard Deduction,
    * taxable_income : Taxable Income.
    */

    auto o = new Output{};

    /// 2 Calculate adjusted_gross_income
    o->adjusted_gross_income = get_adjusted_gross_income(d);

    /// 3 Calculate sd
    if (d->is_dependent) {
        o->min_sd = get_min_standard_deduction(d);
        o->max_sd = get_max_standard_deduction(d);
        o->sd = get_standard_deduction(o->min_sd, o->max_sd);
    } else {
        o->sd = get_standard_deduction_dependent(d);
    }


    /// 12 Calculate taxable_income
    o->taxable_income = o->adjusted_gross_income - o->sd;
    return o;


}


/*
 * example :
 * echo "100001 1000 900 1 0" | ./main
 * output : 85500
 *
 */


int main() {

    auto d = get_input();

    if(d == NULL)
        return 1;

    auto o = get_answer(d);

//    auto o = new Output;

    cout << o->adjusted_gross_income << std::setw(10)
         << o->max_sd << std::setw(10)
         << o->min_sd << std::setw(10)
         << o->sd << std::setw(10)
         << o->taxable_income << std::setw(10)
         << endl;


}
