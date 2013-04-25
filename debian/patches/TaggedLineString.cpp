Index: geos/src/simplify/TaggedLineString.cpp
===================================================================
--- geos.orig/src/simplify/TaggedLineString.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/simplify/TaggedLineString.cpp	2011-12-02 14:41:08.000000000 +0100
@@ -27,6 +27,7 @@
 
 #include <cassert>
 #include <memory>
+#include <cstddef>
 
 #ifndef GEOS_DEBUG
 #define GEOS_DEBUG 0
@@ -42,6 +43,8 @@
 namespace geos {
 namespace simplify { // geos::simplify
 
+using namespace std;
+
 /*public*/
 TaggedLineString::TaggedLineString(const geom::LineString* nParentLine,
 			std::size_t nMinimumSize)
