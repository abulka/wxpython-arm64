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

enum wxHtmlSelectionState
{
    wxHTML_SEL_OUT,
    wxHTML_SEL_IN,
    wxHTML_SEL_CHANGING
};

enum 
{
    wxHTML_FIND_EXACT,
    wxHTML_FIND_NEAREST_BEFORE,
    wxHTML_FIND_NEAREST_AFTER
};

enum wxHtmlScriptMode
{
    wxHTML_SCRIPT_NORMAL,
    wxHTML_SCRIPT_SUB,
    wxHTML_SCRIPT_SUP
};

class wxHtmlSelection
{
    %Docstring
        HtmlSelection()
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlSelection();

    void Set(
        const wxPoint & fromPos,
        const wxHtmlCell * fromCell,
        const wxPoint & toPos,
        const wxHtmlCell * toCell
    );
    %Docstring
        Set(fromPos, fromCell, toPos, toCell)
        Set(fromCell, toCell)
    %End

    void Set(
        const wxHtmlCell * fromCell,
        const wxHtmlCell * toCell
    );

    const wxHtmlCell * GetFromCell() const;
    %Docstring
        GetFromCell() -> HtmlCell
    %End

    const wxHtmlCell * GetToCell() const;
    %Docstring
        GetToCell() -> HtmlCell
    %End

    const wxPoint & GetFromPos() const;
    %Docstring
        GetFromPos() -> wx.Point
    %End

    const wxPoint & GetToPos() const;
    %Docstring
        GetToPos() -> wx.Point
    %End

    void ClearFromToCharacterPos();
    %Docstring
        ClearFromToCharacterPos()
    %End

    bool AreFromToCharacterPosSet() const;
    %Docstring
        AreFromToCharacterPosSet() -> bool
    %End

    void SetFromCharacterPos(
        wxCoord pos
    );
    %Docstring
        SetFromCharacterPos(pos)
    %End

    void SetToCharacterPos(
        wxCoord pos
    );
    %Docstring
        SetToCharacterPos(pos)
    %End

    wxCoord GetFromCharacterPos() const;
    %Docstring
        GetFromCharacterPos() -> Coord
    %End

    wxCoord GetToCharacterPos() const;
    %Docstring
        GetToCharacterPos() -> Coord
    %End

    bool IsEmpty() const;
    %Docstring
        IsEmpty() -> bool
    %End

    public:


    %Property(name=FromCell, get=GetFromCell)
    %Property(name=FromCharacterPos, get=GetFromCharacterPos, set=SetFromCharacterPos)
    %Property(name=FromPos, get=GetFromPos)
    %Property(name=ToCell, get=GetToCell)
    %Property(name=ToCharacterPos, get=GetToCharacterPos, set=SetToCharacterPos)
    %Property(name=ToPos, get=GetToPos)
};  // end of class wxHtmlSelection


class wxHtmlRenderingState
{
    %Docstring
        HtmlRenderingState()
        
        Selection state is passed to wxHtmlCell::Draw so that it can render
        itself differently e.g.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlRenderingState();

    void SetSelectionState(
        wxHtmlSelectionState s
    );
    %Docstring
        SetSelectionState(s)
    %End

    wxHtmlSelectionState GetSelectionState() const;
    %Docstring
        GetSelectionState() -> HtmlSelectionState
    %End

    void SetFgColour(
        const wxColour & c
    );
    %Docstring
        SetFgColour(c)
    %End

    const wxColour & GetFgColour() const;
    %Docstring
        GetFgColour() -> wx.Colour
    %End

    void SetBgColour(
        const wxColour & c
    );
    %Docstring
        SetBgColour(c)
    %End

    const wxColour & GetBgColour() const;
    %Docstring
        GetBgColour() -> wx.Colour
    %End

    void SetBgMode(
        int m
    );
    %Docstring
        SetBgMode(m)
    %End

    int GetBgMode() const;
    %Docstring
        GetBgMode() -> int
    %End

    public:


    %Property(name=BgColour, get=GetBgColour, set=SetBgColour)
    %Property(name=BgMode, get=GetBgMode, set=SetBgMode)
    %Property(name=FgColour, get=GetFgColour, set=SetFgColour)
    %Property(name=SelectionState, get=GetSelectionState, set=SetSelectionState)
};  // end of class wxHtmlRenderingState


class wxHtmlRenderingStyle
{
    %Docstring
        wxHtmlSelection is data holder with information about text selection.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    virtual
    wxColour GetSelectedTextColour(
        const wxColour & clr
    ) = 0;
    %Docstring
        GetSelectedTextColour(clr) -> wx.Colour
        
        Returns the colour to use for the selected text.
    %End

    virtual
    wxColour GetSelectedTextBgColour(
        const wxColour & clr
    ) = 0;
    %Docstring
        GetSelectedTextBgColour(clr) -> wx.Colour
        
        Returns the colour to use for the selected text's background.
    %End

};  // end of class wxHtmlRenderingStyle


class wxHtmlRenderingInfo
{
    %Docstring
        HtmlRenderingInfo()
        
        This class contains information given to cells when drawing them.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlRenderingInfo();

    void SetSelection(
        wxHtmlSelection * s
    );
    %Docstring
        SetSelection(s)
        
        Accessors.
    %End

    wxHtmlSelection * GetSelection() const;
    %Docstring
        GetSelection() -> HtmlSelection
        
        Accessors.
    %End

    void SetStyle(
        wxHtmlRenderingStyle * style
    );
    %Docstring
        SetStyle(style)
        
        Accessors.
    %End

    wxHtmlRenderingStyle & GetStyle();
    %Docstring
        GetStyle() -> HtmlRenderingStyle
        
        Accessors.
    %End

    wxHtmlRenderingState & GetState();
    %Docstring
        GetState() -> HtmlRenderingState
        
        Accessors.
    %End

    public:


    %Property(name=Selection, get=GetSelection, set=SetSelection)
    %Property(name=State, get=GetState)
    %Property(name=Style, get=GetStyle, set=SetStyle)
};  // end of class wxHtmlRenderingInfo


class wxHtmlCell : wxObject
{
    %Docstring
        HtmlCell()
        
        Internal data structure.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlCell();

    virtual
    bool AdjustPagebreak(
        int * pagebreak   /In, Out/,
        int pageHeight
    ) const;
    %Docstring
        AdjustPagebreak(pagebreak, pageHeight) -> (bool, pagebreak)
        
        This method is called when paginating HTML, e.g. when printing.
    %End

    virtual
    void Draw(
        wxDC & dc,
        int x,
        int y,
        int view_y1,
        int view_y2,
        wxHtmlRenderingInfo & info
    );
    %Docstring
        Draw(dc, x, y, view_y1, view_y2, info)
        
        Renders the cell.
    %End

    virtual
    void DrawInvisible(
        wxDC & dc,
        int x,
        int y,
        wxHtmlRenderingInfo & info
    );
    %Docstring
        DrawInvisible(dc, x, y, info)
        
        This method is called instead of Draw() when the cell is certainly out
        of the screen (and thus invisible).
    %End

    virtual
    const wxHtmlCell * Find(
        int condition,
        const char* param
    ) const [ const wxHtmlCell* (int condition, const void* param) ];
    %Docstring
        Find(condition, param) -> HtmlCell
        
        Returns pointer to itself if this cell matches condition (or if any of
        the cells following in the list matches), NULL otherwise.
    %End

    virtual
    wxHtmlCell * FindCellByPos(
        wxCoord x,
        wxCoord y,
        unsigned flags = wxHTML_FIND_EXACT
    ) const;
    %Docstring
        FindCellByPos(x, y, flags=HTML_FIND_EXACT) -> HtmlCell
        
        Find a cell inside this cell positioned at the given coordinates
        (relative to this's positions).
    %End

    int GetDescent() const;
    %Docstring
        GetDescent() -> int
        
        Returns descent value of the cell (m_Descent member).
    %End

    virtual
    wxHtmlCell * GetFirstChild() const;
    %Docstring
        GetFirstChild() -> HtmlCell
        
        Returns pointer to the first cell in the list.
    %End

    int GetHeight() const;
    %Docstring
        GetHeight() -> int
        
        Returns height of the cell (m_Height member).
    %End

    const wxString & GetId() const;
    %Docstring
        GetId() -> String
        
        Returns unique cell identifier if there is any, the empty string
        otherwise.
    %End

    virtual
    wxHtmlLinkInfo * GetLink(
        int x = 0,
        int y = 0
    ) const;
    %Docstring
        GetLink(x=0, y=0) -> HtmlLinkInfo
        
        Returns hypertext link if associated with this cell or NULL otherwise.
    %End

    virtual
    wxCursor GetMouseCursor(
        wxHtmlWindowInterface * window
    ) const;
    %Docstring
        GetMouseCursor(window) -> wx.Cursor
        
        Returns cursor to show when mouse pointer is over the cell.
    %End

    virtual
    wxCursor GetMouseCursorAt(
        wxHtmlWindowInterface * window,
        const wxPoint & rePos
    ) const;
    %Docstring
        GetMouseCursorAt(window, rePos) -> wx.Cursor
        
        Returns cursor to show when mouse pointer is over the specified point.
    %End

    wxHtmlCell * GetNext() const;
    %Docstring
        GetNext() -> HtmlCell
        
        Returns pointer to the next cell in list (see htmlcell.h if you're
        interested in details).
    %End

    wxHtmlContainerCell * GetParent() const;
    %Docstring
        GetParent() -> HtmlContainerCell
        
        Returns pointer to parent container.
    %End

    int GetPosX() const;
    %Docstring
        GetPosX() -> int
        
        Returns X position within parent (the value is relative to parent's
        upper left corner).
    %End

    int GetPosY() const;
    %Docstring
        GetPosY() -> int
        
        Returns Y position within parent (the value is relative to parent's
        upper left corner).
    %End

    int GetWidth() const;
    %Docstring
        GetWidth() -> int
        
        Returns width of the cell (m_Width member).
    %End

    virtual
    void Layout(
        int w
    );
    %Docstring
        Layout(w)
        
        Layouts the cell.
    %End

    virtual
    bool ProcessMouseClick(
        wxHtmlWindowInterface * window,
        const wxPoint & pos,
        const wxMouseEvent & event
    );
    %Docstring
        ProcessMouseClick(window, pos, event) -> bool
        
        This function is simple event handler.
    %End

    void SetId(
        const wxString & id
    );
    %Docstring
        SetId(id)
        
        Sets unique cell identifier.
    %End

    void SetLink(
        const wxHtmlLinkInfo & link
    );
    %Docstring
        SetLink(link)
        
        Sets the hypertext link associated with this cell.
    %End

    void SetNext(
        wxHtmlCell * cell   /Transfer/
    );
    %Docstring
        SetNext(cell)
        
        Sets the next cell in the list.
    %End

    void SetParent(
        wxHtmlContainerCell * p
    );
    %Docstring
        SetParent(p)
        
        Sets parent container of this cell.
    %End

    virtual
    void SetPos(
        int x,
        int y
    );
    %Docstring
        SetPos(x, y)
        
        Sets the cell's position within parent container.
    %End

    virtual
    wxString ConvertToText(
        wxHtmlSelection * sel
    ) const;
    %Docstring
        ConvertToText(sel) -> String
        
        Converts the cell into text representation.
    %End

    private:
        wxHtmlCell(const wxHtmlCell&);


    wxPoint GetAbsPos(
        wxHtmlCell* rootCell = NULL
    ) const;
    %Docstring
        GetAbsPos(rootCell=None) -> wx.Point
    %End

    wxHtmlCell* GetRootCell() const;
    %Docstring
        GetRootCell() -> HtmlCell
    %End

    public:


    %Property(name=AbsPos, get=GetAbsPos)
    %Property(name=Descent, get=GetDescent)
    %Property(name=FirstChild, get=GetFirstChild)
    %Property(name=Height, get=GetHeight)
    %Property(name=Id, get=GetId, set=SetId)
    %Property(name=Link, get=GetLink, set=SetLink)
    %Property(name=Next, get=GetNext, set=SetNext)
    %Property(name=Parent, get=GetParent, set=SetParent)
    %Property(name=PosX, get=GetPosX)
    %Property(name=PosY, get=GetPosY)
    %Property(name=RootCell, get=GetRootCell)
    %Property(name=Width, get=GetWidth)
};  // end of class wxHtmlCell


class wxHtmlContainerCell : wxHtmlCell
{
    %Docstring
        HtmlContainerCell(parent)
        
        The wxHtmlContainerCell class is an implementation of a cell that may
        contain more cells in it.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlContainerCell(
        wxHtmlContainerCell * parent
    );

    void Detach(
        wxHtmlCell * cell
    );
    %Docstring
        Detach(cell)
        
        Detach a child cell.
    %End

    int GetAlignHor() const;
    %Docstring
        GetAlignHor() -> int
        
        Returns container's horizontal alignment.
    %End

    int GetAlignVer() const;
    %Docstring
        GetAlignVer() -> int
        
        Returns container's vertical alignment.
    %End

    wxColour GetBackgroundColour();
    %Docstring
        GetBackgroundColour() -> wx.Colour
        
        Returns the background colour of the container or wxNullColour if no
        background colour is set.
    %End

    int GetIndent(
        int ind
    ) const;
    %Docstring
        GetIndent(ind) -> int
        
        Returns the indentation.
    %End

    int GetIndentUnits(
        int ind
    ) const;
    %Docstring
        GetIndentUnits(ind) -> int
        
        Returns the units of indentation for ind where ind is one of the
        wxHTML_INDENT_* constants.
    %End

    void InsertCell(
        wxHtmlCell * cell   /Transfer/
    );
    %Docstring
        InsertCell(cell)
        
        Inserts a new cell into the container.
    %End

    void SetAlign(
        const wxHtmlTag & tag
    );
    %Docstring
        SetAlign(tag)
        
        Sets the container's alignment (both horizontal and vertical)
        according to the values stored in tag.
    %End

    void SetAlignHor(
        int al
    );
    %Docstring
        SetAlignHor(al)
        
        Sets the container's horizontal alignment.
    %End

    void SetAlignVer(
        int al
    );
    %Docstring
        SetAlignVer(al)
        
        Sets the container's vertical alignment.
    %End

    void SetBackgroundColour(
        const wxColour & clr
    );
    %Docstring
        SetBackgroundColour(clr)
        
        Sets the background colour for this container.
    %End

    void SetBorder(
        const wxColour & clr1,
        const wxColour & clr2,
        int border = 1
    );
    %Docstring
        SetBorder(clr1, clr2, border=1)
        
        Sets the border (frame) colours.
    %End

    void SetIndent(
        int i,
        int what,
        int units = wxHTML_UNITS_PIXELS
    );
    %Docstring
        SetIndent(i, what, units=HTML_UNITS_PIXELS)
        
        Sets the indentation (free space between borders of container and
        subcells).
    %End

    void SetMinHeight(
        int h,
        int align = wxHTML_ALIGN_TOP
    );
    %Docstring
        SetMinHeight(h, align=HTML_ALIGN_TOP)
        
        Sets minimal height of the container.
    %End

    void SetWidthFloat(
        int w,
        int units
    );
    %Docstring
        SetWidthFloat(w, units)
        SetWidthFloat(tag, pixel_scale=1.0)
        
        Sets floating width adjustment.
    %End

    void SetWidthFloat(
        const wxHtmlTag & tag,
        double pixel_scale = 1.0
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


    public:


    %Property(name=AlignHor, get=GetAlignHor, set=SetAlignHor)
    %Property(name=AlignVer, get=GetAlignVer, set=SetAlignVer)
    %Property(name=BackgroundColour, get=GetBackgroundColour, set=SetBackgroundColour)
};  // end of class wxHtmlContainerCell


class wxHtmlLinkInfo : wxObject
{
    %Docstring
        HtmlLinkInfo()
        HtmlLinkInfo(href, target=wx.EmptyString)
        
        This class stores all necessary information about hypertext links (as
        represented by <A> tag in HTML documents).
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlLinkInfo();

    wxHtmlLinkInfo(
        const wxString & href,
        const wxString & target = wxEmptyString
    );

    const wxMouseEvent * GetEvent() const;
    %Docstring
        GetEvent() -> wx.MouseEvent
        
        Return pointer to event that generated OnLinkClicked() event.
    %End

    wxString GetHref() const;
    %Docstring
        GetHref() -> String
        
        Return HREF value of the <A> tag.
    %End

    const wxHtmlCell * GetHtmlCell() const;
    %Docstring
        GetHtmlCell() -> HtmlCell
        
        Return pointer to the cell that was clicked.
    %End

    wxString GetTarget() const;
    %Docstring
        GetTarget() -> String
        
        Return TARGET value of the <A> tag (this value is used to specify in
        which frame should be the page pointed by GetHref() Href opened).
    %End

    public:


    %Property(name=Event, get=GetEvent)
    %Property(name=Href, get=GetHref)
    %Property(name=HtmlCell, get=GetHtmlCell)
    %Property(name=Target, get=GetTarget)
};  // end of class wxHtmlLinkInfo


class wxHtmlColourCell : wxHtmlCell
{
    %Docstring
        HtmlColourCell(clr, flags=HTML_CLR_FOREGROUND)
        
        This cell changes the colour of either the background or the
        foreground.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlColourCell(
        const wxColour & clr,
        int flags = wxHTML_CLR_FOREGROUND
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


};  // end of class wxHtmlColourCell


class wxHtmlWidgetCell : wxHtmlCell
{
    %Docstring
        HtmlWidgetCell(wnd, w=0)
        
        wxHtmlWidgetCell is a class that provides a connection between HTML
        cells and widgets (an object derived from wxWindow).
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlWidgetCell(
        wxWindow * wnd,
        int w = 0
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


};  // end of class wxHtmlWidgetCell


class wxHtmlWordCell : wxHtmlCell
{
    %Docstring
        HtmlWordCell(word, dc)
        
        This html cell represents a single word or text fragment in the
        document stream.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlWordCell(
        const wxString & word,
        const wxDC & dc
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


};  // end of class wxHtmlWordCell


class wxHtmlWordWithTabsCell : wxHtmlWordCell
{
    %Docstring
        HtmlWordWithTabsCell(word, wordOrig, linepos, dc)
        
        wxHtmlWordCell is a specialization for storing text fragments with
        embedded tab characters.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlWordWithTabsCell(
        const wxString & word,
        const wxString & wordOrig,
        size_t linepos,
        const wxDC & dc
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


};  // end of class wxHtmlWordWithTabsCell


class wxHtmlFontCell : wxHtmlCell
{
    %Docstring
        HtmlFontCell(font)
        
        This cell represents a font change in the document stream.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlcell.h>
    %End

public:
    wxHtmlFontCell(
        wxFont * font
    );

            virtual void Draw(wxDC& dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo& info);
            virtual void DrawInvisible(wxDC& dc, int x , int y, wxHtmlRenderingInfo& info);
            virtual wxCursor GetMouseCursor(wxHtmlWindowInterface* window) const;
            virtual void Layout(int w);


};  // end of class wxHtmlFontCell



//---------------------------------------------------------------------------

