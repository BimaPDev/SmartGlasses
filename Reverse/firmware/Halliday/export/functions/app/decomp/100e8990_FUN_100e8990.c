/* FUN_100e8990 @ 0x100e8990 */

int FUN_100e8990(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_14;
  
  local_14 = 0;
  iVar7 = param_1;
  if (param_1 == 0) {
    uVar1 = DAT_100e8a64 | ((int)PTR_DAT_100e8a5c - (int)PTR_DAT_100e8a58) * 0x20 & 0xff00U;
    param_2 = 0;
    puVar4 = PTR_s_null_font_info___p_100e8a60;
  }
  else {
    if (*(int *)(param_1 + 0x30) == param_2) {
      return *(int *)(param_1 + 0xc) + 0x18;
    }
    iVar2 = FUN_100e8644();
    iVar5 = *(int *)(param_1 + 0xc);
    if (-1 < iVar2) {
      return iVar2 * 0x18 + *(int *)(iVar5 + 0x10);
    }
    if ((*(uint *)(iVar5 + 0x3c) <= *(uint *)(iVar5 + 8)) && (param_3 == 0)) {
      return 0;
    }
    uVar6 = FUN_10138cc4(param_1,param_2,&local_14);
    if ((int)uVar6 < 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        FUN_100a5b78(((int)PTR_DAT_100e8a5c - (int)PTR_DAT_100e8a58) * 0x20 & 0xff00U | 0x5f80011,
                     DAT_100e8a68,DAT_100e8a6c,param_2,iVar7);
        return 0;
      }
      return *(int *)(param_1 + 0xc) + 0x18;
    }
    uVar3 = FUN_100e86c0(*(undefined4 *)(param_1 + 0xc),(int)((ulonglong)uVar6 >> 0x20),1);
    iVar2 = FUN_100e8888(param_1,param_2,local_14,uVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar1 = DAT_100e8a70 | ((int)PTR_DAT_100e8a5c - (int)PTR_DAT_100e8a58) * 0x20 & 0xff00U;
    puVar4 = DAT_100e8a74;
  }
  FUN_100a5b78(uVar1,DAT_100e8a68,puVar4,param_2,iVar7);
  return 0;
}

