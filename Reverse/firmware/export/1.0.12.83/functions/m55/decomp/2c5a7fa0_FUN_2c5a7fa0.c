/* FUN_2c5a7fa0 @ 0x2c5a7fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a7fa0(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _LAB_2c5a7ff8;
  uVar1 = _LAB_2c5a7ff4;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x11) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5a7ffc,0x134,uVar2,uVar1,1);
}

