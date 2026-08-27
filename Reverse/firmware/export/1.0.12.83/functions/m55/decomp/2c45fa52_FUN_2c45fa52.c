/* FUN_2c45fa52 @ 0x2c45fa52 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c45fa52(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  undefined4 unaff_lr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr14;
  undefined8 uVar8;
  undefined4 *in_stack_0000011c;
  undefined4 uVar9;
  int iStack_24;
  int *piStack_20;
  
  piStack_20 = *(int **)(unaff_r5 + 0xc);
  iStack_24 = unaff_r5 + 0x14;
  uVar1 = *(ushort *)(*param_2 + 0x24);
  uVar3 = *in_stack_0000011c;
  uVar5 = in_stack_0000011c[1];
  iVar7 = (uint)uVar1 << 0x1a;
  if (iStack_24 != 0) {
    iVar6 = *(int *)(unaff_r5 + 0x80);
    *piStack_20 = iVar6;
    piStack_20[1] = iVar7;
    piStack_20[2] = 0;
    *(char *)(iVar6 + 0xc) = (char)uVar3;
    iVar7 = _NMI;
    *(short *)(_HardFault + 0x1c) = (short)_Reset;
    *(ushort *)(iVar7 + 0x20) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _Reserved3 = uVar5;
  uVar4 = (uint)piStack_20 >> 0xc;
  if (uVar4 == 0 || SCARRY4(*(int *)(unaff_r5 + 8),*(int *)(unaff_r5 + 4))) {
    coprocessor_function(0xd,0xf,2,in_cr7,in_cr8,in_cr14);
    if (uVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = 0;
  uVar3 = *(undefined4 *)(uVar4 + 4);
  uVar8 = FUN_2c66c540(uVar3,_LAB_2c53e620,uVar5,iVar7,0);
  if ((int)uVar8 != 0) {
    iVar7 = FUN_2c66b624(uVar3,_LAB_2c53e624);
    if (iVar7 != 0) {
      return iVar7;
    }
    iStack_24 = _LAB_2c5949b0;
    piStack_20 = (int *)uVar9;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5949b8,0x3e,_LAB_2c5949b0,_LAB_2c5949b4);
  }
  iVar6 = *DAT_2c648674;
  iStack_24 = (int)((ulonglong)uVar8 >> 0x20);
  iVar7 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c53e628,&iStack_24,&iStack_24,iVar6,uVar9,unaff_lr)
  ;
  if (-1 < iVar7) {
    if (iVar7 < 0x7ff) {
      if (iVar7 == 0) goto LAB_2c648630;
    }
    else {
      iVar7 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar7);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar7);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar6) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

