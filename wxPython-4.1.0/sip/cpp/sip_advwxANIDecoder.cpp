/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_adv.h"

        #include <wx/anidecod.h>

        #include <wx/stream.h>
        #include <wx/colour.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/image.h>
        #include <wx/animdecod.h>


class sipwxANIDecoder : public  ::wxANIDecoder
{
public:
    sipwxANIDecoder();
    virtual ~sipwxANIDecoder();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_DoCanRead(bool, ::wxInputStream&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool Load( ::wxInputStream&) SIP_OVERRIDE;
     ::wxAnimationDecoder* Clone() const SIP_OVERRIDE;
     ::wxAnimationType GetType() const SIP_OVERRIDE;
    bool ConvertToImage(uint, ::wxImage*) const SIP_OVERRIDE;
     ::wxSize GetFrameSize(uint) const SIP_OVERRIDE;
     ::wxPoint GetFramePosition(uint) const SIP_OVERRIDE;
     ::wxAnimationDisposal GetDisposalMethod(uint) const SIP_OVERRIDE;
    long GetDelay(uint) const SIP_OVERRIDE;
     ::wxColour GetTransparentColour(uint) const SIP_OVERRIDE;
    bool DoCanRead( ::wxInputStream&) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxANIDecoder(const sipwxANIDecoder &);
    sipwxANIDecoder &operator = (const sipwxANIDecoder &);

    char sipPyMethods[10];
};

sipwxANIDecoder::sipwxANIDecoder():  ::wxANIDecoder(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxANIDecoder::~sipwxANIDecoder()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxANIDecoder::Load( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_Load);

    if (!sipMeth)
        return  ::wxANIDecoder::Load(stream);

    extern bool sipVH__adv_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__adv_37(sipGILState, 0, sipPySelf, sipMeth, stream);
}

 ::wxAnimationDecoder* sipwxANIDecoder::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxANIDecoder::Clone();

    extern  ::wxAnimationDecoder* sipVH__adv_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__adv_38(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxAnimationType sipwxANIDecoder::GetType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_GetType);

    if (!sipMeth)
        return  ::wxANIDecoder::GetType();

    extern  ::wxAnimationType sipVH__adv_39(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__adv_39(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxANIDecoder::ConvertToImage(uint frame, ::wxImage*image) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,SIP_NULLPTR,sipName_ConvertToImage);

    if (!sipMeth)
        return  ::wxANIDecoder::ConvertToImage(frame,image);

    extern bool sipVH__adv_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint, ::wxImage*);

    return sipVH__adv_40(sipGILState, 0, sipPySelf, sipMeth, frame, image);
}

 ::wxSize sipwxANIDecoder::GetFrameSize(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,SIP_NULLPTR,sipName_GetFrameSize);

    if (!sipMeth)
        return  ::wxANIDecoder::GetFrameSize(frame);

    extern  ::wxSize sipVH__adv_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_41(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxPoint sipwxANIDecoder::GetFramePosition(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,SIP_NULLPTR,sipName_GetFramePosition);

    if (!sipMeth)
        return  ::wxANIDecoder::GetFramePosition(frame);

    extern  ::wxPoint sipVH__adv_42(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_42(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxAnimationDisposal sipwxANIDecoder::GetDisposalMethod(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,SIP_NULLPTR,sipName_GetDisposalMethod);

    if (!sipMeth)
        return  ::wxANIDecoder::GetDisposalMethod(frame);

    extern  ::wxAnimationDisposal sipVH__adv_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_43(sipGILState, 0, sipPySelf, sipMeth, frame);
}

long sipwxANIDecoder::GetDelay(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_GetDelay);

    if (!sipMeth)
        return  ::wxANIDecoder::GetDelay(frame);

    extern long sipVH__adv_44(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_44(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxColour sipwxANIDecoder::GetTransparentColour(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,SIP_NULLPTR,sipName_GetTransparentColour);

    if (!sipMeth)
        return  ::wxANIDecoder::GetTransparentColour(frame);

    extern  ::wxColour sipVH__adv_45(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_45(sipGILState, 0, sipPySelf, sipMeth, frame);
}

bool sipwxANIDecoder::DoCanRead( ::wxInputStream& stream) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,SIP_NULLPTR,sipName_DoCanRead);

    if (!sipMeth)
        return  ::wxANIDecoder::DoCanRead(stream);

    extern bool sipVH__adv_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__adv_37(sipGILState, 0, sipPySelf, sipMeth, stream);
}

bool sipwxANIDecoder::sipProtectVirt_DoCanRead(bool sipSelfWasArg, ::wxInputStream& stream) const
{
    return (sipSelfWasArg ?  ::wxANIDecoder::DoCanRead(stream) : DoCanRead(stream));
}


PyDoc_STRVAR(doc_wxANIDecoder_Load, "Load(stream) -> bool\n"
"\n"
"Load the animation image frames from the given stream.");

extern "C" {static PyObject *meth_wxANIDecoder_Load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_Load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
         ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxANIDecoder, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::Load(*stream) : sipCpp->Load(*stream));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_Load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_Clone, "Clone() -> AnimationDecoder\n"
"\n"
"Create a copy of this decoder.");

extern "C" {static PyObject *meth_wxANIDecoder_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxANIDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxANIDecoder, &sipCpp))
        {
             ::wxAnimationDecoder*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxAnimationDecoder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_Clone, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetType, "GetType() -> AnimationType\n"
"\n"
"Return the animation type this decoder implements.");

extern "C" {static PyObject *meth_wxANIDecoder_GetType(PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxANIDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxANIDecoder, &sipCpp))
        {
             ::wxAnimationType sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetType() : sipCpp->GetType());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxAnimationType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_ConvertToImage, "ConvertToImage(frame, image) -> bool\n"
"\n"
"Convert given frame to wxImage.");

extern "C" {static PyObject *meth_wxANIDecoder_ConvertToImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_ConvertToImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
         ::wxImage* image;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BuJ8", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame, sipType_wxImage, &image))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::ConvertToImage(frame,image) : sipCpp->ConvertToImage(frame,image));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_ConvertToImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetFrameSize, "GetFrameSize(frame) -> wx.Size");

extern "C" {static PyObject *meth_wxANIDecoder_GetFrameSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetFrameSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetFrameSize(frame) : sipCpp->GetFrameSize(frame)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetFrameSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetFramePosition, "GetFramePosition(frame) -> wx.Point");

extern "C" {static PyObject *meth_wxANIDecoder_GetFramePosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetFramePosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetFramePosition(frame) : sipCpp->GetFramePosition(frame)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetFramePosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetDisposalMethod, "GetDisposalMethod(frame) -> AnimationDisposal\n"
"\n"
"What should be done after displaying this frame.");

extern "C" {static PyObject *meth_wxANIDecoder_GetDisposalMethod(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetDisposalMethod(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame))
        {
             ::wxAnimationDisposal sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetDisposalMethod(frame) : sipCpp->GetDisposalMethod(frame));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxAnimationDisposal);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetDisposalMethod, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetDelay, "GetDelay(frame) -> long\n"
"\n"
"Return the number of milliseconds this frame should be displayed.");

extern "C" {static PyObject *meth_wxANIDecoder_GetDelay(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetDelay(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetDelay(frame) : sipCpp->GetDelay(frame));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetDelay, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_GetTransparentColour, "GetTransparentColour(frame) -> wx.Colour\n"
"\n"
"The transparent colour for this frame, if any, or wxNullColour.");

extern "C" {static PyObject *meth_wxANIDecoder_GetTransparentColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_GetTransparentColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        uint frame;
        const  ::wxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxANIDecoder, &sipCpp, &frame))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour((sipSelfWasArg ? sipCpp-> ::wxANIDecoder::GetTransparentColour(frame) : sipCpp->GetTransparentColour(frame)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_GetTransparentColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxANIDecoder_DoCanRead, "DoCanRead(stream) -> bool\n"
"\n"
"Checks the signature of the data in the given stream and returns true\n"
"if it appears to be a valid animation format recognized by the\n"
"animation decoder; this function should modify the stream current\n"
"position without taking care of restoring it since CanRead() will do\n"
"it.");

extern "C" {static PyObject *meth_wxANIDecoder_DoCanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxANIDecoder_DoCanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        const sipwxANIDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxANIDecoder, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DoCanRead(sipSelfWasArg,*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ANIDecoder, sipName_DoCanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxANIDecoder(void *, const sipTypeDef *);}
static void *cast_wxANIDecoder(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxANIDecoder *sipCpp = reinterpret_cast< ::wxANIDecoder *>(sipCppV);

    if (targetType == sipType_wxAnimationDecoder)
        return static_cast< ::wxAnimationDecoder *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxANIDecoder(void *, int);}
static void release_wxANIDecoder(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxANIDecoder *>(sipCppV);
    else
        delete reinterpret_cast< ::wxANIDecoder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxANIDecoder(sipSimpleWrapper *);}
static void dealloc_wxANIDecoder(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxANIDecoder *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxANIDecoder(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxANIDecoder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxANIDecoder(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxANIDecoder *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxANIDecoder();
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
static sipEncodedTypeDef supers_wxANIDecoder[] = {{4, 255, 1}};


static PyMethodDef methods_wxANIDecoder[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxANIDecoder_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxANIDecoder_Clone)},
    {SIP_MLNAME_CAST(sipName_ConvertToImage), SIP_MLMETH_CAST(meth_wxANIDecoder_ConvertToImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_ConvertToImage)},
    {SIP_MLNAME_CAST(sipName_DoCanRead), SIP_MLMETH_CAST(meth_wxANIDecoder_DoCanRead), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_DoCanRead)},
    {SIP_MLNAME_CAST(sipName_GetDelay), SIP_MLMETH_CAST(meth_wxANIDecoder_GetDelay), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetDelay)},
    {SIP_MLNAME_CAST(sipName_GetDisposalMethod), SIP_MLMETH_CAST(meth_wxANIDecoder_GetDisposalMethod), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetDisposalMethod)},
    {SIP_MLNAME_CAST(sipName_GetFramePosition), SIP_MLMETH_CAST(meth_wxANIDecoder_GetFramePosition), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetFramePosition)},
    {SIP_MLNAME_CAST(sipName_GetFrameSize), SIP_MLMETH_CAST(meth_wxANIDecoder_GetFrameSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetFrameSize)},
    {SIP_MLNAME_CAST(sipName_GetTransparentColour), SIP_MLMETH_CAST(meth_wxANIDecoder_GetTransparentColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetTransparentColour)},
    {SIP_MLNAME_CAST(sipName_GetType), meth_wxANIDecoder_GetType, METH_VARARGS, SIP_MLDOC_CAST(doc_wxANIDecoder_GetType)},
    {SIP_MLNAME_CAST(sipName_Load), SIP_MLMETH_CAST(meth_wxANIDecoder_Load), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxANIDecoder_Load)}
};

sipVariableDef variables_wxANIDecoder[] = {
    {PropertyVariable, sipName_Type, &methods_wxANIDecoder[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxANIDecoder, "ANIDecoder()\n"
"\n"
"An animation decoder supporting animated cursor (.ani) files.");


sipClassTypeDef sipTypeDef__adv_wxANIDecoder = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxANIDecoder,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ANIDecoder,
        {0, 0, 1},
        10, methods_wxANIDecoder,
        0, SIP_NULLPTR,
        1, variables_wxANIDecoder,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxANIDecoder,
    -1,
    -1,
    supers_wxANIDecoder,
    SIP_NULLPTR,
    init_type_wxANIDecoder,
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
    dealloc_wxANIDecoder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxANIDecoder,
    cast_wxANIDecoder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};