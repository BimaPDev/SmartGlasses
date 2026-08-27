/* FUN_2c5c7fb4 @ 0x2c5c7fb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7fb4(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_2c47245c(0,0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined1 *)(iVar1 + 4) = param_1;
    FUN_2c5dc53c(1,0xfa3,0,0,DAT_2c5c68e8,iVar1,unaff_r4,unaff_lr);
    FUN_2c5dc5e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xfc,_LAB_2c5c7ff8,_LAB_2c5c7ff4,_LAB_2c5c7ff0);
}

