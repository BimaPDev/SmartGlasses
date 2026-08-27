/* FUN_2c4856c8 @ 0x2c4856c8 */

void FUN_2c4856c8(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != (code *)0x0) {
    iVar1 = (*param_2)(0x18);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = param_1;
      *(code **)(iVar1 + 0x10) = param_2;
      *(undefined4 *)(iVar1 + 0x14) = param_3;
    }
    return;
  }
  iVar1 = FUN_2c6441f0(*DAT_2c4856f8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c485700,DAT_2c4856fc);
}

