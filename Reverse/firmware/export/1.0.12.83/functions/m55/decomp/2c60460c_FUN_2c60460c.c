/* FUN_2c60460c @ 0x2c60460c */

int FUN_2c60460c(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  sVar2 = FUN_2c6033b4(param_1,0,0x13);
  sVar3 = FUN_2c6033b4(param_1,0,0x12);
  sVar4 = FUN_2c6033b4(param_1,0,0x32);
  iVar7 = FUN_2c6041fc(param_1);
  uVar1 = DAT_2c6046d0;
  iVar9 = DAT_2c6046d4;
  if (iVar7 != 0) {
    sVar6 = 0x1fff;
    iVar9 = 0;
    do {
      iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar9 * 4);
      iVar9 = iVar9 + 1;
      iVar8 = FUN_2c606ba4(iVar10,uVar1);
      if ((iVar8 == 0) && (sVar5 = *(short *)(iVar10 + 0x14), sVar5 <= sVar6)) {
        sVar6 = sVar5;
      }
    } while (iVar7 != iVar9);
    iVar9 = DAT_2c6046d4;
    if (sVar6 != 0x1fff) {
      iVar9 = (int)(short)((sVar3 + sVar4 + *(short *)(param_1 + 0x14)) - sVar6);
    }
  }
  sVar5 = FUN_2c6074f4(param_1);
  sVar6 = FUN_2c6073ec(param_1);
  sVar6 = (sVar3 + sVar2 + sVar4 * 2 + sVar5) - sVar6;
  if (*(int *)(param_1 + 8) != 0) {
    sVar6 = sVar6 - *(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  iVar7 = (int)sVar6;
  if (sVar6 < iVar9) {
    iVar7 = iVar9;
  }
  return iVar7;
}

