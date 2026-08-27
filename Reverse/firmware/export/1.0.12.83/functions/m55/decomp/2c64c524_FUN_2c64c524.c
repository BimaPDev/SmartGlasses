/* FUN_2c64c524 @ 0x2c64c524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64c524(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piStack_20;
  int iStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c64c5c0;
  if (param_1 == 2) {
    uVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4),param_2,param_3,0);
    func_0x2c6739d8();
    iStack_1c = 0x30000;
    _uStack_18 = CONCAT22(uStack_16,0x201);
    uStack_10 = uStack_10 & 0xfffffff8 | 3;
    uStack_14 = uVar3;
    func_0x2c4bb34c(1,&iStack_1c);
    func_0x2c4bb634(1,_LAB_2c64c5cc,_LAB_2c64c5c8);
    piStack_20 = (int *)0x6c0;
    uVar3 = FUN_2c4bb66c(1,_DAT_2c64c5d0,0x100,0,0,&piStack_20);
    if (*_LAB_2c64c5c0 == iStack_c) {
      return uVar3;
    }
  }
  else if (*_LAB_2c64c5c0 == iStack_c) {
    uStack_10 = _LAB_2c64c5c4;
    iStack_1c = *DAT_2c648674;
    piStack_20 = &iStack_c;
    iStack_c = param_2;
    iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c64c5c4);
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
    if (*DAT_2c648674 == iStack_1c) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

