/* FUN_2c488364 @ 0x2c488364 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c488364(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_40 [32];
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4883cc;
  if (param_1 < 3) {
    if (*_LAB_2c4883cc == iStack_c) {
      uStack_10 = _LAB_2c4883d8;
      iStack_1c = *DAT_2c648674;
      uStack_20 = &iStack_c;
      iStack_c = param_2;
      iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c4883d8);
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
      if (*DAT_2c648674 == iStack_1c) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  else {
    uVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8),param_2,param_3,0);
    FUN_2c648600(_LAB_2c4883d0);
    func_0x2c4892fc(uVar1,auStack_40);
    uVar2 = FUN_2c648600(_LAB_2c4883d4,auStack_40[0],(int)&uStack_20 + 1);
    if (*_LAB_2c4883cc == iStack_c) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

