/* FUN_2c003bd4 @ 0x2c003bd4 */

int FUN_2c003bd4(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_2c003c10 + param_1 * 4);
  *(uint *)(iVar4 + 4) = DAT_2c003c14 & param_3 << 0xc | DAT_2c003c18 & *(uint *)(iVar4 + 4);
  uVar1 = (*(uint *)(iVar4 + 0xc) & 0x1fff) >> 8;
  if ((param_3 != 0) && (uVar1 != 0)) {
    puVar2 = param_2;
    iVar3 = param_3;
    do {
      iVar3 = iVar3 + -1;
      *(undefined1 *)(iVar4 + 8) = *puVar2;
      if (puVar2 + 1 == param_2 + uVar1) {
        return iVar3;
      }
      param_3 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
  }
  return param_3;
}

