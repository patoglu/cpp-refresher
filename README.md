

## Ey Oğul

### 1-) Avoid using macros.

  - You can't debug macros. If you don't use them deliberately they're error-prone.
  
  - They don't know about namespaces. If you use macros then you don't care about your namespaces.
  
  - Use const or enum instead. 
  - Of course you may use ```#ifdef``` and ```#include``` guards.

  
  Bjarne Stroustrup:
  
  
> I dislike most forms of preprocessors and macros. One of C++’s aims is to make C’s preprocessor redundant because I consider its actions inherently error prone.
