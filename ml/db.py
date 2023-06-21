'''Aim:  Extract the data from database using python

=================================
Explanation:
=================================

===> First You need to Create a Table (students) in Mysql Database (SampleDB)

---> Open Command prompt and then execute the following command to enter into MySQL prompt.

--> mysql -u root -p


And then, you need to execute the following commands at MySQL prompt to create table in the database.

--> create database SampleDB;

--> use SampleDB;

--> CREATE TABLE students (sid VARCHAR(10),sname VARCHAR(10),age int);

--> INSERT INTO students VALUES('s521','Jhon Bob',23);
--> INSERT INTO students VALUES('s522','Dilly',22);
--> INSERT INTO students VALUES('s523','Kenney',25);
--> INSERT INTO students VALUES('s524','Herny',26);


===> Next,Open Command propmt and then execute the following command to install mysql.connector package to connect with mysql database through python.

--> pip install mysql.connector (Windows)
--> sudo apt-get install mysql.connector (linux)

===============================
Source Code :
===============================. '''

import mysql.connector  
# Create the connection object
myconn = mysql.connector.connect(host = "localhost", user = "root",passwd = "",database="SampleDB")
# Creating the cursor object
cur = myconn.cursor()
# Executing the query
cur.execute("select * from students")
# Fetching the rows from the cursor object
result = cur.fetchall()
print("Student Details are :")
# Printing the result
for x in result:
	print(x);
# Commit the transaction
myconn.commit()
# Close the connection
myconn.close()