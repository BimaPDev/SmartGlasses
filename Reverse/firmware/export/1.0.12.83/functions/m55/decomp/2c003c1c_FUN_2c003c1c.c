/* FUN_2c003c1c @ 0x2c003c1c */

int FUN_2c003c1c(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_2c003c4c + param_1 * 4);
  uVar3 = *(uint *)(iVar4 + 0xc);
  if (((uVar3 & 0x1f00) != 0) && (param_3 != 0)) {
    puVar1 = param_2;
    iVar2 = param_3;
    do {
      iVar2 = iVar2 + -1;
      *(undefined1 *)(iVar4 + 8) = *puVar1;
      if (puVar1 + 1 == param_2 + ((uVar3 & 0x1fff) >> 8)) {
        return iVar2;
      }
      param_3 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  return param_3;
}

