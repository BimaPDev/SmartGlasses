/* FUN_2c003b78 @ 0x2c003b78 */

void FUN_2c003b78(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_2c003bc8 + param_1 * 4);
  *(uint *)(iVar3 + 4) = DAT_2c003bcc & param_3 << 0xc | DAT_2c003bd0 & *(uint *)(iVar3 + 4);
  do {
    iVar2 = param_3;
    if (((*(uint *)(iVar3 + 0xc) & 0x1f00) != 0) && (param_3 != 0)) {
      puVar1 = param_2;
      while( true ) {
        iVar2 = iVar2 + -1;
        *(undefined1 *)(iVar3 + 8) = *puVar1;
        if (puVar1 + 1 == param_2 + ((*(uint *)(iVar3 + 0xc) & 0x1fff) >> 8)) break;
        puVar1 = puVar1 + 1;
        if (iVar2 == 0) {
          return;
        }
      }
    }
  } while (iVar2 != 0);
  return;
}

