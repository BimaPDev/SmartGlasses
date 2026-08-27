/* FUN_2c4880f0 @ 0x2c4880f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4880f0(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 in_r3;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = in_r3;
  iStack_8 = func_0x2c48a408();
  iStack_c = (int)((longlong)_LAB_2c488118 * (longlong)iStack_8 >> 0x22) - (iStack_8 >> 0x1f);
  iStack_8 = iStack_8 + iStack_c * -10;
  iVar3 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c48811c,&iStack_c,&iStack_c);
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

