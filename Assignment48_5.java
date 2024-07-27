import java.util.*;

class Assignment48_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");    
       int iNo1 = sobj.nextInt();
    
       System.out.println("Enter number of Cols: ");    
       int iNo2 = sobj.nextInt();

       Matrix mobj = new Matrix(iNo1, iNo2);

       int iRet = 0;

       mobj.Accept();
       mobj.Display();
       mobj.ColSum();
        mobj = null;
    }
}
class Matrix
{
    public int iRow = 0,iCol = 0;
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
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
public void ColSum()
    {
        int i = 0, j = 0, iSum = 0;
        
        for(i= 0; i < iCol; i++)
        {
            for(j = 0,iSum = 0; j < iRow; j++)
            {
                iSum = iSum + Arr[j][i];
            }
            System.out.println("Summation of all elemnets from cols no : "+(i+1)+" is : "+iSum);
        }
    }
}