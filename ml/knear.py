# Implement k-nearest neighbours classification using python

from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn.datasets import load_iris
import random
data_iris=load_iris()
label_target=data_iris.target_names
print()
print("sample data from iris")
print("*"*20)
for i in range(10):
    rn=random.randint(0,120)
    print(data_iris.data[rn],'===>',label_target[data_iris.target[rn]])
X=data_iris.data
y=data_iris.target
X_train,X_test,y_train,y_test=train_test_split(
    X,y,test_size=0.3,random_state=1)
print("training dataset length",len(X_train))
print("testing dataset length",len(X_test))
try:
    nn=int(input("enter number of neighbors : "))
    knn=KNeighborsClassifier(nn)
    knn.fit(X_train,y_train)
    print("the score is ",knn.score(X_test,y_test))
    test_data=input("enter test data ").split(',')
    for i in range(len(test_data)):
        test_data[i]=float(test_data[i])
    print()
    v=knn.predict([test_data])
    print("predicted op",label_target[v])
except:
    print("enter valid input")