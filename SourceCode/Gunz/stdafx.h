#ifdef _DEBUG
	#define _SECURE_SCL 0
	#define _ITERATOR_DEBUG_LEVEL 0
#else
	#define _SECURE_SCL 0
	#define _ITERATOR_DEBUG_LEVEL 0
#endif


#pragma once

#define _WIN32_WINNT 0x0501
#include <sdkddkver.h>

#define POINTER_64 __ptr64
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define NO_WARN_MBCS_MFC_DEPRECATION

#pragma comment(lib, "detours.lib")
#pragma comment(lib, "version.lib")

// Windows MFC C++
#include <afxdb.h>
#include <afxtempl.h>
#include <afxdtctl.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <winsock2.h>
#include <mswsock.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <mmsystem.h>
#include <shlwapi.h>
#include <shellapi.h>

// C의 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <math.h>
#include <cstddef>
#include <comutil.h>
#include <stdio.h>

#if _MSC_VER > 1800
#pragma comment(lib, "legacy_stdio_definitions.lib")
#endif

#include "../CSCommon/MFeatureDefine.h"
//#include "ThemidaSDK.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//!! 이제는 여기에 하지 마시고 MFeatureDefine.h에서 define을 걸도록 합니다. 클라/서버 동시에 적용할 수 있습니다
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#define _GAMBLEITEM_TEST_LOG	// 겜블 아이템이 문제있을때 확인을 위해(평소에는 주석처리)

//#define _REPLAY_TEST_LOG // 리플레이시 특수아이템 사용 확인을 위해(평소는 주석으로)

//#define _LOCATOR

#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA) || defined(LOCALE_NHNUSA) || defined(LOCALE_JAPAN) || defined(LOCALE_BRAZIL)
#endif

#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA) || defined(LOCALE_NHNUSA) || defined(LOCALE_JAPAN) || defined(LOCALE_BRAZIL)
#endif


#ifdef _DEBUG
// #define _XTRAP // 테스트 하기 위해서. by sunge
// #define _HSHIELD // 테스트 하기 위해서. by sunge
// #define _XTRAP
#endif

// stl
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <sstream>

// 외부 라이브러리
#include "d3d9.h"
#include "d3dx9math.h"

#include "fmod.h"

// cml
#include "MXml.h"
#include "MUtil.h"
#include "MDebug.h"
#include "MRTTI.h"
#include "MUID.h"
#include "MemPool.h"

// mint
#include "Mint.h"
#include "MWidget.h"
#include "MBitmap.h"
#include "MButton.h"
#include "MListBox.h"
#include "MTextArea.h"
#include "MTabCtrl.h"
#include "MComboBox.h"
#include "MFrame.h"
#include "MPopupMenu.h"

// realspace2
#include "rtypes.h"
#include "RNameSpace.h"
#include "RTypes.h"
#include "RealSpace2.h"
#include "RBspObject.h"
#include "RMeshMgr.h"
#include "RVisualMeshMgr.h"
#include "RMaterialList.h"
#include "RAnimationMgr.h"
#include "Mint4R2.h"

// cscommon
#include "MObject.h"
#include "MMatchObject.h"
#include "MMatchStage.h"
#include "MMatchItem.h"
#include "MMatchMap.h"
#include "MSafeUDP.h"
#include "MMatchClient.h"
#include "MGameClient.h"
#include "MMatchTransDataType.h"
#include "MErrorTable.h"
#include "Config.h"
#include "MSharedCommandTable.h"
#include "MObjectTypes.h"
#include "MMatchBuff.h"

// gunz global
#include "ZApplication.h"
#include "ZGlobal.h"
#include "ZMessages.h"
#include "ZStringResManager.h"
#include "ZGameInterface.h"
#include "ZCombatInterface.h"
#include "ZGame.h"
#include "ZGameClient.h"
#include "ZObject.h"
#include "ZIDLResource.h"
#include "ZInterfaceListener.h"
#include "ZColorTable.h"
#include "ZMyInfo.h"
#include "ZMyItemList.h"
#include "ZNetRepository.h"
#include "ZItem.h"
#include "ZItemDesc.h"
#include "ZPost.h"
#include "ZSoundEngine.h"
#include "ZSoundFMod.h"
#include "ZCamera.h"
#include "ZCharacter.h"
#include "ZActor.h"
//#include <ThemidaSDK.h>