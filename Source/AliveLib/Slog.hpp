#pragma once

#include "FunctionFwd.hpp"
#include "BaseAliveGameObject.hpp"
#include "Path.hpp"

struct Path_Slog : public Path_TLV
{
    __int16 field_10_scale;
    __int16 field_12_direction;
    __int16 field_14_asleep;
    __int16 field_16_wake_up_anger;
    __int16 field_18_bark_anger;
    __int16 field_1A_chase_anger;
    __int16 field_1C_jump_delay;
    __int16 field_1E_disabled_resources;
    __int16 field_20_angry_id;
    __int16 field_22_bone_eating_time;
};
ALIVE_ASSERT_SIZEOF_ALWAYS(Path_Slog, 0x24);

class Slog;
using TSlogAIFn = __int16 (Slog::*)();
using TSlogMotionFn = void (Slog::*)();

class Slog : public BaseAliveGameObject
{
public:

    EXPORT Slog* ctor_4C42E0(Path_Slog* pTlv, int tlvInfo);

    virtual BaseGameObject* VDestructor(signed int flags) override;

    virtual void VUpdate() override;

public:
    EXPORT void M_0_4C5F90();
    EXPORT void M_1_4C60C0();
    EXPORT void M_2_4C6340();
    EXPORT void M_3_4C65C0();
    EXPORT void M_4_4C6930();
    EXPORT void M_5_4C5F20();
    EXPORT void M_6_4C66C0();
    EXPORT void M_7_4C6790();
    EXPORT void M_8_4C62E0();
    EXPORT void M_9_4C6310();
    EXPORT void M_10_4C7820();
    EXPORT void M_11_4C7860();
    EXPORT void M_12_4C7880();
    EXPORT void M_13_4C78D0();
    EXPORT void M_14_4C6CF0();
    EXPORT void M_15_4C6D60();
    EXPORT void M_16_4C70D0();
    EXPORT void M_17_4C7000();
    EXPORT void M_18_4C7210();
    EXPORT void M_19_4C7470();
    EXPORT void M_20_4C75F0();
    EXPORT void M_21_4C77F0();
    EXPORT void M_22_4C7120();
    EXPORT void M_23_4C7170();

public:
    EXPORT __int16 AI_0_4C3790();
    EXPORT __int16 AI_1_4C2830();
    EXPORT __int16 AI_2_4C0A00();
    EXPORT __int16 AI_3_4C3250();

private:
    EXPORT void SetAnimFrame_4C42A0();

    EXPORT void Init_4C46A0();

    EXPORT void vUpdate_4C50D0();

    EXPORT void dtor_4C49A0();

    EXPORT Slog* vdtor_4C4510(signed int flags);


private:
    __int16 field_116;
    int field_118;
    __int16 field_11C;
    __int16 field_11E;
    unsigned __int16 field_120_brain_state_idx;
    __int16 field_122_brain_state_result;
    int field_124;
    int field_128;
    int field_12C_tlvInfo;
    __int16 field_130;
    __int16 field_132;
    int field_134;
    int field_138;
    __int16 field_13C;
    __int16 field_13E;
    __int16 field_140;
    __int16 field_142;
    __int16 field_144;
    __int16 field_146_total_anger;
    __int16 field_148_chase_anger;
    __int16 field_14A;
    __int16 field_14C;
    __int16 field_14E;
    __int16 field_150;
    __int16 field_152;
    __int16 field_154_angry_id;
    __int16 field_156_bone_eating_time;
    __int16 field_158_jump_delay;
    __int16 field_15A;
    int field_15C;
    enum Flags_160 : __int16
    {
        eBit1 = 0x1,
        eBit2 = 0x2,
        eBit3 = 0x4,
        eBit4 = 0x8,
        eBit5 = 0x10,
        eBit6 = 0x20,
        eBit7 = 0x40,
        eBit8 = 0x80,
        eBit9 = 0x100,
        eBit10 = 0x200,
        eBit11 = 0x400,
        eBit12 = 0x800,
        eBit13 = 0x1000,
        eBit14 = 0x2000,
        eBit15 = 0x4000,
    };
    BitField16<Flags_160> field_160_flags;
    __int16 field_162;
};
ALIVE_ASSERT_SIZEOF(Slog, 0x164);