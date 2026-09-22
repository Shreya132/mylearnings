lists =[2,98,75,100,89,102]
print(max(lists))

lists = [2, 98, 75, 100, 89, 102]

largest = lists[0]

for num in lists:
    if num > largest:
        largest = num

print(largest)

smallest = lists[0]
for num in lists:
    if num<smallest:
        smallest= num
print(smallest)

text ="hello"
print(text[::-1])
text = "hello"

i = len(text) - 1

while i >= 0:
    print(text[i], end="")
    i -= 1
count=0
vowels=["a","e","i","o","u"]
for l in text:
    if l in vowels:
        count+=1
print(count)

numbers = [1, 2, 2, 3, 4, 4, 5, 5]
cleane=[]
for num in numbers:
    if num not in cleane:
        cleane.append(num)
print(cleane)

    
