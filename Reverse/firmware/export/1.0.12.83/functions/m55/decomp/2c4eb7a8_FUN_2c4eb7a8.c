/* FUN_2c4eb7a8 @ 0x2c4eb7a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb7a8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x99,_LAB_2c4eb87c,_LAB_2c4eb878,_LAB_2c4eb894);
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9e,_LAB_2c4eb87c,_LAB_2c4eb878,_LAB_2c4eb898);
  }
  uVar1 = _LAB_2c4eb88c;
  if (*(byte *)(param_1 + 1) < 6) {
    uVar1 = *(undefined4 *)(_LAB_2c4eb870 + (uint)*(byte *)(param_1 + 1) * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa1,_LAB_2c4eb87c,_LAB_2c4eb878,_LAB_2c4eb874,*(undefined4 *)*param_1,uVar1);
}

