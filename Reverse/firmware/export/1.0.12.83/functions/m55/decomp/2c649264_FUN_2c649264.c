/* FUN_2c649264 @ 0x2c649264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649264(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_lr;
  
  iVar3 = FUN_2c646a84(_LAB_2c6492a8,0x1e);
  uVar2 = _DAT_2c6492ac;
  if (0 < iVar3) {
    iVar5 = 0;
    puVar6 = _LAB_2c6492a8;
    do {
      FUN_2c648600(uVar2,iVar5);
      iVar5 = iVar5 + 1;
      FUN_2c6444fc(10);
      FUN_2c6491e0(*puVar6);
      puVar6 = puVar6 + 1;
    } while (iVar3 != iVar5);
  }
  FUN_2c648600(_DAT_2c6492b0);
  uVar4 = FUN_2c646854();
  FUN_2c648600(_DAT_2c649244,uVar4);
  uVar2 = FUN_2c646824(uVar4);
  FUN_2c648600(_DAT_2c649248,uVar2);
  uVar2 = func_0x2c6469e4(uVar4);
  FUN_2c648600(_LAB_2c64924c,uVar2);
  iVar3 = func_0x2c646914(uVar4);
  uVar2 = _DAT_2c649260;
  if (iVar3 + 1U < 6) {
    uVar2 = *(undefined4 *)(_DAT_2c649250 + (iVar3 + 1U) * 4);
  }
  FUN_2c648600(_LAB_2c649254,uVar2);
  uVar2 = FUN_2c646948(uVar4);
  FUN_2c648600(_DAT_2c649258,uVar2);
  FUN_2c646978(uVar4);
  iVar5 = *DAT_2c648674;
  iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,_DAT_2c64925c,&stack0xfffffff4,&stack0xfffffff4,iVar5,
                       unaff_r4,unaff_lr);
  if (-1 < iVar3) {
    if (iVar3 < 0x7ff) {
      if (iVar3 == 0) goto LAB_2c648630;
    }
    else {
      iVar3 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar1 = (code *)FUN_2c648328();
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(_LAB_2c648678,iVar3);
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

