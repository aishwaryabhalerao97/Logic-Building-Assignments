import java.util.*;


class Assignment32_5

{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str  = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.DisplayPattern(str);

    }
}

class Pattern
{
    public void DisplayPattern(String str)
    {
        for(int i =0;i<=str.length()-1;i++)
        { 
            for(int j = 0;j<=str.length()-1;j++)
            {
                if(i>=j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                
            } 
            System.out.println();
        }

        for(int i =str.length()-2;i>=0;i--)
        {
            
            for(int j = 0;j<=str.length()-1;j++)
            {
                if(i>=j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                
            }

            System.out.println();
        }    
        

    }

}


