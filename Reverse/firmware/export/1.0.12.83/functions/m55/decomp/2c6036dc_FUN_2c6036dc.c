/* FUN_2c6036dc @ 0x2c6036dc */

void FUN_2c6036dc(int param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_2c6032d4(param_1,param_3,0xffff,0);
  uVar6 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar5 = 8;
    uVar4 = 1;
    uVar9 = uVar6;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar5 = iVar3;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      pbVar1 = (byte *)(iVar5 + 7);
      iVar5 = iVar5 + 8;
      if ((*pbVar1 & 3) == 0) {
        uVar4 = uVar6 + 1 & 0x3f;
        iVar5 = uVar4 << 3;
        uVar6 = uVar8;
        uVar9 = uVar8 << 3;
        goto LAB_2c603734;
      }
      uVar9 = uVar8 + 1;
    } while (uVar9 != uVar6);
    uVar4 = uVar8 + 2 & 0x3f;
    iVar5 = uVar4 << 3;
    uVar6 = uVar9;
    uVar9 = (int)(short)uVar9 << 3;
  }
LAB_2c603734:
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xfe07 | (ushort)(uVar4 << 3);
  iVar3 = FUN_2c62bebc(iVar3,iVar5);
  *(int *)(param_1 + 0xc) = iVar3;
  uVar4 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
  while (uVar4 = uVar4 - 1, uVar6 < uVar4) {
    puVar7 = (undefined4 *)(iVar3 + uVar4 * 8);
    *puVar7 = puVar7[-2];
    puVar7[1] = puVar7[-1];
    iVar3 = *(int *)(param_1 + 0xc);
  }
  FUN_2c62c3b0(iVar3 + uVar9,8);
  pcVar2 = DAT_2c6037ac;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar9) = param_2;
  iVar3 = uVar9 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xff000000 | param_3 & 0xffffff;
  if (*pcVar2 != '\0') {
    FUN_2c603540(param_1,param_3,0xffff);
    return;
  }
  return;
}

