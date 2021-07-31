

## Ey Oğul

### 1-) Avoid using macros.

  - You can't debug macros. If you don't use them deliberately they're error-prone.
  
  - They don't know about namespaces. If you use macros then you don't care about your namespaces.
  
  - Use const or enum instead. 
  - Of course you may use ```#ifdef``` and ```#include``` guards.

  
  Bjarne Stroustrup:
  
  
> I dislike most forms of preprocessors and macros. One of C++’s aims is to make C’s preprocessor redundant because I consider its actions inherently error prone.


### 2-) References vs Pointers.

- You can't re-assign references whereas you can assign pointers.

``` c++
/*Pointers*/ 
int a = 5, b = 10;
int *p = &a 
p = &b; //all fine.

/*References*/
int &y; //not legal, needs rhs.
```

- Pointers support multi-level indirections, references don't.

``` c++
int a = 10;
int *p = &a;
int **pp = &p;
```

- Pointers can be assigned to NULL or nullptr, references can't.

- You can iterate through pointer adresses.
- Pointers must be dereferences to get the value, in references you don't do that.
- Pointer objects require -> operator to reach their objects, for references you reach them with dot.
- You can't create a reference array where as you can create a pointer array.
- You can initialize const references to temporaries, pointers can't. (Without any indirection.)
 ``` c++
const int &x = int(12); // legal C++
int *y = &int(12); // illegal to take the address of a temporary.
```
 
