//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _richtext.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

class wxRichTextXMLHandler : wxRichTextFileHandler
{
    %Docstring
        RichTextXMLHandler(name="XML", ext="xml", type=RICHTEXT_TYPE_XML)
        
        A handler for loading and saving content in an XML format specific to
        wxRichTextBuffer.
    %End
    %TypeHeaderCode
        #include <wx/richtext/richtextxml.h>
    %End

public:
    wxRichTextXMLHandler(
        const wxString & name = "XML",
        const wxString & ext = "xml",
        int type = wxRICHTEXT_TYPE_XML
    );

    virtual
    bool CanLoad() const;
    %Docstring
        CanLoad() -> bool
        
        Returns true.
    %End

    virtual
    bool CanSave() const;
    %Docstring
        CanSave() -> bool
        
        Returns true.
    %End

    bool ExportXML(
        wxOutputStream & stream,
        wxRichTextObject & obj,
        int level
    );
    %Docstring
        ExportXML(stream, obj, level) -> bool
        
        Recursively exports an object to the stream.
    %End

    bool ImportXML(
        wxRichTextBuffer * buffer,
        wxRichTextObject * obj,
        wxXmlNode * node
    );
    %Docstring
        ImportXML(buffer, obj, node) -> bool
        
        Recursively imports an object.
    %End

    static
    void RegisterNodeName(
        const wxString & nodeName,
        const wxString & className
    );
    %Docstring
        RegisterNodeName(nodeName, className)
        
        Call with XML node name, C++ class name so that wxRTC can read in the
        node.
    %End

    static
    void ClearNodeToClassMap();
    %Docstring
        ClearNodeToClassMap()
        
        Cleans up the mapping between node name and C++ class.
    %End

            protected:
            virtual bool DoLoadFile(wxRichTextBuffer *buffer, wxInputStream& stream);
            virtual bool DoSaveFile(wxRichTextBuffer *buffer, wxOutputStream& stream);


};  // end of class wxRichTextXMLHandler



//---------------------------------------------------------------------------

