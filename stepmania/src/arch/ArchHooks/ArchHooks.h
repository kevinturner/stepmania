#ifndef ARCH_HOOKS_H
#define ARCH_HOOKS_H

/*
 * I'm undecided about when it's a good idea to use arch; I'm experimenting
 * a bit.
 *
 * This arch driver is simply called at various important points, to let
 * architectures do things.  Windows can use this to start up the crash
 * handler and to output Windows-specific debug information, for example.
 *
 * This class should have one-way data transfer only: functions are called,
 * they may do something, and no data is returned.  (We don't want to have
 * to deal with error handling and so on when using these functions.)
 *
 * This class is constructed at the very start of the program.
 */
class ArchHooks
{
public:
	/* This receives all logs.  'important' is set for Warn and Info. */
	virtual void Log(CString str, bool important) { }

	/* This receives a pointer to data to be included in diagnostic output. */
	virtual void AdditionalLog(CString str) { }

	/* This is called as soon as SDL is set up, the loading window is shown
	 * and we can safely log and throw. */
	virtual void DumpDebugInfo() { }

	/* Message box stuff.  Not supported on all archs. */
	enum MessageBoxResult { abort, retry, ignore };
	virtual void MessageBoxOK( CString sMessage ) {}
	virtual MessageBoxResult MessageBoxAbortRetryIgnore( CString sMessage ) { return ignore; } 

	virtual ~ArchHooks() { }
};

#endif

/*
 * Copyright (c) 2002-2003 by the person(s) listed below.  All rights reserved.
 *
 * Glenn Maynard
 */
