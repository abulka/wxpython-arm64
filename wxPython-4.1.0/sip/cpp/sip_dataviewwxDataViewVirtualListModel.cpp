/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_dataview.h"

        #include <wx/dataview.h>

        #include <wx/dataview.h>
        #include <wx/dataview.h>
        #include <wx/dataview.h>


class sipwxDataViewVirtualListModel : public  ::wxDataViewVirtualListModel
{
public:
    sipwxDataViewVirtualListModel(uint);
    virtual ~sipwxDataViewVirtualListModel();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool IsVirtualListModel() const SIP_OVERRIDE;
    bool IsListModel() const SIP_OVERRIDE;
    bool SetValue(const  ::wxDVCVariant&,const  ::wxDataViewItem&,uint) SIP_OVERRIDE;
    void Resort() SIP_OVERRIDE;
    bool IsContainer(const  ::wxDataViewItem&) const SIP_OVERRIDE;
    bool HasDefaultCompare() const SIP_OVERRIDE;
    bool HasContainerColumns(const  ::wxDataViewItem&) const SIP_OVERRIDE;
     ::wxDataViewItem GetParent(const  ::wxDataViewItem&) const SIP_OVERRIDE;
     ::wxString GetColumnType(uint) const SIP_OVERRIDE;
    uint GetColumnCount() const SIP_OVERRIDE;
    uint GetChildren(const  ::wxDataViewItem&, ::wxDataViewItemArray&) const SIP_OVERRIDE;
    bool IsEnabled(const  ::wxDataViewItem&,uint) const SIP_OVERRIDE;
    bool GetAttr(const  ::wxDataViewItem&,uint, ::wxDataViewItemAttr&) const SIP_OVERRIDE;
    int Compare(const  ::wxDataViewItem&,const  ::wxDataViewItem&,uint,bool) const SIP_OVERRIDE;
    bool GetAttrByRow(uint,uint, ::wxDataViewItemAttr&) const SIP_OVERRIDE;
    bool IsEnabledByRow(uint,uint) const SIP_OVERRIDE;
    uint GetCount() const SIP_OVERRIDE;
    uint GetRow(const  ::wxDataViewItem&) const SIP_OVERRIDE;
    void GetValueByRow( ::wxVariant&,uint,uint) const SIP_OVERRIDE;
    bool SetValueByRow(const  ::wxDVCVariant&,uint,uint) SIP_OVERRIDE;
    void GetValue( ::wxDVCVariant&,const  ::wxDataViewItem&,uint) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxDataViewVirtualListModel(const sipwxDataViewVirtualListModel &);
    sipwxDataViewVirtualListModel &operator = (const sipwxDataViewVirtualListModel &);

    char sipPyMethods[21];
};

sipwxDataViewVirtualListModel::sipwxDataViewVirtualListModel(uint initial_size):  ::wxDataViewVirtualListModel(initial_size), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDataViewVirtualListModel::~sipwxDataViewVirtualListModel()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxDataViewVirtualListModel::IsVirtualListModel() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_IsVirtualListModel);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::IsVirtualListModel();

    extern bool sipVH__dataview_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__dataview_0(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxDataViewVirtualListModel::IsListModel() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_IsListModel);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::IsListModel();

    extern bool sipVH__dataview_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__dataview_0(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxDataViewVirtualListModel::SetValue(const  ::wxDVCVariant& variant,const  ::wxDataViewItem& item,uint col)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_SetValue);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::SetValue(variant,item,col);

    extern bool sipVH__dataview_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDVCVariant&,const  ::wxDataViewItem&,uint);

    return sipVH__dataview_14(sipGILState, 0, sipPySelf, sipMeth, variant, item, col);
}

void sipwxDataViewVirtualListModel::Resort()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_Resort);

    if (!sipMeth)
    {
         ::wxDataViewVirtualListModel::Resort();
        return;
    }

    extern void sipVH__dataview_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__dataview_5(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxDataViewVirtualListModel::IsContainer(const  ::wxDataViewItem& item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,SIP_NULLPTR,sipName_IsContainer);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::IsContainer(item);

    extern bool sipVH__dataview_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&);

    return sipVH__dataview_2(sipGILState, 0, sipPySelf, sipMeth, item);
}

bool sipwxDataViewVirtualListModel::HasDefaultCompare() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,SIP_NULLPTR,sipName_HasDefaultCompare);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::HasDefaultCompare();

    extern bool sipVH__dataview_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__dataview_0(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxDataViewVirtualListModel::HasContainerColumns(const  ::wxDataViewItem& item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,SIP_NULLPTR,sipName_HasContainerColumns);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::HasContainerColumns(item);

    extern bool sipVH__dataview_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&);

    return sipVH__dataview_2(sipGILState, 0, sipPySelf, sipMeth, item);
}

 ::wxDataViewItem sipwxDataViewVirtualListModel::GetParent(const  ::wxDataViewItem& item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_GetParent);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetParent(item);

    extern  ::wxDataViewItem sipVH__dataview_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&);

    return sipVH__dataview_12(sipGILState, 0, sipPySelf, sipMeth, item);
}

 ::wxString sipwxDataViewVirtualListModel::GetColumnType(uint col) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_DataViewVirtualListModel,sipName_GetColumnType);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__dataview_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__dataview_11(sipGILState, 0, sipPySelf, sipMeth, col);
}

uint sipwxDataViewVirtualListModel::GetColumnCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_DataViewVirtualListModel,sipName_GetColumnCount);

    if (!sipMeth)
        return 0;

    extern uint sipVH__dataview_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__dataview_10(sipGILState, 0, sipPySelf, sipMeth);
}

uint sipwxDataViewVirtualListModel::GetChildren(const  ::wxDataViewItem& item, ::wxDataViewItemArray& children) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,SIP_NULLPTR,sipName_GetChildren);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetChildren(item,children);

    extern uint sipVH__dataview_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&, ::wxDataViewItemArray&);

    return sipVH__dataview_9(sipGILState, 0, sipPySelf, sipMeth, item, children);
}

bool sipwxDataViewVirtualListModel::IsEnabled(const  ::wxDataViewItem& item,uint col) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,SIP_NULLPTR,sipName_IsEnabled);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::IsEnabled(item,col);

    extern bool sipVH__dataview_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&,uint);

    return sipVH__dataview_6(sipGILState, 0, sipPySelf, sipMeth, item, col);
}

bool sipwxDataViewVirtualListModel::GetAttr(const  ::wxDataViewItem& item,uint col, ::wxDataViewItemAttr& attr) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,SIP_NULLPTR,sipName_GetAttr);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetAttr(item,col,attr);

    extern bool sipVH__dataview_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&,uint, ::wxDataViewItemAttr&);

    return sipVH__dataview_8(sipGILState, 0, sipPySelf, sipMeth, item, col, attr);
}

int sipwxDataViewVirtualListModel::Compare(const  ::wxDataViewItem& item1,const  ::wxDataViewItem& item2,uint column,bool ascending) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,SIP_NULLPTR,sipName_Compare);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::Compare(item1,item2,column,ascending);

    extern int sipVH__dataview_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&,const  ::wxDataViewItem&,uint,bool);

    return sipVH__dataview_7(sipGILState, 0, sipPySelf, sipMeth, item1, item2, column, ascending);
}

bool sipwxDataViewVirtualListModel::GetAttrByRow(uint row,uint col, ::wxDataViewItemAttr& attr) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,SIP_NULLPTR,sipName_GetAttrByRow);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetAttrByRow(row,col,attr);

    extern bool sipVH__dataview_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint,uint, ::wxDataViewItemAttr&);

    return sipVH__dataview_15(sipGILState, 0, sipPySelf, sipMeth, row, col, attr);
}

bool sipwxDataViewVirtualListModel::IsEnabledByRow(uint row,uint col) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,SIP_NULLPTR,sipName_IsEnabledByRow);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::IsEnabledByRow(row,col);

    extern bool sipVH__dataview_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint,uint);

    return sipVH__dataview_16(sipGILState, 0, sipPySelf, sipMeth, row, col);
}

uint sipwxDataViewVirtualListModel::GetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,SIP_NULLPTR,sipName_GetCount);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetCount();

    extern uint sipVH__dataview_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__dataview_10(sipGILState, 0, sipPySelf, sipMeth);
}

uint sipwxDataViewVirtualListModel::GetRow(const  ::wxDataViewItem& item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,SIP_NULLPTR,sipName_GetRow);

    if (!sipMeth)
        return  ::wxDataViewVirtualListModel::GetRow(item);

    extern uint sipVH__dataview_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataViewItem&);

    return sipVH__dataview_17(sipGILState, 0, sipPySelf, sipMeth, item);
}

void sipwxDataViewVirtualListModel::GetValueByRow( ::wxVariant& variant,uint row,uint col) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,sipName_DataViewVirtualListModel,sipName_GetValueByRow);

    if (!sipMeth)
        return;

    extern void sipVH__dataview_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxVariant&,uint,uint);

    sipVH__dataview_18(sipGILState, 0, sipPySelf, sipMeth, variant, row, col);
}

bool sipwxDataViewVirtualListModel::SetValueByRow(const  ::wxDVCVariant& variant,uint row,uint col)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,sipName_DataViewVirtualListModel,sipName_SetValueByRow);

    if (!sipMeth)
        return 0;

    extern bool sipVH__dataview_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDVCVariant&,uint,uint);

    return sipVH__dataview_19(sipGILState, 0, sipPySelf, sipMeth, variant, row, col);
}

void sipwxDataViewVirtualListModel::GetValue( ::wxDVCVariant& variant,const  ::wxDataViewItem& item,uint col) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,SIP_NULLPTR,sipName_GetValue);

    if (!sipMeth)
    {
         ::wxDataViewVirtualListModel::GetValue(variant,item,col);
        return;
    }

    extern void sipVH__dataview_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDVCVariant&,const  ::wxDataViewItem&,uint);

    sipVH__dataview_20(sipGILState, 0, sipPySelf, sipMeth, variant, item, col);
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_GetItem, "GetItem(row) -> DataViewItem\n"
"\n"
"Returns the wxDataViewItem at the given row.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_GetItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_GetItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint row;
        const  ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &row))
        {
             ::wxDataViewItem*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxDataViewItem(sipCpp->GetItem(row));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxDataViewItem,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_GetItem, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_Reset, "Reset(new_size)\n"
"\n"
"Call this after if the data has to be read again from the model.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_Reset(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_Reset(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint new_size;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_new_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &new_size))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Reset(new_size);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_Reset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowAppended, "RowAppended()\n"
"\n"
"Call this after a row has been appended to the model.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowAppended(PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowAppended(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDataViewVirtualListModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowAppended();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowAppended, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowChanged, "RowChanged(row)\n"
"\n"
"Call this after a row has been changed.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowChanged(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowChanged(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint row;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &row))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowChanged(row);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowChanged, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowDeleted, "RowDeleted(row)\n"
"\n"
"Call this after a row has been deleted.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowDeleted(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowDeleted(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint row;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &row))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowDeleted(row);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowDeleted, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowInserted, "RowInserted(before)\n"
"\n"
"Call this after a row has been inserted at the given position.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowInserted(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowInserted(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint before;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_before,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &before))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowInserted(before);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowInserted, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowPrepended, "RowPrepended()\n"
"\n"
"Call this after a row has been prepended to the model.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowPrepended(PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowPrepended(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDataViewVirtualListModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowPrepended();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowPrepended, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowValueChanged, "RowValueChanged(row, col)\n"
"\n"
"Call this after a value has been changed.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowValueChanged(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowValueChanged(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint row;
        uint col;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Buu", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, &row, &col))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowValueChanged(row,col);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowValueChanged, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_RowsDeleted, "RowsDeleted(rows)\n"
"\n"
"Call this after rows have been deleted.");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_RowsDeleted(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_RowsDeleted(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxArrayInt* rows;
        int rowsState = 0;
         ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_rows,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, sipType_wxArrayInt,&rows, &rowsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RowsDeleted(*rows);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxArrayInt *>(rows),sipType_wxArrayInt,rowsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_RowsDeleted, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_GetRow, "GetRow(self, item: DataViewItem) -> int");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_GetRow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_GetRow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataViewItem* item;
        const  ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_item,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, sipType_wxDataViewItem, &item))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDataViewVirtualListModel::GetRow(*item) : sipCpp->GetRow(*item));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_GetRow, doc_wxDataViewVirtualListModel_GetRow);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataViewVirtualListModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDataViewVirtualListModel::GetCount() : sipCpp->GetCount());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_GetCount, doc_wxDataViewVirtualListModel_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataViewVirtualListModel_GetChildren, "GetChildren(self, item: DataViewItem, children: DataViewItemArray) -> int");

extern "C" {static PyObject *meth_wxDataViewVirtualListModel_GetChildren(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataViewVirtualListModel_GetChildren(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataViewItem* item;
         ::wxDataViewItemArray* children;
        const  ::wxDataViewVirtualListModel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_item,
            sipName_children,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9", &sipSelf, sipType_wxDataViewVirtualListModel, &sipCpp, sipType_wxDataViewItem, &item, sipType_wxDataViewItemArray, &children))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDataViewVirtualListModel::GetChildren(*item,*children) : sipCpp->GetChildren(*item,*children));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataViewVirtualListModel, sipName_GetChildren, doc_wxDataViewVirtualListModel_GetChildren);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxDataViewVirtualListModel(void *, const sipTypeDef *);}
static void *cast_wxDataViewVirtualListModel(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxDataViewVirtualListModel *sipCpp = reinterpret_cast< ::wxDataViewVirtualListModel *>(sipCppV);

    if (targetType == sipType_wxDataViewListModel)
        return static_cast< ::wxDataViewListModel *>(sipCpp);

    if (targetType == sipType_wxDataViewModel)
        return static_cast< ::wxDataViewModel *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDataViewVirtualListModel(void *, int);}
static void release_wxDataViewVirtualListModel(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDataViewVirtualListModel *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDataViewVirtualListModel *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDataViewVirtualListModel(sipSimpleWrapper *);}
static void dealloc_wxDataViewVirtualListModel(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDataViewVirtualListModel *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDataViewVirtualListModel(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDataViewVirtualListModel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDataViewVirtualListModel(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDataViewVirtualListModel *sipCpp = SIP_NULLPTR;

    {
        uint initial_size = 0;

        static const char *sipKwdList[] = {
            sipName_initial_size,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|u", &initial_size))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDataViewVirtualListModel(initial_size);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxDataViewVirtualListModel[] = {{19, 255, 1}};


static PyMethodDef methods_wxDataViewVirtualListModel[] = {
    {SIP_MLNAME_CAST(sipName_GetChildren), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_GetChildren), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_GetChildren)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxDataViewVirtualListModel_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetItem), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_GetItem), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_GetItem)},
    {SIP_MLNAME_CAST(sipName_GetRow), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_GetRow), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_GetRow)},
    {SIP_MLNAME_CAST(sipName_Reset), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_Reset), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_Reset)},
    {SIP_MLNAME_CAST(sipName_RowAppended), meth_wxDataViewVirtualListModel_RowAppended, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowAppended)},
    {SIP_MLNAME_CAST(sipName_RowChanged), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_RowChanged), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowChanged)},
    {SIP_MLNAME_CAST(sipName_RowDeleted), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_RowDeleted), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowDeleted)},
    {SIP_MLNAME_CAST(sipName_RowInserted), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_RowInserted), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowInserted)},
    {SIP_MLNAME_CAST(sipName_RowPrepended), meth_wxDataViewVirtualListModel_RowPrepended, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowPrepended)},
    {SIP_MLNAME_CAST(sipName_RowValueChanged), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_RowValueChanged), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowValueChanged)},
    {SIP_MLNAME_CAST(sipName_RowsDeleted), SIP_MLMETH_CAST(meth_wxDataViewVirtualListModel_RowsDeleted), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataViewVirtualListModel_RowsDeleted)}
};

PyDoc_STRVAR(doc_wxDataViewVirtualListModel, "DataViewVirtualListModel(initial_size=0)\n"
"\n"
"wxDataViewVirtualListModel is a specialized data model which lets you\n"
"address an item by its position (row) rather than its wxDataViewItem\n"
"and as such offers the exact same interface as\n"
"wxDataViewIndexListModel.");


sipClassTypeDef sipTypeDef__dataview_wxDataViewVirtualListModel = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxDataViewVirtualListModel,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DataViewVirtualListModel,
        {0, 0, 1},
        12, methods_wxDataViewVirtualListModel,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDataViewVirtualListModel,
    -1,
    -1,
    supers_wxDataViewVirtualListModel,
    SIP_NULLPTR,
    init_type_wxDataViewVirtualListModel,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxDataViewVirtualListModel,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDataViewVirtualListModel,
    cast_wxDataViewVirtualListModel,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
