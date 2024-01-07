# HashTable

* Insertion works in O(1), Search is O(1), Deletion in O(1)
* It is a unordered structure
* Basic hash is always % 10, note there can be collision & they can be resolve using linkedlist though it changes complexity
* It can grow based on need, hashing is done by `hash function`

## Collision handeling

* Two values generate the same hash then it causes collision
* Easiest way is to form a chain then put the same value furthur in chain of it

## Hash for Strings

* ASCII values are added to get a total value
* h('str') = sum % size of table
* We can also multiple k a base prime number in sucession
* Example = `a*27 + b*27*27 + c*27*27*27`

## Open hashing

### Separate Chaining

* Add collisioned element to linkedList
