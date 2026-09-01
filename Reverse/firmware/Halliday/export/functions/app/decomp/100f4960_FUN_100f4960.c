/* FUN_100f4960 @ 0x100f4960 */

undefined4 FUN_100f4960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_100f497c;
  if (param_1 == 1) {
    *(undefined4 *)(DAT_100f497c + 4) = param_2;
    *(undefined4 *)(iVar1 + 8) = param_3;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100f4988,0xc2,DAT_100f4984,DAT_100f4980,param_4);
}

