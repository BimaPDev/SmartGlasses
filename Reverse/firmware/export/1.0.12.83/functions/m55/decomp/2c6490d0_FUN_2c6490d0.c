/* FUN_2c6490d0 @ 0x2c6490d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6490d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *DAT_2c649158;
  if (param_1 == 2) {
    uVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4),param_2,param_3,0);
    FUN_2c648600(_LAB_2c64916c,uVar3);
    func_0x2c674498(uVar3,0x10);
    FUN_2c673e88(0x20c4,(int)&uStack_10 + 2);
    FUN_2c648600(DAT_2c649170,uStack_10._2_2_);
    uVar3 = FUN_2c648600(DAT_2c649174);
    if (*DAT_2c649158 == iStack_c) {
      return uVar3;
    }
  }
  else {
    FUN_2c648600(_DAT_2c64915c);
    FUN_2c648600(_DAT_2c649160);
    FUN_2c648600(_DAT_2c649164);
    if (*DAT_2c649158 == iStack_c) {
      uStack_10 = _LAB_2c649168;
      iVar4 = *DAT_2c648674;
      iStack_c = extraout_r1;
      iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649168,&iStack_c,&iStack_c,iVar4,unaff_r4,
                           unaff_lr);
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
      if (*DAT_2c648674 == iVar4) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

