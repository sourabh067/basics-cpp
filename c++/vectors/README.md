# vectors

vectors are arrays that dont have fixed size

they can INCREASE size dynamically. (doubles its capacity)

size() current size of vector.

when elements exceed size vector grows by double.
capacity() total elements it can hold.

vector.push_back() add element to back of vector.
vector.pop_back() delete last element.

even though elements are deleted capacity of vector DOES NOT decrease.
to shrink use vector.shrink_to_fit()
now capacity == size.

to insert elements we use pointers.
vector.incert(vector.begin(),val) to front




