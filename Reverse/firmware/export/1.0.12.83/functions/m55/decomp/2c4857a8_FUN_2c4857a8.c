/* FUN_2c4857a8 @ 0x2c4857a8 */

undefined4 FUN_2c4857a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != (int *)0x0) && (uVar1 = 0, param_1[2] != 0)) {
    return *(undefined4 *)(*param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4857c4,DAT_2c4857c0,param_3,uVar1,param_4);
}

