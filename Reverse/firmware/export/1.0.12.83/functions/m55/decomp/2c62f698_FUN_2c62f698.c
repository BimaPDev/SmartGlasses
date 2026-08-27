/* FUN_2c62f698 @ 0x2c62f698 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c62f698(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  func_0x2c6020dc(1);
  FUN_2c673c88();
  uVar2 = FUN_2c6741d8();
  puVar1 = _LAB_2c62f70c;
  *_LAB_2c62f708 = uVar2;
  *puVar1 = 0;
  iVar3 = func_0x2c6020e8();
  if (iVar3 == 0) {
    return 0;
  }
  if (*_LAB_2c62f710 != 0) {
    func_0x2c6020f4();
  }
  iVar5 = *DAT_2c648674;
  iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c62f714,&stack0xfffffff4,&stack0xfffffff4,iVar5,
                       unaff_r4,unaff_lr);
  if (-1 < iVar3) {
    if (iVar3 < 0x7ff) {
      if (iVar3 == 0) goto LAB_2c648630;
    }
    else {
      iVar3 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar4 = (code *)FUN_2c648328();
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(_LAB_2c648678,iVar3);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar3);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar5) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

