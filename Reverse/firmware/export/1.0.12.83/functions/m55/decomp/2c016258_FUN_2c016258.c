/* FUN_2c016258 @ 0x2c016258 */

void FUN_2c016258(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 extraout_r1_01;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  int unaff_r8;
  undefined8 uVar6;
  char in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined1 in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  
  iVar2 = *(int *)(unaff_r4 + 0x10);
  *unaff_r6 = 0;
  if (iVar2 != 0) {
    FUN_2c015e74(*(undefined1 *)(unaff_r5 + 1),*(int *)(unaff_r4 + 4) + *(int *)(unaff_r4 + 0xc));
    FUN_2c016004(*(undefined1 *)(unaff_r5 + 1),*(int *)(unaff_r4 + 4) + *(int *)(unaff_r4 + 0xc),
                 *(undefined4 *)(unaff_r4 + 0x10));
    iVar2 = FUN_2c0065b4(*(undefined1 *)(unaff_r5 + 1),
                         *(int *)(unaff_r4 + 0xc) + *(int *)(unaff_r4 + 4),
                         *(int *)(unaff_r4 + 0x14) + *(int *)(unaff_r4 + 0xc),
                         *(undefined4 *)(unaff_r4 + 0x10));
    FUN_2c016094(*(undefined1 *)(unaff_r5 + 1),*(int *)(unaff_r4 + 4) + *(int *)(unaff_r4 + 0xc),
                 *(undefined4 *)(unaff_r4 + 0x10));
    if (iVar2 != 0) {
      if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c016420,DAT_2c016418,0x8be,iVar2);
      }
      *(undefined1 *)(unaff_r5 + 0x28) = 3;
      uVar1 = extraout_r1;
      goto LAB_2c0161d6;
    }
  }
  uVar6 = FUN_2c00647c(*(undefined1 *)(unaff_r5 + 1),0x7c);
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c016430,DAT_2c01642c,(int)uVar6);
  }
  *(undefined1 *)(unaff_r5 + 0x28) = 1;
  if ((unaff_r8 == 0) && (*(int *)(unaff_r5 + 0x1c) != 0)) {
    if ((*(int *)(unaff_r4 + 0x10) == 0) || (*unaff_r4 != '\x01')) {
      if ((*(int *)(unaff_r4 + 8) == 0) || (*unaff_r4 != '\x02')) goto LAB_2c016304;
      in_stack_00000010 = *(int *)(unaff_r4 + 4);
      in_stack_00000014 = *(int *)(unaff_r4 + 8);
    }
    else {
      in_stack_00000010 = *(int *)(unaff_r4 + 4) + *(int *)(unaff_r4 + 0xc);
      in_stack_00000014 = *(int *)(unaff_r4 + 0x10);
    }
    FUN_2c016124(*(undefined1 *)(unaff_r5 + 1));
    in_stack_0000000c = *unaff_r4;
    iVar3 = *(int *)(unaff_r5 + 0x20);
    in_stack_0000001c = 0;
    iVar2 = 0;
    if (iVar3 == 0) {
      in_stack_00000018 = -1;
    }
    else {
      do {
        in_stack_00000018 = iVar2;
        iVar3 = *(int *)(iVar3 + 0x1c);
        iVar2 = in_stack_00000018 + 1;
      } while (iVar3 != 0);
    }
    in_stack_00000020 = *unaff_r6;
    (**(code **)(unaff_r5 + 0x1c))(&stack0x0000000c);
    uVar1 = extraout_r1_00;
  }
LAB_2c016304:
  pcVar4 = *(char **)(unaff_r5 + 0x20);
  if (pcVar4 != (char *)0x0) {
    if (pcVar4 == unaff_r4) {
      *(undefined4 *)(unaff_r5 + 0x20) = 0;
    }
    else {
      do {
        pcVar5 = pcVar4;
        pcVar4 = *(char **)(pcVar5 + 0x1c);
        if (pcVar4 == (char *)0x0) goto LAB_2c01631a;
      } while (pcVar4 != unaff_r4);
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
    }
    if (*(int *)(unaff_r4 + 0x14) != 0) {
      FUN_2c015fb0(*(undefined1 *)(unaff_r5 + 1));
    }
    FUN_2c015fb0(*(undefined1 *)(unaff_r5 + 1));
    uVar1 = extraout_r1_01;
  }
LAB_2c01631a:
  *(undefined4 *)(unaff_r5 + 0x24) = 0;
LAB_2c0161d6:
  if ((*DAT_2c016410 ^ in_stack_00000024) == 0) {
    return;
  }
  FUN_2c00a1f8(1,uVar1,*DAT_2c016410 ^ in_stack_00000024,0);
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c016424,DAT_2c016418,0x8dc);
}

