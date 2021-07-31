

## Advices and important concepts. (Most of them are from: [C++ Coding Standarts 101 Rules, Guidelines, and Best Practices - Herb Sutter, Andrei Alexandrescu](https://books.google.com.tr/books/about/C++_Coding_Standards.html?id=mmjVIC6WolgC&printsec=frontcover&source=kp_read_button&hl=en&redir_esc=y#v=onepage&q&f=false))

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
[Source](https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in?page=1&tab=oldest#tab-top)


 ### 2-) Class Types
 
 
 - **Value Classes**:
    - Value classes implement the *big three*. Simply if you assign them to another variable, the content of the rhs object gets copied to lhs object. Vector is a good example:
   ``` c++
    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2 = v1; // Deep copy.
    print(v2);
    v1.pop_back();
    print(v2);//Not shallow copy.
    ```

    - They usually instantiated in stack and used as member of another class. 
    - They don't have any virtual functions.
  - **Base Classes**:
      - They generally create interfaces with virtual functions.
      - Usually created dynamically on the heap as parf of a derived class object.
  - **Traits classes**:
      - It's not instantiated, generally contains ```typedef```s and static functions.
      
   - **Policy classes**:
      - A policy class is a template parameter used to transmit behavior. An example from the standard library is std::allocator, which supplies memory management behaviors to standard containers. [Source](https://www.boost.org/community/generic_programming.html#policy)
 
