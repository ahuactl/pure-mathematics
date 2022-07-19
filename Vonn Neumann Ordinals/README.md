# Vonn Neumann Ordinals
A program that generates Vonn Neumann's representation of natural numbers as used for formalizing number systems as extensions in foundational modern mathematics.

## Compiling
```sh
g++ ordinals.cpp -o ordinals -lfmt -O3 -Wall -Wpedantic
````

## Usage
```sh
./ordinals [number]
```
### Note
Memory and number of characters grow exponentially 2^(n + 1).
