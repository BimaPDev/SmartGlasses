/* FUN_2c4883e0 @ 0x2c4883e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4883e0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined4 uStack_c;
  
  uVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
  FUN_2c648600(_LAB_2c488408);
  uStack_c = func_0x2c48925c(uVar1);
  iVar4 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c48840c,&uStack_c,&uStack_c,iVar4,unaff_r4,unaff_lr
                      );
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar3 = (code *)FUN_2c648328();
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

