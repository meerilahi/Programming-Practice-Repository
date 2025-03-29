import 'dart:io';


List<int> Func(List<int> A,List<int> B)
{
  Set<int> C = Set();
  for (var a in A) {
    for (var b in B) {
      if (a == b) {
        C.add(a);
      }
    }
    
  }
  List<int> D = C.toList();
  return D;
}
void main(List<String> args) {
  
  print("Enter element of first list.(0 to exist)");
  List<int> A = [];
  int e = -1;
  while(e != 0)
  {
    e = int.parse(stdin.readLineSync()!);
    A.add(e);
  }
  print("Now Enter element of Second list.(0 to exist)");
  List<int> B = [];
  e = -1;
  while(e != 0 )
  {
    e = int.parse(stdin.readLineSync()!);
    B.add(e);
  }
  print("Intersection of both list are as below");
  var C = Func(A, B);
  print(C);

}