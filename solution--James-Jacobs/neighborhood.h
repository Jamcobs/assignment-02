 #ifndef NEIGHBORHOOD_H
 #define NEIGHBORHOOD_H
 // ----------------------------------------------------------------------------
 
 #include "shape.h"
 #include <vector>
 // ----------------------------------------------------------------------------
 
 class Shape;
// ----------------------------------------------------------------------------
 
 class Neighborhood {
   private:
       std::vector<Shape> neighborhood_;

   public:
     const unsigned int size_x;
       const unsigned int size_y;
   Neighborhood(unsigned int size_x, unsigned int size_y);
 
  ~Neighborhood();

     Shape get(unsigned int x, unsigned int y) const;

  void set(unsigned int x, unsigned int y, const Shape & s);
      void move(unsigned int old_x, unsigned int old_y);
     void animate(unsigned int frames);

 };
 // ----------------------------------------------------------------------------
 #endif
