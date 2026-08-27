/* FUN_14098c34 @ 0x14098c34 */

undefined4 FUN_14098c34(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = DAT_14098ec0;
  uVar6 = param_2;
  FUN_1402a6e8(4,0x6af,DAT_14098eb0,DAT_14098eac,DAT_14098ea8,DAT_14098ec0,param_1,param_2);
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098ed0,DAT_14098ecc,param_1);
  }
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098ee0,DAT_14098ecc,param_2);
  }
  if (param_3[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098edc,uVar3);
  }
  if ((param_3[7] & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098ed8,uVar3);
  }
  if (param_3[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098ed4,uVar3);
  }
  if ((*(char *)((int)param_3 + 0x15) != '\0') && (1 < *(byte *)(param_3 + 3))) {
    if (10 < *(byte *)((int)param_3 + 0xe) - 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098ec8,uVar3);
    }
  }
  FUN_140e5148(*DAT_14098eb4,0xffffffff);
  iVar1 = DAT_14098ee4;
  iVar4 = param_2 * 0x9c + param_1 * 0x138;
  iVar8 = DAT_14098ee4 + iVar4;
  if (*(char *)(iVar8 + 2) != '\x01') {
    FUN_1402a6e8(4,0x6ce,DAT_14098eb0,DAT_14098eac,DAT_14098eb8,uVar3,*(char *)(iVar8 + 2),uVar6);
    FUN_140e52d8(*DAT_14098eb4);
    return 1;
  }
  iVar9 = DAT_14098ee4 + iVar4 + 0x7c;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)(iVar8 + 0x18) = *param_3;
  *(undefined4 *)(iVar8 + 0x1c) = uVar3;
  *(undefined4 *)(iVar8 + 0x20) = uVar5;
  *(undefined4 *)(iVar8 + 0x24) = uVar7;
  uVar3 = param_3[5];
  uVar5 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(iVar8 + 0x28) = param_3[4];
  *(undefined4 *)(iVar8 + 0x2c) = uVar3;
  *(undefined4 *)(iVar8 + 0x30) = uVar5;
  *(undefined4 *)(iVar8 + 0x34) = uVar7;
  *(undefined4 *)(iVar8 + 0x38) = param_3[8];
  uVar6 = (uint)*(byte *)((int)param_3 + 0xe);
  *(byte *)(iVar8 + 3) = *(byte *)((int)param_3 + 0xe);
  *(undefined4 *)(iVar1 + iVar4 + 0x7c) = 0;
  *(undefined4 *)(iVar9 + 4) = 0;
  *(undefined4 *)(iVar9 + 8) = 0;
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  *(undefined4 *)(iVar9 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 0x18) = 0;
  uVar3 = DAT_14098ebc;
  if (uVar6 == 0xf) {
    *(undefined1 *)(iVar8 + 0x82) = 0;
    *(undefined1 *)(iVar8 + 0x7d) = 0;
    *(undefined4 *)(iVar8 + 0x90) = uVar3;
    if (param_2 == 0) {
      *(undefined2 *)(iVar8 + 0x84) = 1;
      FUN_14027a68(0,0);
      *(undefined1 *)(iVar8 + 0x86) = 0x35;
      uVar2 = FUN_14028770(0x35,0);
      *(undefined1 *)(iVar8 + 0x7c) = uVar2;
      goto LAB_14098da4;
    }
    *(undefined1 *)(iVar8 + 0x86) = 0;
    *(undefined1 *)(iVar8 + 0x84) = 2;
    FUN_14027a68(0,1);
    uVar3 = 0x34;
    *(undefined1 *)(iVar8 + 0x85) = 0x34;
  }
  else {
    *(undefined1 *)(iVar8 + 0x83) = 1;
    uVar3 = DAT_14098ebc;
    if (*(byte *)(param_3 + 3) < 2) {
      *(undefined1 *)(iVar8 + 0x82) = 1;
      *(undefined1 *)(iVar8 + 0x7d) = 1;
      *(undefined4 *)(iVar8 + 0x90) = uVar3;
      if (param_2 == 0) goto LAB_14098e28;
    }
    else {
      if (param_2 == 0) {
        if (*(char *)((int)param_3 + 0x15) == '\0') {
          *(undefined1 *)(iVar8 + 0x82) = 1;
          *(undefined1 *)(iVar8 + 0x7d) = 1;
          *(undefined4 *)(iVar8 + 0x90) = uVar3;
        }
        else {
          *(undefined1 *)(iVar8 + 0x82) = 0;
          *(undefined1 *)(iVar8 + 0x7d) = 1;
          *(undefined4 *)(iVar8 + 0x90) = uVar3;
        }
LAB_14098e28:
        uVar5 = DAT_14098ec4;
        uVar3 = DAT_14098ec0;
        *(undefined2 *)(iVar8 + 0x84) = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(uVar5,uVar3);
      }
      if ((*(char *)((int)param_3 + 0x15) == '\0') && (uVar6 - 2 < 2)) {
        *(undefined1 *)(iVar8 + 0x82) = 0;
        *(undefined4 *)(iVar8 + 0x90) = uVar3;
        *(undefined1 *)(iVar8 + 0x7d) = 1;
        *(undefined1 *)(iVar8 + 0x86) = 0;
        *(undefined1 *)(iVar8 + 0x84) = 2;
        goto LAB_14098d6a;
      }
      *(undefined1 *)(iVar8 + 0x82) = 1;
      *(undefined4 *)(iVar8 + 0x90) = uVar3;
      *(undefined1 *)(iVar8 + 0x7d) = 1;
    }
    *(undefined1 *)(iVar8 + 0x86) = 0;
    *(undefined1 *)(iVar8 + 0x84) = 2;
    if (uVar6 != 0x10) {
LAB_14098d6a:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098ec4,DAT_14098ec0);
    }
    uVar3 = 0x38;
    *(undefined1 *)(iVar8 + 0x85) = 0x38;
  }
  uVar2 = FUN_14028770(uVar3,0);
  *(undefined1 *)(iVar8 + 0x7c) = uVar2;
LAB_14098da4:
  FUN_140985ec(param_2,iVar8,param_3);
  uVar3 = *DAT_14098eb4;
  iVar8 = param_2 * 0x9c + param_1 * 0x138 + iVar1;
  *(undefined4 *)(iVar8 + 0x98) = param_3[6];
  *(byte *)(iVar8 + 2) = *(byte *)(iVar8 + 2) | 2;
  FUN_140e52d8(uVar3);
  FUN_1409895c(param_1,param_2,iVar4 + 0x18 + iVar1);
  return 0;
}

