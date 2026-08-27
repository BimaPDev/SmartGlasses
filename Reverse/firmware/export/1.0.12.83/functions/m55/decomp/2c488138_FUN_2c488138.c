/* FUN_2c488138 @ 0x2c488138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c488138(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 in_r3;
  undefined8 uVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  uVar5 = FUN_2c48a2b8();
  uStack_c = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar1 = _LAB_2c488158;
  if ((int)uVar5 != 0) {
    uVar1 = _LAB_2c488154;
  }
  iVar4 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar1,&uStack_c,&uStack_c);
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
  if (*DAT_2c648674 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

