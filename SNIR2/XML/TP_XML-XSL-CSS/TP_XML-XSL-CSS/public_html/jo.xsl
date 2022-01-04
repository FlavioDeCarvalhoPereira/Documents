<?xml version="1.0" encoding="UTF-8"?>

<!--
    Document   : jo.xsl
    Created on : 23 septembre 2021, 15:28
    Author     : fpereira
    Description:
        Purpose of transformation follows.
-->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html"/>

    <!-- TODO customize transformation rules 
         syntax recommendation http://www.w3.org/TR/xslt 
    -->
    <xsl:template match="tableau">
        <html>
            <head>
                <title>jo.xsl</title>
                <link href="jo.css" rel="stylesheet" type="text/css"/>
            </head>
            <body>
                <table>
          
                    <tr>  
                        <th> Pays   </th>
                        <th> Or     </th>
                        <th> Argent </th>
                        <th> Bronze </th>
                        <th> Total  </th>
                
                    </tr>
                    <xsl:apply-templates/> 
                </table>
            </body>
        </html>
    </xsl:template>
    
        


    <xsl:template match="ligne">
        <tr>
            <xsl:apply-templates/>   
        </tr>
    </xsl:template>
        
        
        
    <xsl:template match="pays">
        <td>
            <xsl:value-of select="@nomPays"/>
        </td>
       
    </xsl:template>
      
    <xsl:template match="medaille">
        <td class="xsl:value-of select= "@typeMedaille">
            <xsl:value-of select="."/>
        </td>
         
    </xsl:template>
     
    <xsl:template match="totalMedaille">
        <td>
            <xsl:value-of select="."/>
        </td>
        
    </xsl:template>
</xsl:stylesheet>


   