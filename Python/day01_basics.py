name="Shreya"
age=19
course="artificial intelligence and data science"
print(name)
print (course)
print(age)

#even or odd
num= int (input())
if num%2==0:
    print("Its even")
else:
    print("Its odd")

#largest of 3
a=int (input())
b=int(input())
c=int(input())
if a>b:
    if a>c:
        print(f"{a} is largest") 
    else:
        print(f"{c} is largest")
else:
    if b> c:
        print(f"{b} is largest")
    else:
        print(f"{c} is largest")
# positive negative or zero
num=int (input())
if num>0:
    print("Positive")
if num<0:
    print("Negative")
if (num==0):
    print("Zer0")


 #Student Percentage
m1=int(input())
m2=int(input())    
m3=int(input())
m4=int(input())
m5=int(input())
total=500
print("percentage is ",(m1+m2+m3+m4+m5)/total*100)

#grade
percentage = (m1 + m2 + m3 + m4 + m5) / total * 100
if percentage >= 90:
    print("Grade: A")
elif percentage >= 80:
    print("Grade: B")       
elif percentage >= 70:
    print("Grade: C")
elif percentage >= 60:
    print("Grade: D")
else:
    print("Grade: F")
