/* FUN_2c5d7934 @ 0x2c5d7934 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d7934(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 *puStack_25c;
  undefined4 uStack_258;
  undefined1 **ppuStack_254;
  undefined4 uStack_250;
  undefined1 auStack_24c [32];
  undefined1 auStack_22c [512];
  uint uStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  
  iVar3 = FUN_2c48e3b8(param_2);
  uVar7 = _LAB_2c5d7a14;
  uVar2 = DAT_2c5d7a0c;
  iVar5 = LAB_2c5d7a08;
  if (iVar3 != 0) {
    FUN_2c48e424(iVar3,_LAB_2c5d79fc);
    pcVar4 = (char *)FUN_2c48de10();
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      iVar5 = FUN_2c66b624(pcVar4,_LAB_2c5d7a00);
      if ((iVar5 != 0) && (iVar5 = FUN_2c4969c8(), iVar5 != 0)) {
        FUN_2c4967a0(1);
      }
      piVar8 = *(int **)(param_1 + 0x10);
      piVar1 = *(int **)(param_1 + 0xc);
      do {
        if (piVar1 == piVar8) {
          FUN_2c48dea0(iVar3);
          return;
        }
        iVar5 = FUN_2c5d780c(*(undefined4 *)(*piVar1 + 4),*(undefined4 *)(*piVar1 + 8),pcVar4);
        piVar1 = piVar1 + 1;
      } while (iVar5 != 0);
      uStack_28 = DAT_2c5d7a04;
      pcStack_24 = pcVar4;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,LAB_2c5d7a08,0x67,DAT_2c5d7a0c);
    }
    uStack_28 = _LAB_2c5d7a10;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,LAB_2c5d7a08,0x56,DAT_2c5d7a0c);
  }
  uStack_2c = *DAT_2c62c914;
  puStack_25c = &stack0x00000004;
  iVar6 = FUN_2c66c4ec(LAB_2c5d7a08);
  piVar1 = DAT_2c62c920;
  iVar3 = 0;
  if (iVar6 != 0) {
    pcVar4 = (char *)(iVar6 + 1 + iVar5);
    do {
      pcVar4 = pcVar4 + -1;
      if ((*pcVar4 == '/') || (*pcVar4 == '\\')) {
        iVar3 = iVar6 + 1;
        break;
      }
      iVar6 = iVar6 + -1;
      iVar3 = 0;
    } while (iVar6 != 0);
  }
  uVar9 = FUN_2c629df4();
  piVar8 = DAT_2c62c924;
  iVar6 = (int)uVar9;
  if (*piVar1 != 0) {
    uStack_250 = 0;
    FUN_2c674268(auStack_24c,0,0x1d);
    FUN_2c6742b8(&uStack_250,0x20);
    ppuStack_254 = &puStack_25c;
    uStack_258 = uVar7;
    FUN_2c646854();
    uVar7 = FUN_2c646824();
    FUN_2c62dbd4(auStack_22c,0x200,DAT_2c62c91c,&uStack_250,uVar7,
                 *(undefined4 *)(DAT_2c62c918 + 0xc),iVar6 - *piVar8,uVar2,&uStack_258,iVar3 + iVar5
                 ,0x51);
    uVar9 = (*(code *)*piVar1)(auStack_22c);
  }
  *piVar8 = iVar6;
  if ((*DAT_2c62c914 ^ uStack_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*DAT_2c62c914 ^ uStack_2c,0);
}

