Index: geos/src/index/bintree/Root.cpp
===================================================================
--- geos.orig/src/index/bintree/Root.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/index/bintree/Root.cpp	2011-12-02 14:36:34.000000000 +0100
@@ -21,11 +21,14 @@
 
 #include <cstddef>
 #include <cassert>
+#include <cstddef>
 
 namespace geos {
 namespace index { // geos.index
 namespace bintree { // geos.index.bintree
 
+using namespace std;
+
 double Root::origin=0.0;
 
 void
Index: geos/src/index/quadtree/Root.cpp
===================================================================
--- geos.orig/src/index/quadtree/Root.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/index/quadtree/Root.cpp	2011-12-02 14:36:34.000000000 +0100
@@ -25,6 +25,7 @@
 #include <geos/geom/Envelope.h>
 
 #include <cassert>
+#include <cstddef>
 
 #ifndef GEOS_DEBUG
 #define GEOS_DEBUG 0
@@ -40,6 +41,8 @@
 namespace index { // geos.index
 namespace quadtree { // geos.index.quadtree
 
+using namespace std;
+
 // the singleton root quad is centred at the origin.
 //Coordinate* Root::origin=new Coordinate(0.0, 0.0);
 const Coordinate Root::origin(0.0, 0.0);
