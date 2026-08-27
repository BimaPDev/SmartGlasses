/* FUN_140b4da8 @ 0x140b4da8 */

undefined4 FUN_140b4da8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4dc4,DAT_140b4dc0,param_3,uVar1,param_4);
}

