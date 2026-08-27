/* FUN_2c4c9efc @ 0x2c4c9efc */

void FUN_2c4c9efc(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined2 *)param_1 = *param_2;
  uVar3 = (uint)(ushort)param_2[1];
  *(undefined2 *)((int)param_1 + 2) = param_2[1];
  if ((int)param_3 < (int)uVar3) {
    uVar3 = param_3 & 0xffff;
    FUN_2c6741e8(0x42,DAT_2c4c9fa4,DAT_2c4c9fa0);
    *(short *)((int)param_1 + 2) = (short)param_3;
    if (uVar3 == 0) goto LAB_2c4c9f46;
  }
  else if (uVar3 == 0) {
    FUN_2c6741e8(0x42,DAT_2c4c9fa4,DAT_2c4c9fa0);
    *param_1 = 1;
    goto LAB_2c4c9f46;
  }
  iVar5 = 4;
  do {
    puVar7 = (undefined4 *)((int)param_2 + iVar5);
    puVar6 = (undefined4 *)((int)param_1 + iVar5);
    iVar5 = iVar5 + 0x18;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar4;
    uVar1 = puVar7[5];
    puVar6[4] = puVar7[4];
    puVar6[5] = uVar1;
  } while (iVar5 != uVar3 * 0x18 + 4);
LAB_2c4c9f46:
  if ((int)uVar3 < (int)param_3) {
    puVar6 = param_1 + uVar3 * 6;
    do {
      uVar3 = uVar3 + 1;
      puVar6[6] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0x8000000;
      puVar6[5] = 0;
      puVar6[1] = 0x8000000;
      puVar6[2] = 0;
      puVar6 = puVar6 + 6;
    } while (param_3 != uVar3);
  }
  *(short *)((int)param_1 + 2) = (short)param_3;
  return;
}

