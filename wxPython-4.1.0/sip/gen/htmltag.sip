//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _html.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

class wxHtmlTag
{
    %Docstring
        This class represents a single HTML tag.
    %End
    %TypeHeaderCode
        #include <wx/html/htmltag.h>
    %End

public:
    wxString GetAllParams() const;
    %Docstring
        GetAllParams() -> String
        
        Returns a string containing all parameters.
    %End

    wxString GetName() const;
    %Docstring
        GetName() -> String
        
        Returns tag's name.
    %End

    wxString GetParam(
        const wxString & par,
        bool with_quotes = false
    ) const;
    %Docstring
        GetParam(par, with_quotes=False) -> String
        
        Returns the value of the parameter.
    %End

    bool GetParamAsColour(
        const wxString & par,
        wxColour * clr   /Out/
    ) const;
    %Docstring
        GetParamAsColour(par) -> (bool, clr)
        
        Interprets tag parameter par as colour specification and saves its
        value into wxColour variable pointed by clr.
    %End

    bool GetParamAsInt(
        const wxString & par,
        int * value   /Out/
    ) const;
    %Docstring
        GetParamAsInt(par) -> (bool, value)
        
        Interprets tag parameter par as an integer and saves its value into
        int variable pointed by value.
    %End

    bool GetParamAsString(
        const wxString & par,
        wxString * value
    ) const;
    %Docstring
        GetParamAsString(par, value) -> bool
        
        Get the value of the parameter.
    %End

    bool HasEnding() const;
    %Docstring
        HasEnding() -> bool
        
        Returns true if this tag is paired with ending tag, false otherwise.
    %End

    bool HasParam(
        const wxString & par
    ) const;
    %Docstring
        HasParam(par) -> bool
        
        Returns true if the tag has a parameter of the given name.
    %End

    static
    bool ParseAsColour(
        const wxString & str,
        wxColour * clr   /Out/
    );
    %Docstring
        ParseAsColour(str) -> (bool, clr)
        
        Parses the given string as an HTML colour.
    %End

    private:
        wxHtmlTag(const wxHtmlTag&);


    public:


    %Property(name=AllParams, get=GetAllParams)
    %Property(name=Name, get=GetName)
};  // end of class wxHtmlTag



//---------------------------------------------------------------------------

