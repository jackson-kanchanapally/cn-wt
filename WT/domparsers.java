import java.io.File;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
import org.w3c.dom.Node;
import org.w3c.dom.Element;
public class domparsers{
    public static void main(String [] args)
    {
        try{
            File iF=new File("input.xml");
            DocumentBuilderFactory dbF=DocumentBuilderFactory.newInstance();
            DocumentBuilder dB=dbF.newDocumentBuilder();
            Document doc=dB.parse(iF);
            doc.getDocumentElement().normalize();
            System.out.println("Root element : "+doc.getDocumentElement().getNodeName());
            NodeList nl=doc.getElementsByTagName("student");
            System.out.println("-------");
            for(int i=0;i<nl.getLength();i++)
            {
                Node nN=nl.item(i);
                System.out.println("Current element : "+nN.getNodeName());
                if(nN.getNodeType()==Node.ELEMENT_NODE){
                    Element eE=(Element)nN;
                    System.out.println("Student rollno: "+eE.getElementsByTagName("rollno").item(0).getTextContent());
                    System.out.println("Name: "+eE.getElementsByTagName("name").item(0).getTextContent());
                }
            }
        }

        catch(Exception e){
            e.printStackTrace();
        }
    }
}