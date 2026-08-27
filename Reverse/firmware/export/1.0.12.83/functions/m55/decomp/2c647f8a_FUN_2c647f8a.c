/* FUN_2c647f8a @ 0x2c647f8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c647f8a(uint param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uStack_c;
  
  uStack_c = *param_4;
  if (1 < (param_1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc4,_DAT_2c648060,_LAB_2c64805c,_LAB_2c648058,*(undefined4 *)(param_2 + 4));
  }
  if ((*_LAB_2c648054 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(param_1,*_LAB_2c648054 ^ uStack_c,0);
  }
  uStack_c = _LAB_2c648070;
  iVar3 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c648074,&uStack_c,&uStack_c);
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

