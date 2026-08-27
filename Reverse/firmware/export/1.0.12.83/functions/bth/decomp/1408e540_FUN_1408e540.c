/* FUN_1408e540 @ 0x1408e540 */

/* WARNING: Removing unreachable block (ram,0x14085fa0) */

int FUN_1408e540(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  code *pcVar7;
  undefined4 unaff_lr;
  int iStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (param_1 == 0) {
    FUN_14075428(param_2);
    return 1;
  }
  iVar4 = FUN_14075258(param_2);
  iVar5 = FUN_1407524c(param_2);
  if (3 < iVar4 - iVar5) {
    iVar4 = FUN_14075250(param_2);
    iVar5 = FUN_14075260(param_2);
    if (-1 < iVar4 - iVar5) {
      iVar4 = FUN_1408a7dc(param_1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408e620);
      }
      if (*(char *)(iVar4 + 0x96) != '\t') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408e61c);
      }
      iVar5 = *(int *)(iVar4 + 8);
      sVar1 = *(short *)(iVar4 + 0x14);
      psVar6 = (short *)FUN_140754f4(param_2,4);
      psVar6[1] = sVar1;
      *psVar6 = *(short *)(param_2 + 8) + -4;
      if (*(short *)(iVar5 + 0xe) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408e624);
      }
      iStack_1c = *DAT_1408605c;
      iVar4 = FUN_14085e30();
      if (iVar4 != 0) {
        if (*(char *)(iVar4 + 0x4b) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_14086068,DAT_14086064);
        }
        uStack_24 = *(undefined2 *)(param_2 + 8);
        pcVar7 = *(code **)(DAT_14086060 + 0x5c);
        uStack_20 = 0xffffffff;
        uStack_22 = 0;
        iStack_28 = iVar4;
        if (*(char *)(iVar4 + 0x3c) == '\x01') {
          if (pcVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_14086078,DAT_1408607c);
          }
          (*pcVar7)(99,&iStack_28);
          uVar3 = *(ushort *)(iVar4 + 0x1c);
        }
        else {
          if (pcVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_14086078,DAT_14086074);
          }
          (*pcVar7)(0x62,&iStack_28);
          uVar3 = *(ushort *)(iVar4 + 0x1c);
        }
        cVar2 = FUN_1407848c(uVar3 | 0x2000,param_2);
        if (*(char *)(iVar4 + 0x3d) != '\0') {
          *(undefined1 *)(iVar4 + 0x3d) = 5;
        }
        if (cVar2 == 1) {
          FUN_14075428(param_2,unaff_lr,0x89d);
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_14086070);
        }
        if (*DAT_1408605c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_14039adc();
        }
        return (int)cVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408606c,DAT_14086064);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1408e618);
}

