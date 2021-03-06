BOL PROCESSOR SOURCE CODE READ ME
=================================

Bol Processor 2 (BP2) is a program for music composition and improvisation
with real-time MIDI, MIDI file, and Csound output.  It produces music from a
set of rules (a compositional grammar) or from text scores typed or captured
from a MIDI instrument.

Bol Processor is now released as free software (open source) under a
BSD-style license (please see the License.txt file for complete terms).  
BP development is now hosted by Sourceforge at

                <http://bolprocessor.sourceforge.net/>

Developers interested in joining the project are most welcome to do so. 
Please email us for more information.

This is version 2.9.8 of the BP2 project.  This release fixes the problem
that prevented QuickDraw graphics from displaying in the Graphics window on
Intel Macs.  This fix does increase the minimum compilation requirement of
BP2 to Mac OS X 10.3.  Changes have also been made to the build process to
support checking the code out of CVS using the command-line CVS client with
new scripts for decoding and encoding the resource files.

There are two new documents of interest to developers in this directory:

	HowToBuild.txt
	HowToMakeARelease.txt

BP2 2.9.8 will only compile on Mac OS X at this time.  We are currently
using XCode 2.5 on Mac OS X 10.5.  Previously, we were using Metrowerks
CodeWarrior to compile binaries for Mac OS Classic and for Mac OS X 10.2 or
later. The last version of the source code to fully support this was 2.9.6.

One of the goals of the open-source project has been to port BP2 to other
platforms. Stage one of this process is now mostly complete and involved
porting BP2 to the Carbon API from Apple so that it could run under Mac OS
X. Stage two has been to further update the code for compatibility with
Intel Macs and the latest build tools.  The minimum amount of work needed to
complete stage two appears to be done now unless there are lurking
incompatibilities with Intel Macs that remain unfound by us.  Further
updating of BP2 to use newer Mac OS technologies such as Quartz is about to
begin.

Stage three will be to begin separating the Mac OS platform-specific code
from the computational portions of the code that can be made cross-platform,
ANSI C.  This will facilitate creating a simple command-line front end for
using BP2 in non-real-time on platforms such as Linux.  Further development
will aim to begin breaking BP2 up into modules to form several
cross-platform libraries corresponding to the major non-GUI components
(grammar productions, sound-object prototypes, the time-setting algorithm
and "MakeSound" which outputs items to various formats, etc.).  These
libraries will provide APIs so that other programs can reuse parts of "BP3",
creating new graphical interfaces that run on other platforms (Linux or
Windows) or embedding BP3 algorithms into custom tools.

If you would like to help with any stage of this process, please get in
contact with us either privately or via the mailing lists.

If you want to get started understanding the source code, look in the
"docs-developer" directory; particularly the files "BP2-info.txt" and
"BP2-history.txt".

See the doc "HowToBuild.txt" for information on which IDE project files to
use.  If you need to create your own project file for a different version of
Xcode, CodeWarrior, or a different IDE, just add all of the files in
source/BP2 to an appropriate project template.  (The other directories are
not needed).  If you are compiling for Mac OS (X), then you will also want
to add source/WASTE and the following resource files from the "resources"
and "resources/decoded_resources" directories:

	BP2-MacOS.rsrc
	Info.plist or plst-resource.plc
	dlgxs.rsrc
	MacOSFinderHelp.r
	carb.r

	CoreMIDISettings.rsrc	(Mac OS X only)

	ClassicDialogs.rsrc	(Mac OS 7/8/9 only)
	MidiSerialDriver.rsrc	(Mac OS 7/8/9 only)
	ppc-oops.rsrc           (only if compiling a PPC version)

The project still uses Mac OS Classic-style resource files instead of
Interface Builder NIBs.  Because of this, if you are compiling for Mac OS
(X), then you must either checkout the source code using a CVS client that
knows how to handle AppleSingle-encoded .rsrc files (such as MacCVS Pro) or
use the shell scripts in the "resources" directory to decode and encode
these files.  Please ask us for help if you are having trouble with this.

The file "BP2-RMaker.R" is a text version of most of the resources but the
application that compiles them came with Symantec C, so we will probably not
be maintaining this file.

If you are building an application for Mac OS 9 with CodeWarrior, you will
need to link your project to the standard Mac and ANSI libraries. In
addition, you will need to download and install the OMS SDK for Midi and
link to the "OMSGluePPC.lib" static library.  (The "OMSLibPPC.slb" shared
library should be in the system Extensions folder or in the same folder as
the BP2 application).  Depending on where you install the OMS SDK, you may
also need to add the "Headers" and "Libraries" folders to your project
Access Paths or include path.

Once you have a compiled and linked BP2 application, try running the
"+sc.checkall" script.  (You may need to do a "check script" operation first
to resolve directory differences.  Currently this script fails for me
because -gr.Visser3 is failing in beta mode).  There are also many example
files in the "data" directory.

A note regarding optimization levels:  Level 4 in CW4 requires a lot of
memory to compile.  But I had to back the optimizations down to Level 2
anyways to avoid an infinite loop when choosing "New Project" that seemed to
be caused by compiling at Level 3.

If you want to follow or contribute to the development of BP3, then you will
probably want to join the Bol Processor Development mailing list hosted with
the Sourceforge project.  See
<http://lists.sourceforge.net/mailman/listinfo/bolprocessor-devel>

Please also feel free to contact us if you have problems with compiling the
code or if you have any other questions.

Thanks for checking out Bol Processor!

Bernard Bel                           Anthony Kozar
belbernard@users.sourceforge.net      akozar@users.sourceforge.net

August 5, 2012
