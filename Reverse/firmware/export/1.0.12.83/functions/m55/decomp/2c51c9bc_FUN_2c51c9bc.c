/* FUN_2c51c9bc @ 0x2c51c9bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51c9bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c51ca1c,0x22f,_LAB_2c51ca18,_LAB_2c51ca14,_LAB_2c51ca10);
  }
  iVar2 = FUN_2c5efb5c(iVar1);
  if (iVar2 == 0) {
    iVar1 = FUN_2c5efbb4(iVar1);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_2c5efb5c(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5221cc,0xd1,_LAB_2c5221c8,_LAB_2c5221c0,*(undefined1 *)(iVar1 + 0x10),
               *_LAB_2c5221bc);
}

