/* FUN_100a8e00 @ 0x100a8e00 */

undefined4 FUN_100a8e00(int param_1,int param_2,uint param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a8f88,0x3f8,DAT_100a8f84,DAT_100a8f80);
  }
  FUN_100a7a0c();
  iVar1 = FUN_100a7a40();
  if (iVar1 == param_1) {
    uVar9 = (DAT_100a8f8c - DAT_100a8f90) * 0x20 & 0xff00;
    if (param_2 != 0) {
      iVar2 = FUN_1012e06e(0x26,param_5);
      iVar3 = FUN_1012e0a2(0x26);
      if (*(byte *)(iVar1 + 6) != param_3) {
        uVar6 = (uint)*(byte *)(iVar1 + 2);
        if (param_4 <= *(byte *)(iVar1 + 2)) {
          uVar6 = param_4;
        }
        iVar4 = FUN_100aef54(uVar6,param_3,(uint)*(byte *)(iVar1 + 6),iVar1 + 0x3c,iVar1 + 0x40,
                             param_5);
        *(int *)(iVar1 + 0x38) = iVar4;
        if (iVar4 == 0) {
          FUN_100a5b78(uVar9 | DAT_100a8f94,DAT_100a8f9c,DAT_100a8f98);
        }
        else {
          uVar5 = *(int *)(iVar1 + 0x3c) + 1U & 0xfffffffe;
          uVar7 = *(int *)(iVar1 + 0x40) + 1U & 0xfffffffe;
          iVar4 = param_4 * (uVar5 + uVar7);
          if (iVar4 - iVar3 / 2 == 0 || iVar4 < iVar3 / 2) {
            iVar1 = uVar5 * 2;
            *(int *)(param_1 + 0x48) = iVar2;
            if (1 < param_4) {
              iVar2 = iVar2 + iVar1;
            }
            *(int *)(param_1 + 0x4c) = iVar2;
            iVar2 = iVar2 + iVar1;
            *(int *)(param_1 + 0x50) = iVar2;
            if (1 < uVar6) {
              iVar2 = iVar2 + uVar7 * 2;
            }
            *(int *)(param_1 + 0x54) = iVar2;
            goto LAB_100a8f00;
          }
          FUN_100a5b78(uVar9 | DAT_100a8fa0,DAT_100a8f9c,DAT_100a8fa4);
          FUN_1012f5a2(*(undefined4 *)(iVar1 + 0x38));
          *(undefined4 *)(iVar1 + 0x38) = 0;
        }
        uVar8 = 0xfffffff4;
        goto LAB_100a8e9c;
      }
      iVar3 = (iVar3 / 2) / (int)param_4;
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar1 = iVar2;
      if (1 < param_4) {
        iVar1 = iVar2 + iVar3 * 2;
      }
      *(int *)(param_1 + 0x4c) = iVar1;
      *(int *)(param_1 + 0x50) = iVar2;
      *(int *)(param_1 + 0x48) = iVar2;
      *(int *)(param_1 + 0x54) = iVar1;
LAB_100a8f00:
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (*(char *)(param_1 + 0x21) == '\x01') {
        uVar8 = FUN_100aee78(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 2));
        *(undefined4 *)(param_1 + 0x5c) = uVar8;
      }
    }
    *(int *)(param_1 + 0x1c) = param_2;
    *(char *)(param_1 + 0x20) = (char)param_3;
    *(char *)(param_1 + 0x21) = (char)param_4;
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x38) != 0) {
        FUN_1012f5a2();
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_1012f586();
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    FUN_100a5b78(uVar9 | DAT_100a8fa8,DAT_100a8f9c,DAT_100a8fac,param_2,param_3,
                 *(undefined1 *)(param_1 + 6));
  }
  uVar8 = 0;
LAB_100a8e9c:
  FUN_100a7a24();
  return uVar8;
}

