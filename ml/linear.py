import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

dataFrame=pd.read_csv('Age_Income.csv')
age=dataFrame['Age']
income=dataFrame['Income']
mean_age=np.mean(age)
mean_income=np.mean(income)
num = np.size(age)
CD_ageincome=np.sum(income*age)- num*mean_income*mean_age

CD_ageage=np.sum(age*age)-num*mean_age*mean_age
b1=CD_ageincome/CD_ageage
b0=mean_income-b1*mean_age
print("Estimated Coefficients :")
print("b0 =", b0, "\nb1 =", b1)
plt.scatter(age,income,color='b',market='o')
response_Vec=b0+b1*age
plt.plot(age,response_Vec,color='r')
plt.xLabel('Age')
plt.YLabel('Income')
plt.show()