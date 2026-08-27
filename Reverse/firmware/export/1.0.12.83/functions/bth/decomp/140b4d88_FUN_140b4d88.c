/* FUN_140b4d88 @ 0x140b4d88 */

undefined4 FUN_140b4d88(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != (int *)0x0) && (uVar1 = 0, param_1[2] != 0)) {
    return *(undefined4 *)(*param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4da4,DAT_140b4da0,param_3,uVar1,param_4);
}

