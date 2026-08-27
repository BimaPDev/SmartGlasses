/* FUN_1408cabc @ 0x1408cabc */

void FUN_1408cabc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return;
  }
  piVar5 = DAT_1408cb58 + 8;
  piVar2 = DAT_1408cb58;
  while( true ) {
    piVar3 = piVar2 + 1;
    iVar4 = *piVar2;
    if ((iVar4 != 0) && (iVar1 = FUN_140db784(param_1,iVar4 + 8,6), iVar1 == 0)) break;
    piVar2 = piVar3;
    if (piVar3 == piVar5) {
      return;
    }
  }
  piVar2 = (int *)(iVar4 + 0x14);
  while( true ) {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x16) == 0x19)) break;
    if ((int *)(iVar4 + 0x44) == piVar2) {
      return;
    }
  }
  if ((*(char *)(iVar1 + 0xab) == '\0') && (*(char *)(iVar1 + 0x96) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1408cb60,DAT_1408cb5c,*(undefined4 *)(iVar1 + 0xc),param_4);
  }
  return;
}

