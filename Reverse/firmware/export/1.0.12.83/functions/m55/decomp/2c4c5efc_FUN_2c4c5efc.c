/* FUN_2c4c5efc @ 0x2c4c5efc */

void FUN_2c4c5efc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar4 = (uint)*(ushort *)((int)param_2 + 6);
  *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_2 + 6);
  if (uVar4 < 0xe) {
    if (uVar4 != 0) goto LAB_2c4c5f12;
    FUN_2c6741e8(0x42,DAT_2c4c5f98,DAT_2c4c5f94,0);
    param_1[1] = 1;
  }
  else {
    FUN_2c6741e8(0x42,DAT_2c4c5f98,DAT_2c4c5f94,uVar4);
    uVar4 = 0xd;
    *(undefined2 *)((int)param_1 + 6) = 0xd;
LAB_2c4c5f12:
    iVar5 = 8;
    iVar6 = 0;
    do {
      puVar8 = (undefined4 *)((int)param_2 + iVar5);
      puVar7 = (undefined4 *)((int)param_1 + iVar5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x18;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      uVar1 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar1;
    } while (iVar6 < (int)uVar4);
    if (uVar4 == 0xd) goto LAB_2c4c5f62;
  }
  puVar7 = param_1 + uVar4 * 6;
  do {
    uVar4 = uVar4 + 1;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0x8000000;
    puVar7[6] = 0;
    puVar7[2] = 0x8000000;
    puVar7[3] = 0;
    puVar7 = puVar7 + 6;
  } while (uVar4 != 0xd);
LAB_2c4c5f62:
  *param_1 = *param_2;
  *(undefined2 *)((int)param_1 + 6) = 0xd;
  return;
}

