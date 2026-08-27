/* FUN_1408a820 @ 0x1408a820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408a820(int param_1,undefined2 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                char param_6)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 unaff_lr;
  bool bVar10;
  uint local_28;
  
  uVar9 = param_4 & 0xffff;
  local_28 = param_4;
  iVar4 = FUN_1407522c(uVar9 + 9 & 0xffff);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,_LAB_1408a8c0,param_4);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0;
  FUN_140754ec(iVar4,9);
  *(undefined4 *)(iVar4 + 0xc) = param_5;
  bVar10 = param_6 == '\0';
  if (bVar10) {
    uVar5 = FUN_14075458(iVar4,uVar9);
    FUN_140e5278(uVar5,param_3,param_4);
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 8) + 0xe);
  }
  else {
    uVar5 = FUN_14075458(iVar4,uVar9);
    FUN_140e5278(uVar5,param_3,param_4);
    puVar6 = (undefined2 *)FUN_140754f4(iVar4,4);
    uVar2 = *(undefined2 *)(param_1 + 0x14);
    *puVar6 = param_2;
    puVar6[1] = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 8) + 0xe);
  }
  iVar7 = *DAT_1408605c;
  uVar9 = FUN_14085e30(uVar2,iVar4,bVar10,0);
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408606c,DAT_14086064);
  }
  if (*(char *)(uVar9 + 0x4b) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14086068,DAT_14086064);
  }
  pcVar8 = *(code **)(DAT_14086060 + 0x5c);
  local_28 = uVar9;
  if (*(char *)(uVar9 + 0x3c) == '\x01') {
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14086078,DAT_1408607c);
    }
    (*pcVar8)(99,&local_28);
    uVar1 = *(ushort *)(uVar9 + 0x1c);
  }
  else {
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14086078,DAT_14086074);
    }
    (*pcVar8)(0x62,&local_28);
    uVar1 = *(ushort *)(uVar9 + 0x1c);
  }
  if (bVar10) {
    cVar3 = FUN_1407848c(uVar1 | 0x1000,iVar4);
  }
  else {
    cVar3 = FUN_1407848c(uVar1 | 0x2000,iVar4);
  }
  if (*(char *)(uVar9 + 0x3d) != '\0') {
    *(undefined1 *)(uVar9 + 0x3d) = 5;
  }
  if (cVar3 == 1) {
    FUN_14075428(iVar4,unaff_lr,0x89d);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_14086070);
  }
  if (*DAT_1408605c != iVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return (int)cVar3;
}

