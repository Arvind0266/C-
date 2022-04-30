
import java.io.*;
public class javaw
{
    public static void main(String[] args) {
        int n;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        try
        {
            n=Integer.parseInt(br.readLine());
        for(int i=n;i>=1;i--)
        {
            for(int j=n;j>=n-i+1;j--)
            {
                System.out.print(j);
            }
            System.out.println();
        }
        
         }
        catch(Exception e)
        {
            System.out.println("Exception e");
        }
       
        }}
    
