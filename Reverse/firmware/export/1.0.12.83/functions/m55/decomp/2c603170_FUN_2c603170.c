/* FUN_2c603170 @ 0x2c603170 */

undefined4 FUN_2c603170(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) == 0) {
    iVar4 = 8;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    do {
      param_3 = uVar5;
      uVar5 = param_3 + 1;
      if (((int)((uint)*(byte *)((int)puVar1 + 7) << 0x1f) < 0) &&
         ((puVar1[1] & 0xffffff) == param_2)) {
        return *puVar1;
      }
      puVar1 = puVar1 + 2;
    } while (uVar5 != (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3);
    param_3 = param_3 + 2;
    uVar5 = param_3 & 0x3f;
    iVar4 = uVar5 << 3;
  }
  uVar5 = *(ushort *)(param_1 + 0x22) & 0xfffffe07 | uVar5 << 3;
  *(short *)(param_1 + 0x22) = (short)uVar5;
  puVar1 = (undefined4 *)FUN_2c62bebc(*(undefined4 **)(param_1 + 0xc),iVar4,param_3,uVar5,param_4);
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  uVar5 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
  while (uVar5 = uVar5 - 1, uVar5 != 0) {
    iVar4 = uVar5 * 8;
    puVar2 = puVar1 + uVar5 * 2;
    puVar1 = puVar1 + uVar5 * 2 + -2;
    if ((*(byte *)((int)puVar1 + 7) & 3) != 0) goto LAB_2c6031e6;
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar1 = *(undefined4 **)(param_1 + 0xc);
  }
  iVar4 = 0;
  puVar2 = puVar1;
LAB_2c6031e6:
  FUN_2c62c3b0(puVar2,8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = lv_mem_alloc(8);
  *(undefined4 *)(iVar6 + iVar4) = uVar3;
  lv_style_init_or_reset(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4));
  iVar6 = *(int *)(param_1 + 0xc) + iVar4;
  *(byte *)(iVar6 + 7) = *(byte *)(iVar6 + 7) | 1;
  iVar6 = *(int *)(param_1 + 0xc) + iVar4;
  *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 0xff000000 | param_2 & 0xffffff;
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4);
}

