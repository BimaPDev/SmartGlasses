/* FUN_2c60322c @ 0x2c60322c */

int FUN_2c60322c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) == 0) {
    iVar4 = 8;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    iVar4 = *(int *)(param_1 + 0xc);
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
      if (((*(byte *)(iVar4 + 7) & 2) != 0) && ((*(uint *)(iVar4 + 4) & 0xffffff) == param_2)) {
        return iVar4;
      }
      iVar4 = iVar4 + 8;
    } while (uVar3 != (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3);
    param_3 = uVar2 + 2 & 0x3f;
    iVar4 = param_3 << 3;
    uVar3 = param_3;
  }
  uVar3 = *(ushort *)(param_1 + 0x22) & 0xfffffe07 | uVar3 << 3;
  *(short *)(param_1 + 0x22) = (short)uVar3;
  iVar4 = FUN_2c62bebc(*(int *)(param_1 + 0xc),iVar4,param_3,uVar3,param_4);
  *(int *)(param_1 + 0xc) = iVar4;
  uVar3 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
  while (uVar3 = uVar3 - 1, uVar3 != 0) {
    puVar5 = (undefined4 *)(iVar4 + uVar3 * 8);
    *puVar5 = puVar5[-2];
    puVar5[1] = puVar5[-1];
    iVar4 = *(int *)(param_1 + 0xc);
  }
  FUN_2c62c3b0(iVar4,8);
  puVar5 = *(undefined4 **)(param_1 + 0xc);
  uVar1 = lv_mem_alloc(8);
  *puVar5 = uVar1;
  lv_style_init_or_reset(**(undefined4 **)(param_1 + 0xc));
  *(byte *)(*(int *)(param_1 + 0xc) + 7) = *(byte *)(*(int *)(param_1 + 0xc) + 7) | 2;
  *(uint *)(*(int *)(param_1 + 0xc) + 4) =
       *(uint *)(*(int *)(param_1 + 0xc) + 4) & 0xff000000 | param_2 & 0xffffff;
  return *(int *)(param_1 + 0xc);
}

