/* FUN_2c4bfdb8 @ 0x2c4bfdb8 */

int FUN_2c4bfdb8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *DAT_2c4bfddc;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bfde8,DAT_2c4bfde4,param_3,0,param_4);
  }
  if (param_1 < *DAT_2c4bfde0) {
    return (int)*(char *)(iVar1 + param_1);
  }
  return (int)*(char *)(iVar1 + *DAT_2c4bfde0 + -1);
}

