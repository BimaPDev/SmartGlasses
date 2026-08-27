/* FUN_2c6495b8 @ 0x2c6495b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6495b8(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined4 uStack_c;
  
  uVar1 = _DAT_2c649614;
  FUN_2c648600(_LAB_2c649610);
  FUN_2c648600(_LAB_2c649618);
  FUN_2c648600(uVar1);
  FUN_2c648600(_LAB_2c64961c);
  FUN_2c648600(_LAB_2c649620);
  FUN_2c648600(_LAB_2c649624);
  FUN_2c648600(uVar1);
  FUN_2c648600(_LAB_2c649628);
  FUN_2c648600(_LAB_2c64962c);
  FUN_2c648600(_LAB_2c649630);
  FUN_2c648600(uVar1);
  FUN_2c648600(_LAB_2c649634);
  iVar4 = *DAT_2c648674;
  uStack_c = extraout_r1;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649638,&uStack_c,&uStack_c,iVar4,unaff_r4,unaff_lr
                      );
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
  if (*DAT_2c648674 == iVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

