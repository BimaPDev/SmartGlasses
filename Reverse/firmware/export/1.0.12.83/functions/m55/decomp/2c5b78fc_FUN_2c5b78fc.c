/* FUN_2c5b78fc @ 0x2c5b78fc */

/* WARNING: Removing unreachable block (ram,0x2c5ace8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5b78fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = FUN_2c5abf68();
    iVar1 = *(int *)(iVar1 + 0x180);
    if ((iVar1 != 0) && ((*(char *)(iVar1 + 4) != '\0' || (iVar1 = func_0x2c5ae0c4(), iVar1 != 0))))
    {
      return iVar1;
    }
    FUN_2c5c55d8();
    uVar3 = _LAB_2c5ac4d8;
    iVar2 = *DAT_2c5c5950;
    iVar1 = FUN_2c66b624(_LAB_2c5c5954,_LAB_2c5ac4d8,0,0);
    if (iVar1 == 0) {
      uStack_20 = _LAB_2c5c5958;
    }
    else {
      iVar1 = FUN_2c66b624(_LAB_2c5c5968,uVar3);
      if (iVar1 == 0) {
        uStack_20 = _LAB_2c5c596c;
      }
      else {
        iVar1 = func_0x2c5c52ec(uVar3,&uStack_20);
        if (iVar1 == 0) {
          if (*DAT_2c5c5950 == iVar2) {
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c5960,0xd9,_LAB_2c5c5964,_LAB_2c5c595c,uVar3,uStack_20);
  }
  if (*(int *)(param_1 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5b7944,0x4b,_LAB_2c5b7940);
  }
  iVar1 = FUN_2c5abf68();
  *(undefined1 *)(iVar1 + 0x18c) = 1;
  if (*(int *)(iVar1 + 0x188) != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x188) + 8);
    if ((*(char *)(iVar1 + 0x48) != '\0') || (*(char *)(iVar1 + 0x49) != '\0')) {
      uStack_20 = DAT_2c5e0320;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e031c,0x1d3,DAT_2c5e0324);
    }
    iVar2 = FUN_2c5dd304();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      uStack_20 = DAT_2c5e0314;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e031c,0x1b9,DAT_2c5e0318);
    }
    FUN_2c5de7b0(iVar1,1);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    uVar3 = FUN_2c5dd304(iVar1);
    FUN_2c5dffd0(iVar1,uVar3,0);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ace20,0x12e,_LAB_2c5ace18,_LAB_2c5ace14);
}

