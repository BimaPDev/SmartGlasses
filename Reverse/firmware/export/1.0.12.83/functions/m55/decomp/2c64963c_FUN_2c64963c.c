/* FUN_2c64963c @ 0x2c64963c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64963c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  uVar1 = _LAB_2c649698;
  FUN_2c648600(_LAB_2c649694);
  uVar2 = _LAB_2c64969c;
  FUN_2c648600(_LAB_2c6496a0);
  FUN_2c648600(uVar1);
  FUN_2c648600(uVar2);
  FUN_2c648600(_DAT_2c6496a4);
  FUN_2c648600(_DAT_2c6496a8);
  FUN_2c648600(uVar1);
  FUN_2c648600(uVar2);
  FUN_2c648600(_DAT_2c6496ac);
  FUN_2c648600(_LAB_2c6496b0);
  FUN_2c648600(uVar1);
  FUN_2c648600(uVar2);
  iVar5 = *DAT_2c648674;
  iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,_DAT_2c6496b4,&stack0xfffffff4,&stack0xfffffff4,iVar5,
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
  if (*DAT_2c648674 == iVar5) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

