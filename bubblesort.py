def bubbleSort(list):
  for i in range(len(list)-1):
    for j in range(len(list)-1):
      if list[j] > list[j+1]:
        list[j], list[j+1] = list[j+1], list[j]
  return list

list = [10,0,6,7,1,2,3,4,5]
print(bubbleSort(list))