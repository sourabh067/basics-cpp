# references

reference to memory location/address of variable.

refernce and variable both must be of same type.

- int x = 2;
  int y;
  y=x;
  here , y holds COPY of x.
  any changes made to `y` will NOT affect `x` 

- int &y = x;
  here , `y` refers to memory address of `x`
  any changes made to `y` WILL affect `x` and vice versa.

- we are directy manipulating with var in that address.