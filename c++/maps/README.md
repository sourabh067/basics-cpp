# maps

include map library
 
key-value pairs

to access value we use keys.

- iterating through maps

- syntax :
for (map<int,int>::iterator itr = m.begin();itr !=m.end();++itr)

`itr` pointer variable of type `map<int,int>::iterator`

itialized to m.begin()
points to address of first element

`itr != m.end()` iterate till `itr` NOT equal to m.end()

map.begin() : gets iterator to beginning of map
map.end()   : gets iterator to end

since itr points to address we neede to deref to get values
itr->first to get key
itr -> second to get value

