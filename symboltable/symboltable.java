import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.StringTokenizer;


public class symboltable 
	{

    	public static void main(String[] args) 
		{
        
        	try
			{
            	String s;
            	String fr[];
            	String data[]=null;
            	String val[]=null;
            	String var[]=null;
            	int st,ed,ln,i=0;
            	File f=new File("sample.txt");
            	FileReader fl=new FileReader(f);
            	BufferedReader bf=new BufferedReader(fl);
            	System.out.println("Type \t\t name \t\t Value");
            	while((s=bf.readLine())!=null)
				{
                	StringTokenizer str=new StringTokenizer(s);
                    if(s.contains("int")==true)
					{
                        fr=s.split(" ");
                        System.out.println();
                        System.out.print(fr[0] + "\t\t ");
                        fr[1]=fr[1].replaceAll(","," ");
                        var=fr[1].split(" ");
                        
                        for(i=0;i<var.length;i++)
						{
                            if(var[i].contains("=")==true)
							{        
                            	var=var[i].split("=");
                            	for(i=0;i<var.length;i++)
								{
                                
                                	System.out.print(var[i].replace(';', ' '));
                                	System.out.print("\t\t ");
                            	} 
                            
                        	}
							else
							{
                            	System.out.print(var[i]);
                            	System.out.print("\t\t ");
                            	System.out.print(0);
                            	System.out.println();
                            	System.out.print("\t\t ");
                                            
                        	}
                        }
                        
                    }
					else if(s.contains("float")==true)
					{
                        fr=s.split(" ");
                        System.out.println();
                        System.out.print(fr[0] + "\t\t ");
                        fr[1]=fr[1].replaceAll(","," ");
                        var=fr[1].split(" ");
                        
                        for(i=0;i<var.length;i++)
						{
                            if(var[i].contains("=")==true)
							{        
                            	var=var[i].split("=");
                            	for(i=0;i<var.length;i++)
								{
                                
                                	System.out.print(var[i].replace(';', ' '));
                                	System.out.print("\t\t ");
                            	}
                            
                        	}
							else
							{
                            	System.out.print(var[i]);
                            	System.out.print("\t\t ");
                            	System.out.print(0);
                            	System.out.println();
                            	System.out.print("\t\t ");
                                            
                        	}
                        }
                        
                    }
            }
        }
		catch(Exception e)
		{
            System.out.println(e.getMessage());
        }
    }

}

