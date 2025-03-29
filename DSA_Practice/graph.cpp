#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

class Edge
{
public:
      int weight;
      int destinationVertexId;
      Edge() {}
      Edge(int weight, int destinationVertexId)
      {
            this->weight = weight;
            this->destinationVertexId = destinationVertexId;
      }
      void setValues(int weight, int destinationVertexId)
      {
            this->weight = weight;
            this->destinationVertexId = destinationVertexId;
      }
      void setWeight(int weight)
      {
            this->weight = weight;
      }
      int getDestinationVertexId()
      {
            return this->destinationVertexId;
      }
      int getWeight()
      {
            return this->weight;
      }
};

class Vertex
{
public:
      int vertexId;
      string vertexName;
      list<Edge> edgeList;
      Vertex()
      {
            vertexId = 0;
            vertexName = "";
      }
      Vertex(int vertexId, int vertexName, list<Edge> edgeList)
      {
            this->vertexId = vertexId;
            this->vertexName = vertexName;
            this->edgeList = edgeList;
      }
      void setVertexId(int vertexId)
      {
            this->vertexId = vertexId;
      }
      void setVertexName(string vertexName)
      {
            this->vertexName = vertexName;
      }
      int getVertexId()
      {
            return vertexId;
      }
      string getVertexName()
      {
            return vertexName;
      }
      list<Edge> getEdgeList()
      {
            return edgeList;
      }
};

class Graph
{
public:
      vector<Vertex> vertices;
      Graph() {}

      void addVertic(Vertex vertex)
      {
            if (!isVertexExist(vertex.vertexId))
            {
                  vertices.push_back(vertex);
            }
            else
            {
                  cout << "Vertex already exist" << endl;
            }
      }

      void addEdge(int sourceVertexId, Edge edge)
      {
            bool check1 = isVertexExist(sourceVertexId);
            bool check2 = isVertexExist(edge.destinationVertexId);
            bool check3 = isEdgeExist(sourceVertexId, edge);
            if (check1 && check2 && !check3)
            {
                  for (int i = 0; i < vertices.size(); i++)
                  {
                        if (vertices.at(i).vertexId == sourceVertexId)
                        {
                              vertices.at(i).edgeList.push_back(edge);
                        }
                        else if (vertices.at(i).vertexId == edge.destinationVertexId)
                        {
                              vertices.at(i).edgeList.push_back(Edge(edge.weight, sourceVertexId));
                        }
                  }
            }
            else
            {
                  cout << "Invalid edge or edge already exist" << endl;
            }
      }

      bool isEdgeExist(int sourceVertexId, Edge edge)
      {

            bool check1 = isVertexExist(sourceVertexId);
            if (check1)
            {
                  Vertex v = getVertexById(sourceVertexId);
                  list<Edge> edgeList = v.getEdgeList();
                  for (auto it = edgeList.begin(); it != edgeList.end(); it++)
                  {
                        if (it->destinationVertexId == edge.destinationVertexId)
                        {
                              return true;
                        }
                  }
                  return false;
            }
            return false;
      }

      bool isVertexExist(int id)
      {
            for (int i = 0; i < vertices.size(); i++)
            {
                  if (id == vertices.at(i).vertexId)
                  {
                        return true;
                  }
            }
            return false;
      }

      Vertex getVertexById(int vertexId)
      {
            for (int i = 0; i < vertices.size(); i++)
            {
                  if (vertexId == vertices.at(i).vertexId)
                  {
                        return vertices.at(i);
                  }
            }
            return Vertex();
      }

      void updateEdge(Edge edge){}
      void deleteEdge(Edge edge){}
      void deleteVertex(Vertex vertex){}
      void updateVertex(Vertex vertex){}

};

main()
{
}