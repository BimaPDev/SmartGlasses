/* FUN_1006f474 @ 0x1006f474 */

undefined4 FUN_1006f474(int param_1,int param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_40 [9];
  
  iVar4 = DAT_1006f5d4;
  pbVar3 = (byte *)**(undefined4 **)(param_1 + 0x10);
  if (pbVar3 == (byte *)0x0) {
    return 0xffffffea;
  }
  if (pbVar3[1] != 4) {
    if (pbVar3[1] != 1) {
      return 0;
    }
    uVar7 = *(undefined4 *)(DAT_1006f5d4 + 0x1c);
    if (param_2 != -1) {
      *(uint *)(DAT_1006f5d4 + 0x1c) = *(uint *)(DAT_1006f5d4 + 0x1c) & 0xffffffc0;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 2;
      *(int *)(iVar4 + 0x20) = param_2;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 1;
    }
    iVar4 = DAT_1006f5d4;
    if (param_4 != 0) {
      *(uint *)(DAT_1006f5d4 + 0x1c) = *(uint *)(DAT_1006f5d4 + 0x1c) & 0xffffffc0;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x12;
      pbVar3 = param_3;
      do {
        pbVar5 = pbVar3 + 1;
        *(uint *)(iVar4 + 0x20) = (uint)*pbVar3;
        pbVar3 = pbVar5;
      } while (pbVar5 != param_3 + param_4);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 1;
    }
    *(undefined4 *)(DAT_1006f5d4 + 0x1c) = uVar7;
    return 0;
  }
  uVar7 = *(undefined4 *)(DAT_1006f5d4 + 0x2c);
  if (*pbVar3 < 4) {
    if (param_2 != -1) {
      *(uint *)(DAT_1006f5d4 + 0x2c) = DAT_1006f5d8 & *(uint *)(DAT_1006f5d4 + 0x2c);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
      *(int *)(iVar4 + 0x20) = param_2;
      *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x20;
    }
    iVar2 = DAT_1006f5d4;
    if (param_4 == 0) goto LAB_1006f508;
    *(uint *)(DAT_1006f5d4 + 0x2c) = DAT_1006f5e0 | DAT_1006f5dc & *(uint *)(DAT_1006f5d4 + 0x2c);
    for (uVar6 = param_4; iVar4 = DAT_1006f5d4, 3 < uVar6; uVar6 = uVar6 - 4) {
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) & 0xffffffdf;
      FUN_1011f46e(local_40,param_3 + (param_4 - uVar6),4);
      *(undefined4 *)(iVar2 + 0x20) = local_40[0];
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 0x20;
    }
    iVar2 = (param_4 >> 2) * -4 + param_4;
    if (iVar2 == 0) goto LAB_1006f508;
    *(uint *)(DAT_1006f5d4 + 0x2c) = *(uint *)(DAT_1006f5d4 + 0x2c) & 0xff03ffdf | iVar2 * 0x40000;
    FUN_1011f46e(local_40,param_3 + (param_4 >> 2) * 4);
  }
  else {
    if (0x20 < param_4) {
      return 0xffffffdf;
    }
    *(uint *)(DAT_1006f5d4 + 0x2c) = DAT_1006f5e4 & *(uint *)(DAT_1006f5d4 + 0x2c);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | param_4 << 0x12 | 0x10000004;
    iVar2 = FUN_1011f46e(local_40,param_3,param_4);
    *(int *)(iVar4 + 0x34) = param_2;
    while (iVar1 = iVar2 + -1, 0 < iVar1) {
      *(undefined4 *)(iVar4 + (iVar2 + 0x12) * 4) = local_40[iVar1];
      iVar2 = iVar1;
    }
  }
  *(undefined4 *)(iVar4 + 0x20) = local_40[0];
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x20;
LAB_1006f508:
  *(undefined4 *)(DAT_1006f5d4 + 0x2c) = uVar7;
  return 0;
}

