# Graphs

* Can be classified as Directed & undirected graphs, Weighted & non weighted graphs
* It can be stored as
  * Adajceny list ( list of neighbours for each nodes )
  * Adjacency matrix ( n x n )
  * Edge list only edges of a node stored like {From, To}
  * Implicit graphs ( Where we can traverse 4 ways or 8 ways ) Example chess
* Applications
  * Maps
  * Social media
  * Shortest Cycle route
  * Dependance graphs
  * Networking
  * ML
  * Web crawlers
  * Physics and chemistry
  * graph database

## Topological Sorting

* It is for DAG. It means finding out the right order in which things should be install

## Dijikshtra Algorithm

* Shortest path algorithm
* Single Shortest Path Algorithm
* It is done by maintaining the set of node & dist
* While Finalizaing the distances, we remove that node and distance from set
