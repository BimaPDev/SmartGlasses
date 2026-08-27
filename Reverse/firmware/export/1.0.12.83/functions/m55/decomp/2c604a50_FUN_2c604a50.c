/* FUN_2c604a50 @ 0x2c604a50 */

int FUN_2c604a50(int param_1)

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
  int iVar11;
  
  iVar7 = FUN_2c6041fc();
  uVar1 = DAT_2c604b24;
  iVar11 = DAT_2c604b20;
  if (iVar7 == 0) {
    sVar2 = FUN_2c6033b4(param_1,0,0x10);
    sVar3 = FUN_2c6033b4(param_1,0,0x11);
    sVar4 = FUN_2c6033b4(param_1,0,0x32);
  }
  else {
    iVar9 = 0;
    do {
      iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar9 * 4);
      iVar9 = iVar9 + 1;
      iVar8 = FUN_2c606ba4(iVar10,uVar1);
      if ((iVar8 == 0) && (iVar8 = (int)*(short *)(iVar10 + 0x1a), iVar11 < iVar8)) {
        iVar11 = iVar8;
      }
    } while (iVar7 != iVar9);
    sVar2 = FUN_2c6033b4(param_1,0,0x10);
    sVar3 = FUN_2c6033b4(param_1,0,0x11);
    sVar4 = FUN_2c6033b4(param_1,0,0x32);
    if (iVar11 != DAT_2c604b20) {
      iVar11 = (int)(short)(((sVar3 + sVar4) - *(short *)(param_1 + 0x1a)) + (short)iVar11);
    }
  }
  sVar5 = FUN_2c607540(param_1);
  sVar6 = FUN_2c6073f8(param_1);
  sVar6 = (sVar2 + sVar4 * 2 + sVar3 + sVar5) - sVar6;
  if (*(int *)(param_1 + 8) != 0) {
    sVar6 = sVar6 + *(short *)(*(int *)(param_1 + 8) + 0x12);
  }
  iVar7 = (int)sVar6;
  if (sVar6 < iVar11) {
    iVar7 = iVar11;
  }
  return iVar7;
}

