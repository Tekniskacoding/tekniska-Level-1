basic = float(input("enter salary"))
grade = input("input grade")

hra = float(basic*20/100)
da = float(basic*50/100)

if grade == "A":
    allow = 1700
elif grade == "B":
    allow = 1500
else:
    allow = 1300

pf = float(basic*11/100)

totalSalary = basic + hra + da + allow - pf

print(float(totalSalary))