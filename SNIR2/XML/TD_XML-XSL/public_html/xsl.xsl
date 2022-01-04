<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html"/>

    <xsl:template match="biblioteque">
        <html>
            <body>
                <xsl:apply-templates/>
            </body>
        </html>
    </xsl:template>
    
    <xsl:template match="allee" >
        <h1>allee  <xsl:value-of select="@numero"/>  </h1>
        <hr></hr>
        <xsl:apply-templates/>
    </xsl:template>
    
    <xsl:template match="rayon">
        <h2> Rayon <xsl:value-of select="@numero"/> </h2>
        <table >
          
            <tr>  
                <th>Category de l'ouvrage</th>
                <th>Titre</th>
                <th>Auteur</th>
                <th>Numero</th>
            </tr>
            <xsl:apply-templates/> 
        </table>
        
    </xsl:template>

    <xsl:template match="ouvrage">
        <tr>
            <td>
                <xsl:value-of select="@type"/>
            </td>
            <td>
                <xsl:value-of select="@titre"/>
            </td>
            
            <xsl:choose>
                <xsl:when test="@auteur=''">
                   
                    <td>Pas d'auteur</td> 
                  
                </xsl:when>
                
                <xsl:otherwise>
                    
                    <td>  
                        <xsl:value-of select="@auteur"/> 
                    </td>
                   
                </xsl:otherwise>
            </xsl:choose>
          
            <xsl:choose>
                <xsl:when test="@numero>0">
                    <td>
                        <xsl:value-of select="@numero"/>
                    </td>
                </xsl:when>
                <xsl:otherwise>
                    <td>Numero Null</td>
                </xsl:otherwise>
            </xsl:choose>

        
        </tr>
        <xsl:apply-templates/>
    </xsl:template>

</xsl:stylesheet>