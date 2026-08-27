/* FUN_2c5aca7c @ 0x2c5aca7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5aca7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_34 [32];
  int iStack_14;
  
  iStack_14 = *DAT_2c5acb50;
  FUN_2c63b584(_LAB_2c5acb54,param_2,param_3,0);
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_2c620f94();
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  FUN_2c5ac948(param_1,0);
  FUN_2c5ac61c(param_1);
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_2c5d5cd0();
    iVar2 = *(int *)(param_1 + 0x1a4);
    if (iVar2 != 0) {
      FUN_2c5d5ccc(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar2);
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  iVar2 = FUN_2c4932a0();
  if ((iVar2 == 0) && (iVar2 = thunk_FUN_2c489a64(), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5acb68,0x1a7,_LAB_2c5acb64,_LAB_2c5acb60);
  }
  *(undefined1 *)(param_1 + 0x179) = 0;
  FUN_2c62c3b0(auStack_34,0x20);
  FUN_2c5c55d8();
  uVar3 = FUN_2c5c561c();
  FUN_2c62dbd4(auStack_34,0x1f,DAT_2c5acb58);
  uVar1 = FUN_2c5c55d8();
  FUN_2c5c6074(uVar1,DAT_2c5acb5c,param_1 + 0x1b9,auStack_34,uVar3);
  FUN_2c673cc8(2,0);
  if (*DAT_2c5acb50 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

