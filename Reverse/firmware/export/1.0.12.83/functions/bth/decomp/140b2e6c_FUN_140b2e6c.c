/* FUN_140b2e6c @ 0x140b2e6c */

void FUN_140b2e6c(byte *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_28 [5];
  uint local_23;
  int local_1c;
  
  uVar3 = (uint)*param_1;
  local_1c = *DAT_140b3000;
  uVar6 = uVar3;
  FUN_1402a6e8(4,0xc9,DAT_140b3008,DAT_140b3004,DAT_140b3034,DAT_140b3030,uVar3);
  piVar1 = DAT_140b3020;
  switch(uVar3) {
  case 0:
    uVar4 = 0xf;
    goto LAB_140b2ed4;
  case 7:
    uVar4 = 0xe;
LAB_140b2ed4:
    iVar2 = -(param_2 + 8U & 0x1f8);
    auStack_28[iVar2] = uVar4;
    FUN_140e5278(auStack_28 + iVar2 + 1,param_1,param_2);
    FUN_140afd14(auStack_28 + iVar2,param_2 + 1);
    break;
  case 0x25:
    FUN_1402a6e8(4,0x15f,DAT_140b3008,DAT_140b3004,DAT_140b3010,DAT_140b301c,uVar6);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar2 = FUN_140ae13c(3,0x46);
      *piVar1 = iVar2;
    }
    FUN_140e5278(iVar2,param_1 + 3,0x46);
    FUN_140b2094();
    break;
  case 0x26:
    FUN_1402a9fc(DAT_140b3024,1,param_2,param_1);
    FUN_140aed5c(param_1[4]);
    break;
  case 0x28:
    FUN_140b2cf4(param_1,param_2);
    break;
  case 0x29:
    uVar5 = DAT_140b300c;
    FUN_1402a6e8(4,0x14b,DAT_140b3008,DAT_140b3004,DAT_140b3010,DAT_140b300c,uVar6);
    if (param_1[4] == 1) {
      if (param_1[3] == 0) {
        FUN_1402a6e8(4,0x14e,DAT_140b3008,DAT_140b3004,DAT_140b3028,uVar5,uVar6);
      }
      else if (param_1[3] == 2) {
        FUN_1402a6e8(4,0x150,DAT_140b3008,DAT_140b3004,DAT_140b302c,uVar5,uVar6);
      }
      local_23 = DAT_140b3014;
      auStack_28[4] = 3;
      FUN_1402a6e8(4,0x158,DAT_140b3008,DAT_140b3004,DAT_140b3018,DAT_140b3014 & 0xff,
                   (DAT_140b3014 & 0xffff) >> 8,(DAT_140b3014 & 0xffffff) >> 0x10,
                   DAT_140b3014 >> 0x18);
      FUN_140afb5c(auStack_28 + 4,5);
    }
  }
  if (*DAT_140b3000 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

