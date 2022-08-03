# 0x1E - Search algorithms

## Projects

### Searching Algorithms 0

#### 0. Linear search

Build: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o ./build/0-linear`

- Prototype: `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

#### 1. Binary search

Build: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o ./build/1-binary`

- Prototype: `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Function must return the index where `value` is located
- Assume that `array` will be sorted in ascending order
- Assume that `value` won’t appear more than once in `array`
- If `value` is not present in array or if `array` is `NULL`, function must return -1
- Print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

### Searching Algorithms 1

#### 0. Advanced binary search

Build: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o ./build/104-advanced_binary`

- Prototype: `int advanced_binary(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Function must return the index where `value` is located
- Assume that array will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
- Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
- You have to use recursion. You may only use one loop (`while`, `for`, `do` `while`, etc.) in order to print the array
