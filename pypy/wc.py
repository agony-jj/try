class Employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    def print_info(self):
        print(f"员工:{self.name},工号:{self.id}")
class FullTimeEmployee(Employee):
    def __init__(self,name,id,monthly_salary):
        super().__init__(name,id)
        self.monthly_salary=monthly_salary
    def calculate1(self):
        print("工资"+str(self.monthly_salary))
class PartTimeEmployee(Employee):
    def __init__(self,name,id,daily_salary,work_days):
        super().__init__(name,id)
        self.daily_salary=daily_salary
        self.work_days=work_days
    def calculate2(self):
        print("工资"+str(self.daily_salary*self.work_days))
TJJ = FullTimeEmployee("TJJ","54188",9000)
LHQ = PartTimeEmployee("LHQ","5943B",200,46)
TJJ.print_info()
print(TJJ.calculate1())
LHQ.print_info()
print(LHQ.calculate2())