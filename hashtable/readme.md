# HashTable

* Insertion works in O(1), Search is O(1), Deletion in O(1)
* It is a unordered structure
* Basic hash is always % 10, note there can be collision & they can be resolve using linkedlist though it changes complexity
* It can grow based on need, hashing is done by `hash function`

## Collision handeling

* Two values generate the same hash then it causes collision
* Easiest way is to form a chain then put the same value furthur in chain of it
