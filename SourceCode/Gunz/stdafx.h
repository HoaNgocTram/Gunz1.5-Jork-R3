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

// C�� ��Ÿ�� ��� �����Դϴ�.
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
//!! ������ ���⿡ ���� ���ð� MFeatureDefine.h���� define�� �ɵ��� �մϴ�. Ŭ��/���� ���ÿ� ������ �� �ֽ��ϴ�
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#define _GAMBLEITEM_TEST_LOG	// �׺� �������� ���������� Ȯ���� ����(��ҿ��� �ּ�ó��)

//#define _REPLAY_TEST_LOG // ���÷��̽� Ư�������� ��� Ȯ���� ����(��Ҵ� �ּ�����)

//#define _LOCATOR

#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA) || defined(LOCALE_NHNUSA) || defined(LOCALE_JAPAN) || defined(LOCALE_BRAZIL)
#endif

#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA) || defined(LOCALE_NHNUSA) || defined(LOCALE_JAPAN) || defined(LOCALE_BRAZIL)
#endif


#ifdef _DEBUG
// #define _XTRAP // �׽�Ʈ �ϱ� ���ؼ�. by sunge
// #define _HSHIELD // �׽�Ʈ �ϱ� ���ؼ�. by sunge
// #define _XTRAP
#endif

// stl
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <sstream>

// �ܺ� ���̺귯��
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