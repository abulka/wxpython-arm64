//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License

%Module( name=wx._html,
         keyword_arguments="All",
         use_argument_names=True,
         all_raise_py_exception=True,
         language="C++")
{
    %AutoPyName(remove_leading="wx")
};

%Copying
    Copyright: (c) 2020 by Total Control Software
    License:   wxWindows License
%End

%DefaultDocstringFormat(name="deindented")

%Extract(id=pycode_html, order=5)
# This file is generated by wxPython's SIP generator.  Do not edit by hand.
#
# Copyright: (c) 2020 by Total Control Software
# License:   wxWindows License

"""
This module contains a widget class and supporting classes for a generic HTML
renderer.  It supports only a subset of the HTML standards, and no Javascript
or CSS, but it is relatively lightweight and has no platform dependencies.  It
is suitable for displaying simple HTML documents, such as the application's
documentation or built-in help pages.

.. note:: Due to some internal dynamic initialization in wxWidgets, this
          module should be imported **before** the :class:`wx.App` object is
          created.
"""

from ._html import *

%End

//---------------------------------------------------------------------------

%ModuleHeaderCode
#include <wxPython/wxpy_api.h>
%End

%Import _core.sip

%Include htmldefs.sip
%Include htmlcell.sip
%Include htmlfilt.sip
%Include htmltag.sip
%Include htmlpars.sip
%Include htmlwin.sip
%Include htmlprint.sip
%Include htmlwinpars.sip
%Include helpdata.sip
%Include helpfrm.sip
%Include helpdlg.sip
%Include helpwnd.sip
%Include helpctrl.sip
%Include htmllbox.sip

%ModuleCode
        #include <wx/html/htmlwin.h>
        #include <wx/html/htmprint.h>
        #include <wx/html/helpctrl.h>
        #include <wx/html/helpwnd.h>
        #include <wx/html/helpfrm.h>
        #include <wx/html/helpdlg.h>
        
%End

//---------------------------------------------------------------------------

%Extract(id=pycode_html, order=10)
import wx

%End


//---------------------------------------------------------------------------


%InitialisationCode
        wxPyReinitializeModules();
        
%End

//---------------------------------------------------------------------------

