/* FUN_1006d204 @ 0x1006d204 */

undefined4 FUN_1006d204(int param_1,int *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_3 != 0) {
    iVar10 = *(int *)(param_1 + 0x10);
    puVar9 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    *puVar9 = 0;
    puVar9[2] = 0xff;
    puVar9[7] = 6;
    do {
    } while ((puVar9[7] & 6) != 0);
    *puVar9 = DAT_1006d2f8;
    if (param_3 == 2) {
      iVar4 = param_2[1];
      uVar8 = (iVar4 + 1) * 2 & 0xe;
      puVar9[4] = param_4 << 1;
      for (iVar6 = 0; iVar6 != iVar4; iVar6 = iVar6 + 1) {
        puVar9[4] = (uint)*(byte *)(*param_2 + iVar6);
      }
      pbVar1 = (byte *)(param_2 + 5);
      param_2 = param_2 + 3;
      if ((int)((uint)*pbVar1 << 0x1d) < 0) {
        uVar8 = uVar8 | 0x8f31;
      }
      else {
        uVar8 = uVar8 | 0x8f21;
      }
    }
    else {
      uVar8 = 0x8f03;
    }
    uVar5 = param_2[1];
    *(int **)(iVar10 + 0x2c) = param_2;
    *(undefined4 *)(iVar10 + 0x30) = 0;
    uVar3 = DAT_1006d2fc;
    bVar2 = *(byte *)(param_2 + 2);
    if (uVar5 < 0x400) {
      *(uint *)(iVar10 + 0x34) = uVar5;
    }
    else {
      *(undefined4 *)(iVar10 + 0x34) = 0x3ff;
      uVar8 = uVar8 & 0xfffff9ff;
      FUN_10119dc2(uVar3,bVar2 & 1);
    }
    puVar9[9] = *(undefined4 *)(iVar10 + 0x34);
    if ((bVar2 & 1) == 0) {
      if ((param_3 == 1) || ((int)((uint)*(byte *)(param_2 + 2) << 0x1d) < 0)) {
        puVar9[4] = param_4 << 1;
      }
      iVar4 = 0;
      iVar6 = param_2[1];
      while ((iVar4 != iVar6 && (-1 < (int)(puVar9[8] << 0x1a)))) {
        pbVar1 = (byte *)(*param_2 + iVar4);
        iVar4 = iVar4 + 1;
        puVar9[4] = (uint)*pbVar1;
      }
      *(int *)(iVar10 + 0x30) = iVar4;
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
      puVar9[4] = param_4 << 1 | 1;
    }
    *(undefined1 *)(iVar10 + 0x38) = uVar7;
    puVar9[7] = 0;
    puVar9[6] = uVar8;
  }
  return 0;
}

