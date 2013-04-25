Index: geos/include/geos/operation/valid/SimpleNestedRingTester.h
===================================================================
--- geos.orig/include/geos/operation/valid/SimpleNestedRingTester.h	2011-11-30 16:54:52.000000000 +0100
+++ geos/include/geos/operation/valid/SimpleNestedRingTester.h	2011-12-02 14:40:21.000000000 +0100
@@ -25,6 +25,7 @@
 
 #include <cstddef>
 #include <vector>
+#include <cstddef>
 
 #ifdef _MSC_VER
 #pragma warning(push)
@@ -46,6 +47,8 @@
 namespace operation { // geos::operation
 namespace valid { // geos::operation::valid
 
+using namespace std;
+
 /** \brief
  * Tests whether any of a set of {@link LinearRing}s are
  * nested inside another ring in the set, using a simple O(n^2)
