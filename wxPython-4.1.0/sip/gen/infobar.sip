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

class wxInfoBar : wxControl
{
    %Docstring
        InfoBar()
        InfoBar(parent, winid=ID_ANY)
        
        An info bar is a transient window shown at top or bottom of its parent
        window to display non-critical information to the user.
    %End
    %TypeHeaderCode
        #include <wx/infobar.h>
    %End

public:
    wxInfoBar();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxInfoBar(
        wxWindow * parent   /TransferThis/,
        wxWindowID winid = wxID_ANY
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    void SetShowHideEffects(
        wxShowEffect showEffect,
        wxShowEffect hideEffect
    );
    %Docstring
        SetShowHideEffects(showEffect, hideEffect)
        
        Set the effects to use when showing and hiding the bar.
    %End

    wxShowEffect GetShowEffect() const;
    %Docstring
        GetShowEffect() -> ShowEffect
        
        Return the effect currently used for showing the bar.
    %End

    wxShowEffect GetHideEffect() const;
    %Docstring
        GetHideEffect() -> ShowEffect
        
        Return the effect currently used for hiding the bar.
    %End

    void SetEffectDuration(
        int duration
    );
    %Docstring
        SetEffectDuration(duration)
        
        Set the duration of the animation used when showing or hiding the bar.
    %End

    int GetEffectDuration() const;
    %Docstring
        GetEffectDuration() -> int
        
        Return the effect animation duration currently used.
    %End

    bool SetFont(
        const wxFont & font
    );
    %Docstring
        SetFont(font) -> bool
        
        Overridden base class methods changes the font of the text message.
    %End

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID winid = wxID_ANY
    );
    %Docstring
        Create(parent, winid=ID_ANY) -> bool
        
        Create the info bar window.
    %End

    void AddButton(
        wxWindowID btnid,
        const wxString & label = wxString()
    );
    %Docstring
        AddButton(btnid, label="")
        
        Add a button to be shown in the info bar.
    %End

    virtual
    void Dismiss();
    %Docstring
        Dismiss()
        
        Hide the info bar window.
    %End

    void RemoveButton(
        wxWindowID btnid
    );
    %Docstring
        RemoveButton(btnid)
        
        Remove a button previously added by AddButton().
    %End

    void ShowMessage(
        const wxString & msg,
        int flags = wxICON_INFORMATION
    );
    %Docstring
        ShowMessage(msg, flags=ICON_INFORMATION)
        
        Show a message in the bar.
    %End

    size_t GetButtonCount() const;
    %Docstring
        GetButtonCount() -> size_t
        
        Returns the number of currently shown buttons.
    %End

    wxWindowID GetButtonId(
        size_t idx
    ) const;
    %Docstring
        GetButtonId(idx) -> WindowID
        
        Returns the ID of the button at the given position.
    %End

    bool HasButtonId(
        wxWindowID btnid
    ) const;
    %Docstring
        HasButtonId(btnid) -> bool
        
        Returns whether a button with the given ID is currently shown.
    %End

    public:
    virtual wxPoint GetClientAreaOrigin() const;
    virtual bool Validate();
    virtual bool TransferDataToWindow();
    virtual bool TransferDataFromWindow();
    virtual void InitDialog();
    virtual bool AcceptsFocus() const;
    virtual bool AcceptsFocusRecursively() const;
    virtual bool AcceptsFocusFromKeyboard() const;
    virtual void AddChild( wxWindowBase *child );
    virtual void RemoveChild( wxWindowBase *child );
    virtual void InheritAttributes();
    virtual bool ShouldInheritColours() const;
    virtual void OnInternalIdle();
    virtual wxWindow *GetMainWindowOfCompositeControl();
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);
    virtual void SetCanFocus(bool canFocus);
    virtual bool Destroy();
    virtual void SetValidator( const wxValidator &validator );
    virtual wxValidator* GetValidator();


    protected:
    virtual bool ProcessEvent(wxEvent & event);
    virtual void DoEnable(bool enable);
    virtual void DoGetPosition(int *x, int *y) const;
    virtual void DoGetSize(int *width, int *height) const;
    virtual void DoGetClientSize(int *width, int *height) const;
    virtual wxSize DoGetBestSize() const;
    virtual wxSize DoGetBestClientSize() const;
    virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags);
    virtual void DoSetClientSize(int width, int height);
    virtual void DoSetSizeHints( int minW, int minH, int maxW, int maxH, int incW, int incH );
    virtual wxSize DoGetBorderSize() const;
    virtual void DoMoveWindow(int x, int y, int width, int height);
    virtual void DoSetWindowVariant( wxWindowVariant variant);
    virtual wxBorder GetDefaultBorder() const;
    virtual wxBorder GetDefaultBorderForControl() const;
    virtual void DoFreeze();
    virtual void DoThaw();
    virtual bool HasTransparentBackground();
    virtual bool TryBefore(wxEvent& event);
    virtual bool TryAfter(wxEvent& event);


    public:


    static
    wxVisualAttributes GetClassDefaultAttributes(
        wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL
    );
    %Docstring
        GetClassDefaultAttributes(variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    public:


    %Property(name=ButtonCount, get=GetButtonCount)
    %Property(name=EffectDuration, get=GetEffectDuration, set=SetEffectDuration)
    %Property(name=HideEffect, get=GetHideEffect)
    %Property(name=ShowEffect, get=GetShowEffect)
};  // end of class wxInfoBar



//---------------------------------------------------------------------------

