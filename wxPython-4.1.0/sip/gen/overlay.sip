//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _core.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

class wxOverlay
{
    %Docstring
        Overlay()
        
        Creates an overlay over an existing window, allowing for manipulations
        like rubberbanding, etc.
    %End
    %TypeHeaderCode
        #include <wx/overlay.h>
    %End

public:
    wxOverlay();

    ~wxOverlay();

    void Reset();
    %Docstring
        Reset()
        
        Clears the overlay without restoring the former state.
    %End

    private:
        wxOverlay(const wxOverlay&);


};  // end of class wxOverlay


class wxDCOverlay
{
    %Docstring
        DCOverlay(overlay, dc, x, y, width, height)
        DCOverlay(overlay, dc)
        
        Connects an overlay with a drawing DC.
    %End
    %TypeHeaderCode
        #include <wx/overlay.h>
    %End

public:
    wxDCOverlay(
        wxOverlay & overlay,
        wxDC * dc   /KeepReference/,
        int x,
        int y,
        int width,
        int height
    );

    wxDCOverlay(
        wxOverlay & overlay,
        wxDC * dc   /KeepReference/
    );

    virtual
    ~wxDCOverlay();

    void Clear();
    %Docstring
        Clear()
        
        Clears the layer, restoring the state at the last init.
    %End

    private:
        wxDCOverlay(const wxDCOverlay&);


};  // end of class wxDCOverlay



//---------------------------------------------------------------------------

