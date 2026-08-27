/* FUN_1409895c @ 0x1409895c */

undefined4 FUN_1409895c(uint param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  uVar6 = DAT_14098c20;
  local_2c = *DAT_14098bf0;
  uVar12 = param_2;
  FUN_1402a6e8(4,0x852,DAT_14098bf8,DAT_14098bf4,DAT_14098bec,DAT_14098c20,param_1,param_2);
  puVar5 = DAT_14098c30;
  iVar4 = DAT_14098bfc;
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098c1c,DAT_14098c14,param_1);
  }
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098c18,DAT_14098c14,param_2);
  }
  iVar11 = param_2 * 0x9c + param_1 * 0x138;
  FUN_140e5148(*DAT_14098c30,0xffffffff);
  iVar8 = iVar4 + iVar11;
  if (-1 < (int)((uint)*(byte *)(iVar8 + 2) << 0x1e)) {
    FUN_1402a6e8(4,0x862,DAT_14098bf8,DAT_14098bf4,DAT_14098c10,uVar6,(uint)*(byte *)(iVar8 + 2),
                 uVar12);
    uVar6 = 1;
    goto LAB_14098aba;
  }
  cVar1 = *(char *)(iVar8 + 3);
  if (param_3 != (undefined4 *)(iVar11 + 0x18 + iVar4)) {
    cVar2 = *(char *)(iVar8 + 0x25);
    cVar3 = *(char *)((int)param_3 + 0xd);
    if (cVar2 != cVar3) {
      FUN_1402a6e8(4,0x86d,DAT_14098bf8,DAT_14098bf4,DAT_14098c04,uVar6,cVar2,cVar3,param_2);
    }
    iVar8 = param_2 * 0x9c + param_1 * 0x138 + iVar4;
    if (*(int *)(iVar8 + 0x34) == param_3[7]) {
      iVar9 = *(int *)(iVar8 + 0x38);
      iVar8 = param_3[8];
      if (iVar9 != iVar8) goto LAB_14098b04;
      if (cVar2 != cVar3) goto LAB_14098a26;
    }
    else {
      FUN_1402a6e8(4,0x871,DAT_14098bf8,DAT_14098bf4,DAT_14098c00,uVar6,*(int *)(iVar8 + 0x34),
                   param_3[7],param_2);
      iVar9 = *(int *)(iVar8 + 0x38);
      iVar8 = param_3[8];
      if (iVar8 != iVar9) {
LAB_14098b04:
        FUN_1402a6e8(4,0x876,DAT_14098bf8,DAT_14098bf4,DAT_14098c08,uVar6,iVar9,iVar8,param_2);
      }
LAB_14098a26:
      if ((int)((uint)*(byte *)(param_2 * 0x9c + param_1 * 0x138 + iVar4 + 2) << 0x1d) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14098c28,DAT_14098c20,param_2);
      }
      FUN_140985ec(param_2,iVar11 + iVar4,param_3);
    }
    iVar8 = param_2 * 0x9c + param_1 * 0x138 + iVar4;
    if (*(int *)(iVar8 + 0x1c) == param_3[1]) {
LAB_14098a64:
      iVar8 = param_2 * 0x9c + param_1 * 0x138 + iVar4;
      if (*(char *)(iVar8 + 0x24) == *(char *)(param_3 + 3)) {
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar10 = param_3[3];
        *(undefined4 *)(iVar8 + 0x18) = *param_3;
        *(undefined4 *)(iVar8 + 0x1c) = uVar6;
        *(undefined4 *)(iVar8 + 0x20) = uVar7;
        *(undefined4 *)(iVar8 + 0x24) = uVar10;
        uVar6 = param_3[5];
        uVar7 = param_3[6];
        uVar10 = param_3[7];
        *(undefined4 *)(iVar8 + 0x28) = param_3[4];
        *(undefined4 *)(iVar8 + 0x2c) = uVar6;
        *(undefined4 *)(iVar8 + 0x30) = uVar7;
        *(undefined4 *)(iVar8 + 0x34) = uVar10;
        *(undefined4 *)(iVar8 + 0x38) = param_3[8];
        goto LAB_14098aa8;
      }
    }
    else {
      FUN_1402a6e8(4,0x883,DAT_14098bf8,DAT_14098bf4,DAT_14098c0c,uVar6,*(int *)(iVar8 + 0x1c),
                   param_3[1],param_2);
      if ((int)((uint)*(byte *)(iVar8 + 2) << 0x1d) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14098c2c,DAT_14098c20,*(undefined4 *)(iVar8 + 0x1c),param_3[1],param_2);
      }
      if (*(int *)(iVar8 + 0x1c) == param_3[1]) goto LAB_14098a64;
    }
    iVar8 = iVar4 + param_2 * 0x9c + param_1 * 0x138;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar10 = param_3[3];
    *(undefined4 *)(iVar8 + 0x18) = *param_3;
    *(undefined4 *)(iVar8 + 0x1c) = uVar6;
    *(undefined4 *)(iVar8 + 0x20) = uVar7;
    *(undefined4 *)(iVar8 + 0x24) = uVar10;
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar10 = param_3[7];
    *(undefined4 *)(iVar8 + 0x28) = param_3[4];
    *(undefined4 *)(iVar8 + 0x2c) = uVar6;
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
    *(undefined4 *)(iVar8 + 0x34) = uVar10;
    *(undefined4 *)(iVar8 + 0x38) = param_3[8];
    FUN_140984b4(iVar11 + iVar4,param_3);
  }
LAB_14098aa8:
  if (cVar1 == '\x0f') {
    uVar6 = 0;
    local_3c = (uint)*(byte *)((int)param_3 + 0xd);
    local_34 = param_3[1];
    local_38 = (uint)*(byte *)(param_3 + 3);
    local_30 = 1;
    FUN_14027b88(0,param_2,&local_3c);
  }
  else {
    if (cVar1 != '\x10') {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098c24,DAT_14098c20,cVar1);
    }
    uVar6 = 0;
  }
LAB_14098aba:
  FUN_140e52d8(*puVar5);
  if (*DAT_14098bf0 == local_2c) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

