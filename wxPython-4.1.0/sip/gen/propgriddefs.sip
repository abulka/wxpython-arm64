//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _propgrid.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

const int wxPG_INVALID_VALUE;
const int wxPG_BASE_OCT;
const int wxPG_BASE_DEC;
const int wxPG_BASE_HEX;
const int wxPG_BASE_HEXL;
const int wxPG_PREFIX_NONE;
const int wxPG_PREFIX_0x;
const int wxPG_PREFIX_DOLLAR_SIGN;
enum wxPG_GETPROPERTYVALUES_FLAGS
{
    wxPG_DONT_RECURSE,
    wxPG_KEEP_STRUCTURE,
    wxPG_RECURSE,
    wxPG_INC_ATTRIBUTES,
    wxPG_RECURSE_STARTS,
    wxPG_FORCE,
    wxPG_SORT_TOP_LEVEL_ONLY
};

enum wxPG_MISC_ARG_FLAGS
{
    wxPG_FULL_VALUE,
    wxPG_REPORT_ERROR,
    wxPG_PROPERTY_SPECIFIC,
    wxPG_EDITABLE_VALUE,
    wxPG_COMPOSITE_FRAGMENT,
    wxPG_UNEDITABLE_COMPOSITE_FRAGMENT,
    wxPG_VALUE_IS_CURRENT,
    wxPG_PROGRAMMATIC_VALUE
};

enum wxPG_SETVALUE_FLAGS
{
    wxPG_SETVAL_REFRESH_EDITOR,
    wxPG_SETVAL_AGGREGATED,
    wxPG_SETVAL_FROM_PARENT,
    wxPG_SETVAL_BY_USER
};

%Extract(id=pycode_propgrid, order=15)
PG_LABEL = "@!"
PG_LABEL_STRING = PG_LABEL
PG_NULL_BITMAP = wx.NullBitmap
PG_COLOUR_BLACK = wx.BLACK
PG_DEFAULT_IMAGE_SIZE = wx.Size(-1, -1)

%End


//---------------------------------------------------------------------------

