/* FUN_1008a9a8 @ 0x1008a9a8 */

void FUN_1008a9a8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = 0;
  FUN_1008a5b8(param_1,param_3,0xffff,0);
  uVar4 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
  while ((iVar6 = uVar5 * 8, uVar5 < uVar4 &&
         ((*(byte *)(*(int *)(param_1 + 0xc) + iVar6 + 7) & 3) != 0))) {
    uVar5 = uVar5 + 1;
  }
  uVar4 = uVar4 + 1 & 0x3f;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar4 << 4);
  iVar1 = FUN_10094280(*(int *)(param_1 + 0xc),uVar4 << 3,DAT_1008aa44);
  *(int *)(param_1 + 0xc) = iVar1;
  uVar4 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
  while (uVar4 = uVar4 - 1, uVar5 < uVar4) {
    puVar7 = (undefined4 *)(iVar1 + uVar4 * 8);
    puVar2 = (undefined4 *)(iVar1 + -8 + uVar4 * 8);
    uVar3 = puVar2[1];
    *puVar7 = *puVar2;
    puVar7[1] = uVar3;
  }
  FUN_10126914(iVar1 + iVar6);
  iVar1 = *(int *)(param_1 + 0xc) + iVar6;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6) = param_2;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xff000000 | param_3 & 0xffffff;
  FUN_1008a83c(param_1,param_3,0xffff);
  return;
}

