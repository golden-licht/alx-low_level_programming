# 0x1A-hash_tables

* A hash function: maps a key (usually a data) to a value (usually an index in a table)
* hashing: using hash function to index a hash table
* A good hash function: 
	1. It should be fast to compute
	2. Should minimize collision (what happens when different keys point to the same index in the table?)
* chained hashing: each slot of the table is the head of a linked list or chain 
