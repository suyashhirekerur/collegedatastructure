#Create an array 
arr = [10, 20, 30, 40, 50]

#Traversal
print("Traversal:")
for i in arr:
    print(i)

#Insertion
arr.insert(2, 25)
print("After insertion:", arr)

#Deletion
arr.remove(30)
print("After Deletion:", arr)

#Searching
key = 40
found = False
for i in range(len(arr)):
    if arr[i] == key:
        print("Element found at index", i)
        found = True
        break
if not found:
    print("Error! Element not found in the given array!")
        
#Updation
arr[1] = 99
print("After Updation:", arr)
