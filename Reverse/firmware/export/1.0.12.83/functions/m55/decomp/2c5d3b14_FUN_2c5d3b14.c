/* FUN_2c5d3b14 @ 0x2c5d3b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d3b14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_28;
  int iStack_24;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c5d3bac;
  iStack_28 = 0;
  iStack_24 = 0;
  uVar1 = FUN_2c5e31b4(0x38,&iStack_28,param_3,0);
  if (iStack_24 != 0 || iStack_28 != 0) {
    FUN_2c5c685c();
    iVar2 = FUN_2c5c6d94();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c5d3bb4,0x3db,_LAB_2c5d3bb8,_LAB_2c5d3bb0,uVar1,iStack_28);
    }
  }
  if (*_LAB_2c5d3bac == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

