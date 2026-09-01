/* FUN_100656bc @ 0x100656bc */

void FUN_100656bc(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_100652e4(4);
  if ((iVar1 != 0) && (*DAT_100656f8 != param_1)) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(iVar1 + 8);
    if (param_1 == 0) {
      *DAT_100656f8 = 0;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      uVar2 = 1;
    }
    else {
      *DAT_100656f8 = 1;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x100656e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,5,uVar2,0);
    return;
  }
  return;
}

