Tranquility-Math
================

Math library for the Tranquility Engine

This library will contain all math functions and structures to support those functions that will be required by the Tranquility Engine  

Current Features  
----------------
While the library is still under construction, there are a few features already implemented
### Basic Types
* **Float:** implements a class wrapper for a single-percision floating point, correctly handles equality and comparisons  
* **Dual:** implements a class to represent a dual number, specifically usefull for automatic differentiation.  

### Structures
* **Point2D:** implements a basic point object in 2 dimensional space  
* **Point3D:** implements a basic point object in 3 dimensional space  
* **Vector2D:** similar to a point, offers additional functionality for vector mathematics  
* **Vector3D:** vector operations in 3 dimensional space  

To-Do List
----------
### Structures
* **Complex:** a generic representation for complex numbers (yes I know about std::complex)
* **Matrix:** a generic representation for a 3x3 matrix
* **Quaternion:** a generic representation of a quaternion

### Functions
* Addition
* Subtraction
* Inversion
* Quaternion Interpolation (see [this](http://number-none.com/product/Understanding%20Slerp,%20Then%20Not%20Using%20It/) for a reference on interpolation types)
  * Spherical linear interpolation
  * Normalized quaternion linear interpolation
  * Exponential map interpolation

More as needed

### Implementation
* SSE4 support (potentially earlier versions as well)
* 
