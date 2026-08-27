/* FUN_14027b88 @ 0x14027b88 */

undefined4 FUN_14027b88(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_14027bd0;
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027bd4,param_1,param_3,param_4,param_4);
  }
  if (*(char *)(DAT_14027bcc + param_2) != '\0') {
    if (param_2 == 0) {
      *(undefined4 *)(DAT_14027bd0 + 0x30) = 1;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 2;
    }
    else {
      *(undefined4 *)(DAT_14027bd0 + 0x2c) = 0;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 1;
    }
    *(uint *)(DAT_14027bd0 + 0x10) = *(uint *)(DAT_14027bd0 + 0x10) | 0x8000;
    return 0;
  }
  return 1;
}

