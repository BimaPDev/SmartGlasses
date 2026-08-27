/* FUN_2c0040e8 @ 0x2c0040e8 */

void FUN_2c0040e8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(DAT_2c004100 + param_1 * 4);
    do {
    } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xfffffeff;
  }
  return;
}

