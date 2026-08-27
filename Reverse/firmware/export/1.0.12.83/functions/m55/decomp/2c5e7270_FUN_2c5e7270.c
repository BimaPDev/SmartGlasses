/* FUN_2c5e7270 @ 0x2c5e7270 */

undefined4 FUN_2c5e7270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_2c5e697c();
  piVar2 = (int *)(**(code **)(iVar1 + 0x34))(param_2);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    return *(undefined4 *)(*piVar2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5e72b4,0x24b,DAT_2c5e72b0,DAT_2c5e72ac,param_1,param_2);
}

