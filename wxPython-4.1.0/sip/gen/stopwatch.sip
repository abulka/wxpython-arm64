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

class wxStopWatch
{
    %Docstring
        StopWatch()
        
        The wxStopWatch class allow you to measure time intervals.
    %End
    %TypeHeaderCode
        #include <wx/stopwatch.h>
    %End

public:
    wxStopWatch();

    void Pause();
    %Docstring
        Pause()
        
        Pauses the stop watch.
    %End

    void Resume();
    %Docstring
        Resume()
        
        Resumes the stop watch which had been paused with Pause().
    %End

    void Start(
        long milliseconds = 0
    );
    %Docstring
        Start(milliseconds=0)
        
        (Re)starts the stop watch with a given initial value.
    %End

    long Time() const;
    %Docstring
        Time() -> long
        
        Returns the time in milliseconds since the start (or restart) or the
        last call of Pause().
    %End

    wxLongLong TimeInMicro() const;
    %Docstring
        TimeInMicro() -> LongLong
        
        Returns elapsed time in microseconds.
    %End

};  // end of class wxStopWatch



//---------------------------------------------------------------------------

