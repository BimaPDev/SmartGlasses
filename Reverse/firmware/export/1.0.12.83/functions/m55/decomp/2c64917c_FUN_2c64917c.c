/* FUN_2c64917c @ 0x2c64917c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64917c(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 auStack_c [2];
  
  auStack_c[0] = FUN_2c6684cc(*(undefined4 *)(param_2 + 4));
  FUN_2c6444fc();
  iVar3 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_DAT_2c6491a0,auStack_c,auStack_c);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_2c648630;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar1);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar1);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

