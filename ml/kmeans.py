# Given the following data, which specify classifications for nine ombinationsof VAR1 and VAR2 predict a classification for a case where VAR1=0.906and VAR2=0.606, using the result of k-means clustering with 3 means (i.e., 3centroids)

from sklearn.cluster import KMeans
import numpy as np
X = np.array([[1.713,1.586], [0.180,1.786], [0.353,1.240],
[0.940,1.566], [1.486,0.759], [1.266,1.106],[1.540,0.419],[0.459,1.799],[0.773,0.186]])
y=np.array([0,1,1,0,1,0,1,1,1])
kmeans=KMeans(n_clusters=3,random_state=0).fit(X,y)
print("the input data is ")
print("VARS1 \t VARS2 \t CLASS")
i=0
for val in X:
    print(val[0],"\t",val[1],"\t",y[i])
    i+=1
print("="*20)
print("the test data to predict")
test_data=[]
VAR1=float(input("enter var1"))
VAR2=float(input("enter var2"))
test_data.append(VAR1)
test_data.append(VAR2)
print("="*20)
print("the predicted class is ",kmeans.predict([test_data]))
