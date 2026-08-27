/* FUN_1408e628 @ 0x1408e628 */

/* WARNING: Removing unreachable block (ram,0x14085fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408e628(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  code *pcVar8;
  int iVar9;
  undefined4 unaff_lr;
  int iStack_28;
  
  iStack_28 = param_4;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,_LAB_1408e70c);
  }
  iVar4 = FUN_1408a7dc();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,_LAB_1408e70c);
  }
  if (*(char *)(iVar4 + 0x96) != '\t') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,_LAB_1408e704);
  }
  iVar5 = FUN_1407522c((param_3 & 0xffff) + 9 & 0xffff);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,_LAB_1408e710,param_3);
  }
  *(undefined4 *)(iVar5 + 0xc) = 0;
  FUN_140754ec(iVar5,9);
  *(int *)(iVar5 + 0xc) = param_4;
  uVar6 = FUN_14075458(iVar5,param_3 & 0xffff);
  FUN_140e5278(uVar6,param_2,param_3);
  iVar9 = *(int *)(iVar4 + 8);
  sVar1 = *(short *)(iVar4 + 0x14);
  psVar7 = (short *)FUN_140754f4(iVar5,4);
  psVar7[1] = sVar1;
  *psVar7 = *(short *)(iVar5 + 8) + -4;
  if (*(short *)(iVar9 + 0xe) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,_LAB_1408e708);
  }
  iVar9 = *DAT_1408605c;
  iVar4 = FUN_14085e30();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408606c,DAT_14086064);
  }
  if (*(char *)(iVar4 + 0x4b) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14086068,DAT_14086064);
  }
  pcVar8 = *(code **)(DAT_14086060 + 0x5c);
  iStack_28 = iVar4;
  if (*(char *)(iVar4 + 0x3c) == '\x01') {
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14086078,DAT_1408607c);
    }
    (*pcVar8)(99,&iStack_28);
    uVar3 = *(ushort *)(iVar4 + 0x1c);
  }
  else {
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14086078,DAT_14086074);
    }
    (*pcVar8)(0x62,&iStack_28);
    uVar3 = *(ushort *)(iVar4 + 0x1c);
  }
  cVar2 = FUN_1407848c(uVar3 | 0x2000,iVar5);
  if (*(char *)(iVar4 + 0x3d) != '\0') {
    *(undefined1 *)(iVar4 + 0x3d) = 5;
  }
  if (cVar2 == 1) {
    FUN_14075428(iVar5,unaff_lr,0x89d);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_14086070);
  }
  if (*DAT_1408605c != iVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return (int)cVar2;
}

