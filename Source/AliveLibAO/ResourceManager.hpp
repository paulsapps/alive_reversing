#pragma once

#include "BaseGameObject.hpp"
#include "FunctionFwd.hpp"

START_NS_AO

class BaseAliveGameObject;
class Camera;

EXPORT void CC Game_ShowLoadingIcon_445EB0();

class ResourceManager
{
public:
    enum ResourceType : DWORD
    {
        Resource_Animation = 0x6D696E41,
        Resource_Font = 0x746E6F46,
        Resource_Path = 0x68746150,
        Resource_Palt = 0x746C6150,
        Resource_FG1 = 0x20314746,
        Resource_Bits = 0x73746942,
    };

    struct Header
    {
        DWORD field_0_size;
        __int16 field_4_ref_count;
        __int16 field_6_flags;
        DWORD field_8_type;
        DWORD field_C_id;
    };
    ALIVE_ASSERT_SIZEOF(Header, 0x10);

    class ResourceManager_FileRecord : public BaseGameObject
    {
    public:
        int field_10;
        int field_14_fn;
        int field_18;
        int field_1C_array;
        int field_20;
        int field_24;
        __int16 field_28_state;
        __int16 field_2A;
        int field_2C;
    };
    ALIVE_ASSERT_SIZEOF(ResourceManager_FileRecord, 0x30);

    using TLoaderFn = std::add_pointer<void CC(Camera*)>::type;

    static EXPORT void CC CancelPendingResourcesFor_41EA60(BaseAliveGameObject* pObj);

    static EXPORT void CC Reclaim_Memory_455660(DWORD sizeToReclaim);

    static EXPORT __int16 CC FreeResource_455550(BYTE** ppRes);

    static EXPORT void CC LoadResource_446C90(const char* pFileName, int type, int resourceId, __int16 loadMode, __int16 bDontLoad = FALSE);

    static EXPORT BYTE** CC GetLoadedResource_4554F0(int type, int resourceId, __int16 addUseCount, __int16 bLock);

    static EXPORT void CC LoadingLoop_41EAD0(__int16 bShowLoadingIcon);

    static EXPORT __int16 CC LoadResourceFile_455270(const char* filename, Camera* pCam, int allocMethod);

    static EXPORT ResourceManager_FileRecord* CC LoadResourceFile_4551E0(const char* pFileName, TLoaderFn fnOnLoad, Camera* pCamera1, Camera* pCamera2);

    static EXPORT void CC Free_Resource_Of_Type_455810(int type);

    static EXPORT void CC Free_Resources_For_Camera_447170(Camera* pCamera);

    static EXPORT Header* CC Get_Header_455620(BYTE** ppRes);
};

ALIVE_VAR_EXTERN(short, bHideLoadingIcon_5076A0);
ALIVE_VAR_EXTERN(int, loading_ticks_5076A4);


END_NS_AO