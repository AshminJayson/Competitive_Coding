import random

# Short algorithm
def qsort(lst):
    
    if len(lst) <= 1:
        return lst
    
    return qsort([x for x in lst[1:] if x <= lst[0]]) + lst[0:1] + qsort([x for x in lst[1:] if x > lst[0]])


# Typical Implementation
def partition(arr, lo, hi):
	pivot = arr[hi]
	i = lo - 1

	for j in range(lo, hi):
		if arr[j] < pivot:
			i += 1
			arr[j], arr[i] = arr[i], arr[j]

	arr[hi], arr[i + 1] = arr[i + 1], arr[hi]
	return i + 1

def quicksort(arr, lo, hi):
	if lo < hi:
		p = partition(arr, lo, hi)
		quicksort(arr, lo, p - 1)
		quicksort(arr, p + 1, hi)


#Randomised Quick Sort

def randomPartition(arr, lo, hi):
	pivotIndex = random.randint(lo, hi)
	arr[pivotIndex], arr[hi] = arr[hi], arr[pivotIndex]
	pivot = arr[hi]
	i = lo - 1

	for j in range(lo, hi):
		if arr[j] < pivot:
			i += 1
			arr[j], arr[i] = arr[i], arr[j]

	arr[hi], arr[i + 1] = arr[i + 1], arr[hi]
	return i + 1

def randomisedQuicksort(arr, lo, hi):
	if lo < hi:
		p = randomPartition(arr, lo, hi)
		randomisedQuicksort(arr, lo, p - 1)
		randomisedQuicksort(arr, p + 1, hi)

# arr = [8, 7, 0, 3, 4]
# quicksort(arr, 0, len(arr) - 1)
# print(arr)