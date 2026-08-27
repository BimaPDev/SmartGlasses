/* FUN_1408e820 @ 0x1408e820 */

/* WARNING: Removing unreachable block (ram,0x14085fa0) */

int FUN_1408e820(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_lr;
  int iStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar5 = FUN_1408a7dc();
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408e930);
  }
  if (*(char *)(iVar5 + 0x96) != '\t') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408e92c);
  }
  piVar10 = (int *)*param_2;
  if (param_2 == piVar10) {
    iVar12 = 0;
    uVar6 = 9;
LAB_1408e864:
    iVar11 = FUN_1407522c(uVar6);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408e938,iVar12);
    }
    *(undefined4 *)(iVar11 + 0xc) = 0;
    FUN_140754ec(iVar11,9);
    *(undefined4 *)(iVar11 + 0xc) = param_3;
    piVar10 = (int *)*param_2;
    if (param_2 != piVar10) {
      iVar12 = 0x3ea;
      do {
        if ((piVar10 != (int *)0x0) && (piVar10[3] != 0)) {
          uVar8 = FUN_14075458(iVar11,piVar10[3] & 0xffff);
          FUN_140e5278(uVar8,piVar10[4],piVar10[3]);
        }
        iVar12 = iVar12 + -1;
        piVar10 = (int *)*piVar10;
        if (iVar12 == 0) goto LAB_1408e8ec;
      } while (param_2 != piVar10);
    }
    iVar12 = *(int *)(iVar5 + 8);
    sVar2 = *(short *)(iVar5 + 0x14);
    psVar7 = (short *)FUN_140754f4(iVar11,4);
    psVar7[1] = sVar2;
    *psVar7 = *(short *)(iVar11 + 8) + -4;
    if (*(short *)(iVar12 + 0xe) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1408e934);
    }
    iVar12 = *DAT_1408605c;
    iVar5 = FUN_14085e30();
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408606c,DAT_14086064);
    }
    if (*(char *)(iVar5 + 0x4b) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14086068,DAT_14086064);
    }
    uStack_24 = *(undefined2 *)(iVar11 + 8);
    pcVar9 = *(code **)(DAT_14086060 + 0x5c);
    uStack_22 = 0;
    iStack_28 = iVar5;
    if (*(char *)(iVar5 + 0x3c) == '\x01') {
      if (pcVar9 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14086078,DAT_1408607c);
      }
      (*pcVar9)(99,&iStack_28);
      uVar4 = *(ushort *)(iVar5 + 0x1c);
    }
    else {
      if (pcVar9 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14086078,DAT_14086074);
      }
      (*pcVar9)(0x62,&iStack_28);
      uVar4 = *(ushort *)(iVar5 + 0x1c);
    }
    cVar3 = FUN_1407848c(uVar4 | 0x2000,iVar11);
    if (*(char *)(iVar5 + 0x3d) != '\0') {
      *(undefined1 *)(iVar5 + 0x3d) = 5;
    }
    if (cVar3 == 1) {
      FUN_14075428(iVar11,unaff_lr,0x89d);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14086070);
    }
    if (*DAT_1408605c != iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
    return (int)cVar3;
  }
  iVar12 = piVar10[3];
  iVar11 = 0x3e9;
  piVar10 = (int *)*piVar10;
  do {
    if (param_2 == piVar10) {
      uVar6 = iVar12 + 9U & 0xffff;
      goto LAB_1408e864;
    }
    piVar1 = piVar10 + 3;
    iVar11 = iVar11 + -1;
    piVar10 = (int *)*piVar10;
    iVar12 = iVar12 + *piVar1;
  } while (iVar11 != 0);
LAB_1408e8ec:
                    /* WARNING: Subroutine does not return */
  FUN_1408a810();
}

