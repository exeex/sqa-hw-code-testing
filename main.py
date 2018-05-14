"""
Input:
Wages, Taxable interest, Unemployment Compensation, Marital status, IsDependent


Output:
Taxable Income = Adjusted Gross Income – Standard Deduction
"""


class PersonWage():
    def __init__(self, wages, taxable_interest, compensation, marital_status, is_dependent):
        self.wages = wages
        self.taxable_interest = taxable_interest
        self.compensation = compensation
        self.marital_status = marital_status
        self.is_dependent = is_dependent


### 1
def get_input():
    d = PersonWage(wages=100000,
                   taxable_interest=1000,
                   compensation=2000,
                   marital_status=True,
                   is_dependent=False
                   )

    return d


### 2
def get_adjusted_gross_income(d: PersonWage):
    return d.wages + d.taxable_interest + d.compensation


### 4
def get_min_standard_deduction(d: PersonWage):
    if 850 > d.wages + 300:
        return 850
    else:
        return d.wages + 300


### 5 6 7

def get_max_standard_deduction(d: PersonWage):
    if d.marital_status == True:
        return 10700
    else:
        return 5350


### 8

def get_standard_deduction(min, max):
    if min > max:
        return max
    else:
        return min


### 9 10 11

def get_standard_deduction_dependent(d: PersonWage):
    return 17500 if d.marital_status else 8750


def main():
    d = get_input()
    i = get_adjusted_gross_income(d)

    ### 3
    if d.is_dependent:
        min_sd = get_min_standard_deduction(d)
        max_sd = get_max_standard_deduction(d)
        sd = get_standard_deduction(min_sd, max_sd)
        return i - sd   ### 12

    else:
        return i - get_standard_deduction_dependent(d) ### 12

if __name__ == "__main__":
    print(main())