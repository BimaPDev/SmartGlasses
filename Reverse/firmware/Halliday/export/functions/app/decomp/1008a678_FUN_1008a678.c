/* FUN_1008a678 @ 0x1008a678 */

int FUN_1008a678(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
  for (uVar4 = 0; uVar4 <= uVar5 && uVar5 != uVar4; uVar4 = uVar4 + 1) {
    iVar3 = iVar1 + uVar4 * 8;
    if (((int)((uint)*(byte *)(iVar3 + 7) << 0x1e) < 0) &&
       ((*(uint *)(iVar3 + 4) & 0xffffff) == param_2)) goto LAB_1008a68e;
  }
  if (uVar5 == uVar4) {
    uVar4 = uVar5 + 1 & 0x3f;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar4 << 4);
    iVar1 = FUN_10094280(iVar1,uVar4 << 3,DAT_1008a714,uVar4,param_4);
    *(int *)(param_1 + 0xc) = iVar1;
    uVar4 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      puVar7 = (undefined4 *)(iVar1 + uVar4 * 8);
      puVar6 = (undefined4 *)(iVar1 + -8 + uVar4 * 8);
      uVar2 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar2;
    }
    FUN_10126914(iVar1);
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    uVar2 = FUN_10094254(8,DAT_1008a714);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    *puVar7 = uVar2;
    FUN_1012b1de(*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    *(byte *)(iVar1 + 7) = *(byte *)(iVar1 + 7) | 2;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xff000000 | param_2 & 0xffffff;
  }
  else {
LAB_1008a68e:
    iVar1 = iVar1 + uVar4 * 8;
  }
  return iVar1;
}

