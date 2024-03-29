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

class wxCaret
{
    %Docstring
        Caret(window, width, height)
        Caret(window, size)
        Caret()
        
        A caret is a blinking cursor showing the position where the typed text
        will appear.
    %End
    %TypeHeaderCode
        #include <wx/caret.h>
    %End

public:
    wxCaret(
        wxWindow * window,
        int width,
        int height
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxCaret(
        wxWindow * window,
        const wxSize & size
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxCaret();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool Create(
        wxWindow * window,
        int width,
        int height
    );
    %Docstring
        Create(window, width, height) -> bool
        Create(window, size) -> bool
        
        Creates a caret with the given size (in pixels) and associates it with
        the window (same as the equivalent constructors).
    %End

    bool Create(
        wxWindow * window,
        const wxSize & size
    );

    wxPoint GetPosition() const;
    %Docstring
        GetPosition() -> Point
        
        Get the caret position (in pixels).
    %End

    wxSize GetSize() const;
    %Docstring
        GetSize() -> Size
        
        Get the caret size.
    %End

    void Move(
        int x,
        int y
    );
    %Docstring
        Move(x, y)
        Move(pt)
        
        Move the caret to given position (in logical coordinates).
    %End

    void Move(
        const wxPoint & pt
    );

    void SetSize(
        int width,
        int height
    );
    %Docstring
        SetSize(width, height)
        SetSize(size)
        
        Changes the size of the caret.
    %End

    void SetSize(
        const wxSize & size
    );

    wxWindow * GetWindow() const;
    %Docstring
        GetWindow() -> Window
        
        Get the window the caret is associated with.
    %End

    virtual
    void Hide();
    %Docstring
        Hide()
        
        Hides the caret, same as Show(false).
    %End

    bool IsOk() const;
    %Docstring
        IsOk() -> bool
        
        Returns true if the caret was created successfully.
    %End

    bool IsVisible() const;
    %Docstring
        IsVisible() -> bool
        
        Returns true if the caret is visible and false if it is permanently
        hidden (if it is blinking and not shown currently but will be after
        the next blink, this method still returns true).
    %End

    virtual
    void Show(
        bool show = true
    );
    %Docstring
        Show(show=True)
        
        Shows or hides the caret.
    %End

    static
    int GetBlinkTime();
    %Docstring
        GetBlinkTime() -> int
        
        Returns the blink time which is measured in milliseconds and is the
        time elapsed between 2 inversions of the caret (blink time of the
        caret is the same for all carets, so this functions is static).
    %End

    static
    void SetBlinkTime(
        int milliseconds
    );
    %Docstring
        SetBlinkTime(milliseconds)
        
        Sets the blink time for all the carets.
    %End

    private:
        wxCaret(const wxCaret&);


    int __nonzero__();
    %Docstring
        __nonzero__() -> int
    %End
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxCaret___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    int _wxCaret___nonzero__(wxCaret* self)
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
        sipRes = _wxCaret___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    int _wxCaret___bool__(wxCaret* self)
    {
        return self->IsOk();
    }
    %End

    public:


    %Property(name=Position, get=GetPosition)
    %Property(name=Size, get=GetSize, set=SetSize)
    %Property(name=Window, get=GetWindow)
};  // end of class wxCaret



//---------------------------------------------------------------------------

