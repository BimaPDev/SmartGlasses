/* FUN_2c63b0a8 @ 0x2c63b0a8 */

void FUN_2c63b0a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  int local_14;
  
  puVar1 = DAT_2c63b180;
  local_14 = *DAT_2c63b184;
  FUN_2c644044(*DAT_2c63b180,0xffffffff,param_3,0);
  piVar2 = DAT_2c63b18c;
  if (*DAT_2c63b188 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x89,DAT_2c63b198,DAT_2c63b194,DAT_2c63b190,*DAT_2c63b188);
  }
  if (*DAT_2c63b18c == 0) {
    iVar3 = FUN_2c60694c();
    if (iVar3 == 0) {
      iVar3 = *piVar2;
    }
    else {
      iVar3 = FUN_2c62bdd8(DAT_2c63b19c,30000,0);
      *piVar2 = iVar3;
    }
  }
  else {
    FUN_2c62be4c(*DAT_2c63b18c);
    iVar3 = *piVar2;
  }
  if (iVar3 != 0) {
    iVar3 = FUN_2c5e31b4(4,&local_20);
    if ((iVar3 == 0) || (iStack_1c < (int)(uint)(local_20 == 0))) {
      local_20 = 0x1e;
      iStack_1c = 0;
      FUN_2c62be58(*piVar2,30000);
      FUN_2c62be74(*piVar2);
    }
    else {
      FUN_2c62be58(*piVar2,local_20 * 1000);
      FUN_2c62be74(*piVar2);
    }
  }
  if (*DAT_2c63b184 == local_14) {
    FUN_2c644080(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

