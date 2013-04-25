Index: geos/src/index/bintree/Node.cpp
===================================================================
--- geos.orig/src/index/bintree/Node.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/index/bintree/Node.cpp	2011-12-02 14:36:08.000000000 +0100
@@ -16,6 +16,7 @@
 
 #include <cstddef>
 #include <cassert>
+#include <cstddef>
 
 #include <geos/index/bintree/Node.h>
 #include <geos/index/bintree/Key.h>
@@ -25,6 +26,8 @@
 namespace index { // geos.index
 namespace bintree { // geos.index.bintree
 
+using namespace std;
+
 Node*
 Node::createNode(Interval *itemInterval)
 {
Index: geos/src/geomgraph/Node.cpp
===================================================================
--- geos.orig/src/geomgraph/Node.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/geomgraph/Node.cpp	2011-12-02 14:36:08.000000000 +0100
@@ -32,6 +32,7 @@
 #include <sstream>
 #include <vector>
 #include <algorithm>
+#include <cstddef>
 
 #ifndef GEOS_DEBUG
 #define GEOS_DEBUG 0
@@ -40,12 +41,13 @@
 #define COMPUTE_Z 1
 #endif
 
-using namespace std;
 using namespace geos::geom;
 
 namespace geos {
 namespace geomgraph { // geos.geomgraph
 
+using namespace std;
+
 /*public*/
 Node::Node(const Coordinate& newCoord, EdgeEndStar* newEdges)
 	:
Index: geos/src/index/quadtree/Node.cpp
===================================================================
--- geos.orig/src/index/quadtree/Node.cpp	2011-11-30 16:54:52.000000000 +0100
+++ geos/src/index/quadtree/Node.cpp	2011-12-02 14:36:08.000000000 +0100
@@ -25,6 +25,7 @@
 #include <string>
 #include <sstream>
 #include <cassert>
+#include <cstddef>
 
 #ifndef GEOS_DEBUG
 #define GEOS_DEBUG 0
@@ -41,6 +42,8 @@
 namespace index { // geos.index
 namespace quadtree { // geos.index.quadtree
 
+using namespace std;
+
 /* public static */
 std::auto_ptr<Node>
 Node::createNode(const Envelope& env)
