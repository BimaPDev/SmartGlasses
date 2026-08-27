/* FUN_2c48821c @ 0x2c48821c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48821c(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  uStack_c = FUN_2c489b44();
  iVar3 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c488230,&uStack_c,&uStack_c);
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

