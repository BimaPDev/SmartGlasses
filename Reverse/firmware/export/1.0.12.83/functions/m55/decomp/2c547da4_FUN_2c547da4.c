/* FUN_2c547da4 @ 0x2c547da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547da4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar1 = FUN_2c5e317c(0x11,param_2,param_2,0,1);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547de0,0x100,_LAB_2c547dd8,_LAB_2c547ddc,_LAB_2c547dd8);
}

