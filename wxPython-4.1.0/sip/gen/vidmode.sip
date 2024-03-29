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

struct wxVideoMode
{
    %Docstring
        VideoMode(width=0, height=0, depth=0, freq=0)
        
        Determines the sizes and locations of displays connected to the
        system.
    %End
    %TypeHeaderCode
        #include <wx/vidmode.h>
    %End

    wxVideoMode(
        int width = 0,
        int height = 0,
        int depth = 0,
        int freq = 0
    );

    int w;

    int h;

    int bpp;

    int refresh;

    bool Matches(
        const wxVideoMode & other
    ) const;
    %Docstring
        Matches(other) -> bool
        
        Returns true if this mode matches the other one in the sense that all
        non zero fields of the other mode have the same value in this one
        (except for refresh which is allowed to have a greater value).
    %End

    int GetWidth() const;
    %Docstring
        GetWidth() -> int
        
        Returns the screen width in pixels (e.g. 640), 0 means unspecified.
    %End

    int GetHeight() const;
    %Docstring
        GetHeight() -> int
        
        Returns the screen height in pixels (e.g. 480), 0 means unspecified.
    %End

    int GetDepth() const;
    %Docstring
        GetDepth() -> int
        
        Returns bits per pixel (e.g. 32), 1 is monochrome and 0 means
        unspecified/known.
    %End

    bool IsOk() const;
    %Docstring
        IsOk() -> bool
        
        Returns true if the object has been initialized.
    %End

    bool operator==(
        const wxVideoMode & m
    ) const;

    bool operator!=(
        const wxVideoMode & mode
    ) const;

    int __nonzero__();
    %Docstring
        __nonzero__() -> int
    %End
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxVideoMode___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    int _wxVideoMode___nonzero__(wxVideoMode* self)
    {
        return self->IsOk();
    }
    %End

    int __bool__();
    %Docstring
        __bool__() -> int
    %End
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxVideoMode___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    int _wxVideoMode___bool__(wxVideoMode* self)
    {
        return self->IsOk();
    }
    %End

    public:


    %Property(name=Depth, get=GetDepth)
    %Property(name=Height, get=GetHeight)
    %Property(name=Width, get=GetWidth)
};  // end of class wxVideoMode


const wxVideoMode wxDefaultVideoMode;

class wxArrayVideoModes
{
public:
    SIP_SSIZE_T __len__();
    %MethodCode
        sipRes = sipCpp->GetCount();
    %End

            wxVideoMode& __getitem__(long index);
        %MethodCode
            if (0 > index)
                index += sipCpp->GetCount();

            if ((index < sipCpp->GetCount()) && (0 <= index)) {
                sipRes = &sipCpp->Item(index);
            }
            else {
                wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
                sipError = sipErrorFail;
            }
        %End
        

    int __contains__(wxVideoMode& obj);
    %MethodCode
        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;
    %End

    void append(wxVideoMode& obj);
    %MethodCode
        sipCpp->Add(*obj);
    %End

    // TODO:  add support for index(value, [start, [stop]])
    int index(wxVideoMode& obj);
    %MethodCode
        int idx = sipCpp->Index(*obj, false);
        if (idx == wxNOT_FOUND) {
            sipError = sipErrorFail;
            wxPyErr_SetString(PyExc_ValueError,
                              "sequence.index(x): x not in sequence");
            }
        sipRes = idx;
    %End
};

%Extract(id=pycode_core)
def _ArrayVideoModes___repr__(self):
    return "ArrayVideoModes: " + repr(list(self))
ArrayVideoModes.__repr__ = _ArrayVideoModes___repr__
del _ArrayVideoModes___repr__
%End



//---------------------------------------------------------------------------

