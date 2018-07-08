/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSGraph : NSObject {
    struct NSMapTable { Class x1; } * _inEdgesMap;
    unsigned long long  _options;
    struct NSMapTable { Class x1; } * _outEdgesMap;
    struct NSMapTable { Class x1; } * _verticesMap;
}

@property (nonatomic, readonly) <CLSGraphVertex><NSObject> *anyVertex;
@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) unsigned long long vertexCount;

- (void).cxx_destruct;
- (unsigned long long)_degreeOfVertex:(id)arg1 inEdgeMap:(struct NSMapTable { Class x1; }*)arg2;
- (void)_enumerateVerticesInEdges:(struct NSHashTable { Class x1; }*)arg1 skipingEdges:(struct NSHashTable { Class x1; }*)arg2 enumerationBlock:(id /* block */)arg3;
- (void)_removeEdgeFromVertexWithID:(id)arg1 toVertexWithID:(id)arg2;
- (void)_traverseStartingAtVertex:(id)arg1 previousVertex:(id)arg2 visitedVertices:(id)arg3 enumerationBlock:(id /* block */)arg4;
- (void)addEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)addVertex:(id)arg1;
- (id)anyVertex;
- (bool)containsVertex:(id)arg1;
- (bool)containsVertexWithVertexID:(id)arg1;
- (unsigned long long)degree:(id)arg1;
- (unsigned long long)edgeCount;
- (void)enumerate:(id /* block */)arg1;
- (void)enumerateInNeighboursOfVertex:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (void)enumerateNeighboursOfVertex:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (void)enumerateOutNeighboursOfVertex:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (bool)hasEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (unsigned long long)inDegree:(id)arg1;
- (id)init;
- (id)initWithMemoryOptions:(unsigned long long)arg1;
- (unsigned long long)outDegree:(id)arg1;
- (void)removeEdgeFromVertex:(id)arg1 toVertex:(id)arg2;
- (void)removeVertex:(id)arg1;
- (void)reset;
- (void)traverse:(id /* block */)arg1;
- (void)traverseStartingAtVertex:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (void)traverseVerticesPassingTest:(id /* block */)arg1 enumerationBlock:(id /* block */)arg2;
- (unsigned long long)vertexCount;
- (id)vertexWithVertexID:(id)arg1;

@end
