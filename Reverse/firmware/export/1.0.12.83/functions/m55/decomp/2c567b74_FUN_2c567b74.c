/* FUN_2c567b74 @ 0x2c567b74 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567b74(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_34;
  
  iStack_34 = *DAT_2c567e54;
  iVar1 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),_LAB_2c567e58
                       ,0);
  if (iVar1 == 0) {
    uStack_4c = *(undefined4 *)(_LAB_2c567e7c + 4);
    uStack_50 = _LAB_2c567e74;
    FUN_2c593c2c(param_1,&uStack_50,0);
    if (*DAT_2c567e54 == iStack_34) {
      return;
    }
  }
  else {
    iVar2 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                         _LAB_2c567e5c);
    iVar1 = _LAB_2c567e70;
    if ((iVar2 != 0) && (iVar1 = _LAB_2c567e8c, *(int *)(param_2 + 0x68) != 0)) {
      iVar1 = FUN_2c66b624(*(int *)(param_2 + 0x68),_LAB_2c567e60);
      if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = FUN_2c5c55d8();
      iVar2 = FUN_2c5c5d50(uVar3,_LAB_2c567e60);
      iVar1 = _LAB_2c567e78;
      if (iVar2 != 0) {
        halt_baddata();
      }
    }
    uStack_50 = _LAB_2c567e74;
    uStack_4c = *(undefined4 *)(iVar1 + 4);
    FUN_2c593c2c(param_1,&uStack_50,0);
    if (*DAT_2c567e54 == iStack_34) {
      FUN_2c5921a0(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

