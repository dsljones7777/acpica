project(acpica)

set(dispatcher_sources 
	"source/components/dispatcher/dsargs.c"
	"source/components/dispatcher/dscontrol.c"
	"source/components/dispatcher/dsdebug.c"
	"source/components/dispatcher/dsfield.c"
	"source/components/dispatcher/dsinit.c"
	"source/components/dispatcher/dsmethod.c"
	"source/components/dispatcher/dsmthdat.c"
	"source/components/dispatcher/dsobject.c"
	"source/components/dispatcher/dsopcode.c"
	"source/components/dispatcher/dspkginit.c"
	"source/components/dispatcher/dsutils.c"
	"source/components/dispatcher/dswexec.c"
	"source/components/dispatcher/dswload.c"
	"source/components/dispatcher/dswload2.c"
	"source/components/dispatcher/dswscope.c"
	"source/components/dispatcher/dswstate.c")

set(event_sources 
	"source/components/events/evevent.c"
	"source/components/events/evglock.c"
	"source/components/events/evgpe.c"
	"source/components/events/evgpeblk.c"
	"source/components/events/evgpeinit.c"
	"source/components/events/evgpeutil.c"
	"source/components/events/evhandler.c"
	"source/components/events/evmisc.c"
	"source/components/events/evregion.c"
	"source/components/events/evrgnini.c"
	"source/components/events/evsci.c"
	"source/components/events/evxface.c"
	"source/components/events/evxfevnt.c"
	"source/components/events/evxfgpe.c"
	"source/components/events/evxfregn.c")

set(executer_sources 
	"source/components/executer/exconcat.c"
	"source/components/executer/exconfig.c"
	"source/components/executer/exconvrt.c"
	"source/components/executer/excreate.c"
	"source/components/executer/exdebug.c"
	"source/components/executer/exdump.c"
	"source/components/executer/exfield.c"
	"source/components/executer/exfldio.c"
	"source/components/executer/exmisc.c"
	"source/components/executer/exmutex.c"
	"source/components/executer/exnames.c"
	"source/components/executer/exoparg1.c"
	"source/components/executer/exoparg2.c"
	"source/components/executer/exoparg3.c"
	"source/components/executer/exoparg6.c"
	"source/components/executer/exprep.c"
	"source/components/executer/exregion.c"
	"source/components/executer/exresnte.c"
	"source/components/executer/exresolv.c"
	"source/components/executer/exresop.c"
	"source/components/executer/exserial.c"
	"source/components/executer/exstore.c"
	"source/components/executer/exstoren.c"
	"source/components/executer/exstorob.c"
	"source/components/executer/exsystem.c"
	"source/components/executer/extrace.c"
	"source/components/executer/exutils.c")

set(hardware_sources
	"source/components/hardware/hwacpi.c"
	"source/components/hardware/hwesleep.c"
	"source/components/hardware/hwgpe.c"
	"source/components/hardware/hwpci.c"
	"source/components/hardware/hwregs.c"
	"source/components/hardware/hwsleep.c"
	"source/components/hardware/hwtimer.c"
	"source/components/hardware/hwvalid.c"
	"source/components/hardware/hwxface.c"
	"source/components/hardware/hwxfsleep.c")

set(namespace_sources
	"source/components/namespace/nsaccess.c"
	"source/components/namespace/nsalloc.c"
	"source/components/namespace/nsarguments.c"
	"source/components/namespace/nsconvert.c"
	"source/components/namespace/nsdump.c"
	"source/components/namespace/nsdumpdv.c"
	"source/components/namespace/nseval.c"
	"source/components/namespace/nsinit.c"
	"source/components/namespace/nsload.c"
	"source/components/namespace/nsnames.c"
	"source/components/namespace/nsobject.c"
	"source/components/namespace/nsparse.c"
	"source/components/namespace/nspredef.c"
	"source/components/namespace/nsprepkg.c"
	"source/components/namespace/nsrepair.c"
	"source/components/namespace/nsrepair2.c"
	"source/components/namespace/nssearch.c"
	"source/components/namespace/nsutils.c"
	"source/components/namespace/nswalk.c"
	"source/components/namespace/nsxfeval.c"
	"source/components/namespace/nsxfname.c"
	"source/components/namespace/nsxfobj.c")

set(parser_sources
	"source/components/parser/psargs.c"
	"source/components/parser/psloop.c"
	"source/components/parser/psobject.c"
	"source/components/parser/psopcode.c"
	"source/components/parser/psopinfo.c"
	"source/components/parser/psparse.c"
	"source/components/parser/psscope.c"
	"source/components/parser/pstree.c"
	"source/components/parser/psutils.c"
	"source/components/parser/pswalk.c"
	"source/components/parser/psxface.c")

set(resource_sources
	"source/components/resources/rsaddr.c"
	"source/components/resources/rscalc.c"
	"source/components/resources/rscreate.c"
	"source/components/resources/rsdumpinfo.c"
	"source/components/resources/rsinfo.c"
	"source/components/resources/rsio.c"
	"source/components/resources/rsirq.c"
	"source/components/resources/rslist.c"
	"source/components/resources/rsmemory.c"
	"source/components/resources/rsmisc.c"
	"source/components/resources/rsserial.c"
	"source/components/resources/rsutils.c"
	"source/components/resources/rsxface.c")

if(${resource_dump})
	set(resource_sources ${resource_sources}
		"source/components/resources/rsdump.c")
endif()

set(tables_sources
	"source/components/tables/tbdata.c"
	"source/components/tables/tbfadt.c"
	"source/components/tables/tbfind.c"
	"source/components/tables/tbinstal.c"
	"source/components/tables/tbprint.c"
	"source/components/tables/tbutils.c"
	"source/components/tables/tbxface.c"
	"source/components/tables/tbxfload.c"
	"source/components/tables/tbxfroot.c")

set(utilies_sources
	"source/components/utilities/utaddress.c"
	"source/components/utilities/utalloc.c"
	"source/components/utilities/utascii.c"
	"source/components/utilities/utbuffer.c"
	"source/components/utilities/utcache.c"
	"source/components/utilities/utclib.c"
	"source/components/utilities/utcopy.c"
	"source/components/utilities/utdebug.c"
	"source/components/utilities/utdecode.c"
	"source/components/utilities/utdelete.c"
	"source/components/utilities/uterror.c"
	"source/components/utilities/uteval.c"
	"source/components/utilities/utexcep.c"
	"source/components/utilities/utglobal.c"
	"source/components/utilities/uthex.c"
	"source/components/utilities/utids.c"
	"source/components/utilities/utinit.c"
	"source/components/utilities/utlock.c"
	"source/components/utilities/utmath.c"
	"source/components/utilities/utmisc.c"
	"source/components/utilities/utmutex.c"
	"source/components/utilities/utnonascii.c"
	"source/components/utilities/utobject.c"
	"source/components/utilities/utosi.c"
	"source/components/utilities/utownerid.c"
	"source/components/utilities/utpredef.c"
	"source/components/utilities/utprint.c"
	"source/components/utilities/utresdecode.c"
	"source/components/utilities/utresrc.c"
	"source/components/utilities/utstate.c"
	"source/components/utilities/utstring.c"
	"source/components/utilities/utstrsuppt.c"
	"source/components/utilities/utstrtoul64.c"
	"source/components/utilities/uttrack.c"
	"source/components/utilities/utuuid.c"
	"source/components/utilities/utxface.c"
	"source/components/utilities/utxferror.c"
	"source/components/utilities/utxfinit.c"
	"source/components/utilities/utxfmutex.c")

set(header_files
	"source/include/acapps.h"
	"source/include/acbuffer.h"
	"source/include/acclib.h"
	"source/include/accommon.h"
	"source/include/acconfig.h"
	"source/include/acconvert.h"
	"source/include/acdebug.h"
	"source/include/acdisasm.h"
	"source/include/acdispat.h"
	"source/include/acevents.h"
	"source/include/acexcep.h"
	"source/include/acglobal.h"
	"source/include/achware.h"
	"source/include/acinterp.h"
	"source/include/aclocal.h"
	"source/include/acmacros.h"
	"source/include/acnames.h"
	"source/include/acnamesp.h"
	"source/include/acobject.h"
	"source/include/acopcode.h"
	"source/include/acoutput.h"
	"source/include/acparser.h"
	"source/include/acpi.h"
	"source/include/acpixf.h"
	"source/include/acpixf.h"
	"source/include/acpredef.h"
	"source/include/acresrc.h"
	"source/include/acrestyp.h"
	"source/include/acstruct.h"
	"source/include/actables.h"
	"source/include/actbinfo.h"
	"source/include/actbl.h"
	"source/include/actbl1.h"
	"source/include/actbl2.h"
	"source/include/actbl3.h"
	"source/include/actypes.h"
	"source/include/acutils.h"
	"source/include/acuuid.h"
	"source/include/amlcode.h"
	"source/include/amlresrc.h")
set(platform_header_files
	"source/include/platform/accygwin.h"
	"source/include/platform/acdragonfly.h"
	"source/include/platform/acdragonflyex.h"
	"source/include/platform/acefi.h"
	"source/include/platform/acefiex.h"
	"source/include/platform/acenv.h"
	"source/include/platform/acenvex.h"
	"source/include/platform/acfreebsd.h"
	"source/include/platform/acgcc.h"
	"source/include/platform/acgccex.h"
	"source/include/platform/achaiku.h"
	"source/include/platform/acintel.h"
	"source/include/platform/aclinux.h"
	"source/include/platform/aclinuxex.h"
	"source/include/platform/acmacosx.h"
	"source/include/platform/acmsvc.h"
	"source/include/platform/acmsvcex.h"
	"source/include/platform/acnetbsd.h"
	"source/include/platform/acos2.h"
	"source/include/platform/acqnx.h"
	"source/include/platform/acwin.h"
	"source/include/platform/acwin64.h"
	"source/include/platform/acpvmos.h")
source_group("Header" FILES ${header_files})
source_group("Header/Platform" FILES ${platform_header_files})
source_group("Source/Dispatcher" FILES ${dispatcher_sources})
source_group("Source/Event" FILES ${event_sources})
source_group("Source/Executer" FILES ${executer_sources})
source_group("Source/Hardware" FILES ${hardware_sources})
source_group("Source/Namespace" FILES ${namespace_sources})
source_group("Source/Parser" FILES ${parser_sources})
source_group("Source/Resource" FILES ${resource_sources})
source_group("Source/Tables" FILES ${tables_sources})
source_group("Source/Utilities" FILES ${utilities_sources})
set(all_files 
	${header_files}
	${platform_header_files}
	${dispatcher_sources}
	${event_sources}
	${executer_sources}
	${hardware_sources}
	${namespace_sources}
	${parser_sources}
	${resource_sources}
	${tables_sources}
	${utilities_sources})

add_library(${PROJECT_NAME} STATIC ${all_files})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/source/include")
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}")

target_link_libraries(${PROJECT_NAME} PRIVATE Config)
