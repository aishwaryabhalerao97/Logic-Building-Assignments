import java.util.*;

class Assignment49_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Display();
       
       boolean bRet = false;

        bRet = mobj.ChkSparse();

        System.out.println(bRet);
       if(bRet == true)
       {
        System.out.println("The matrix is Sparse");
       }
       else
       {
        System.out.println("The matrix is not Sparse");
       }
        mobj = null; 
        System.gc();
    }
}
class Matrix
{
    public int iRow, iCol;
    public int Arr[][];
    public int transpose[][];
    
    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    protected void finalize()
    {
        System.out.println("Garbage collector is collecting the memory of an object");
        Arr = null;
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }     
    public void Transpose()
     {
        int i = 0, j = 0;
        System.out.println("Elements after transpose:");
        for(i= 0; i < iCol; i++)
        {
            for(j = 0; j < iRow; j++)
            {
                System.out.print( Arr[j][i]+"\t");
            
            }
           System.out.println();
        }
}  
public void ReverseRow()
{
   int i = 0, j = 0;
   System.out.println("Elements after reverse:");
   for(i= 0; i < Arr.length; i++)
   {
       for(j = Arr[i].length-1; j >=0; j--)
       {
            
           System.out.print(Arr[i][j]+"\t"); 
       }
      System.out.println();
   }

}

public void ReverseCol()
{
   int i = 0, j = 0;
   System.out.println("Elements after reverse:");
   for(i= Arr[j].length-1; i >= 0; i--)
   {
       for(j = 0;j < Arr.length; j++)
       {
            
           System.out.print(Arr[i][j]+"\t"); 
       }
      System.out.println();
   }

}
 boolean ChkIdentity()
{
   int i = 0, j = 0;
   
   for(i= 0; i < iRow; i++)
   {
    for(j = 0; j < iCol; j++)
       {
            if(i == j && Arr[i][j] != 1)
            {
                return false;
            }
            else if(i != j && Arr[i][j] != 0)
            {
                return false;
            }
       }
      System.out.println();
   }
return true;
}

boolean ChkSparse()
{
   int i = 0, j = 0, iCnt = 0;
   
   for(i= 0; i < iRow; i++)
   {
    for(j = 0; j < iCol; j++)
       {
        if(Arr[i][j] == 0)
            {
                iCnt++;
            }   
       }
      System.out.println();
   }
   if(iCnt > (Arr.length/2))
   {
    return true;
   }
   else
   {
    return false;
   }
}
}


