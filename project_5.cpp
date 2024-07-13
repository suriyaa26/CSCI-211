  /*//Suriya Sristi
  #include <iostream>    
  #include<cstdlib>    
  #include <cmath>    
  using namespace std;    

  bool ok(int q[]){
    for(int col = 7; col >= 0; col--){	//for columns 7 to 0, decrement
      for(int i=0; i<col; i++)		//i from 0 to value of column, increment
      if(q[col]==q[i] || (col-i)==abs(q[col]-q[i])) //row and diagonal test
        return false;
    }
    return true;
  }

  void print(int q[]){
    static int count = 0;

    cout << ++count << endl;
    {
      for (int j=0;j<8;j++)
        cout << q[j] << " ";
    }
    cout << endl;
  }

  int main ()
  {
    int q[8] = {0};

    for(int i0 = 0; i0 < 8; i0++)				
      for(int i1=0; i1 < 8; i1++)
        for(int i2 = 0; i2 < 8; i2++)
          for(int i3 = 0; i3 < 8; i3++)
            for(int i4 = 0; i4 < 8; i4++)
              for(int i5 = 0; i5 < 8; i5++)
                for(int i6 = 0; i6 < 8; i6++)
                  for(int i7 = 0; i7 < 8; i7++){

                    q[0]=i0;
                    q[1]=i1;
                    q[2]=i2;
                    q[3]=i3;
                    q[4]=i4;
                    q[5]=i5;
                    q[6]=i6;
                    q[7]=i7;

                    if(ok(q)) 
                      print(q);

                    q[0]=0;
                    q[1]=0;
                    q[2]=0;
                    q[3]=0;
                    q[4]=0;
                    q[5]=0;
                    q[6]=0;
                    q[7]=0;

                  }		

    return 0;
  }*/