/* FUN_100f4a34 @ 0x100f4a34 */

undefined4
FUN_100f4a34(ushort *param_1,ushort param_2,ushort param_3,undefined4 *param_4,undefined4 *param_5,
            byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((char)*param_1 == '\0') {
    uVar4 = *param_4;
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 3) = uVar4;
    param_1[2] = param_3;
    uVar5 = param_5[1];
    uVar4 = param_5[2];
    uVar3 = param_5[3];
    *(undefined4 *)(param_1 + 10) = *param_5;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0xe) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0x12) = param_5[4];
    uVar4 = thunk_FUN_10115958();
    puVar2 = PTR_DAT_100f4b00;
    puVar1 = PTR_DAT_100f4afc;
    *(undefined4 *)(param_1 + 6) = uVar4;
    *param_1 = (ushort)((((uint)param_6 << 8 | 1) << 0x17) >> 0x17) | *param_1 & 0xfe00;
    FUN_100a5b78(((int)puVar2 - (int)puVar1) * 0x20 & 0xff00U | 0x43003f,
                 PTR_s_anim_start__view__u__last_view___100f4b04,param_1[1],param_1[2],
                 (int)(short)param_1[3],(int)(short)param_1[4],(int)(short)param_1[10],
                 (int)(short)param_1[0xb],(int)(short)param_1[0xc],(int)(short)param_1[0xd],
                 param_1[0xe]);
    uVar4 = 0;
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100f4b00 - (int)PTR_DAT_100f4afc) * 0x20 & 0xff00U | 0x360011,
                 PTR_s_anim_still_in_state__d_100f4b08,(char)*param_1);
    uVar4 = 0xfffffff0;
  }
  return uVar4;
}

