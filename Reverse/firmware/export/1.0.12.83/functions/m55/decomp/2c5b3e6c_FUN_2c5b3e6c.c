/* FUN_2c5b3e6c @ 0x2c5b3e6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b3e6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short local_18 [2];
  int local_14;
  
  local_14 = *_LAB_2c5b3f30;
  uVar1 = registry_lookup(0x4044,param_2,param_3,0);
  uVar2 = FUN_2c5e2e80(_LAB_2c5b3f34);
  FUN_2c62b954(local_18,uVar1,uVar2,0,0,0x1fff,0);
  if (local_18[0] < 0x259) {
    if (local_18[0] < 0x12d) {
      FUN_2c60710c(*(undefined4 *)(param_1 + 4),0xaa);
      uVar1 = FUN_2c6041d4(*(undefined4 *)(param_1 + 0x10));
      FUN_2c60710c(uVar1,0xaa);
      FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x18);
    }
    else {
      FUN_2c60710c(*(undefined4 *)(param_1 + 4),0xc2);
      uVar1 = FUN_2c6041d4(*(undefined4 *)(param_1 + 0x10));
      FUN_2c60710c(uVar1,0xc2);
      FUN_2c607048(*(undefined4 *)(param_1 + 0x10),300,0x30);
    }
  }
  else {
    FUN_2c60710c(*(undefined4 *)(param_1 + 4),0xda);
    uVar1 = FUN_2c6041d4(*(undefined4 *)(param_1 + 0x10));
    FUN_2c60710c(uVar1,0xda);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x10),300,0x48);
  }
  if (*_LAB_2c5b3f30 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

