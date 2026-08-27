/* FUN_2c5f76c4 @ 0x2c5f76c4 */

void FUN_2c5f76c4(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar8 = DAT_2c5f7844;
  uVar7 = DAT_2c5f783c;
  uVar6 = DAT_2c5f7838;
  iVar10 = *(int *)(param_1 + 0x14);
  iVar9 = *(int *)(param_1 + 8);
  do {
    uVar3 = DAT_2c5f7844;
    uVar4 = DAT_2c5f783c;
    uVar5 = DAT_2c5f7838;
    if (iVar9 <= iVar10) {
LAB_2c5f76e6:
      while( true ) {
        if (iVar9 <= iVar10) {
          return;
        }
        cVar1 = *(char *)(*(int *)(param_1 + 4) + iVar10);
        if (cVar1 == '\0') break;
        if ((cVar1 != ' ') && (*(char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x14)) != '\t'))
        {
          return;
        }
        iVar10 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar10;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f7840,0xe7,uVar3,uVar4,uVar5);
    }
    iVar11 = *(int *)(param_1 + 4);
    if (*(char *)(iVar11 + iVar10) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f7840,0xe7,uVar8,uVar7,uVar6);
    }
    if ((*(char *)(iVar11 + iVar10) != ' ') && (*(char *)(iVar11 + iVar10) != '\t')) {
      if (*(char *)(iVar11 + iVar10) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5f7840,0xe7,DAT_2c5f7844,DAT_2c5f783c,DAT_2c5f7838);
      }
      if (*(char *)(iVar11 + iVar10) == '\r') {
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x14) = iVar10;
        uVar3 = DAT_2c5f7844;
        uVar4 = DAT_2c5f783c;
        uVar5 = DAT_2c5f7838;
        if (iVar9 <= iVar10) goto LAB_2c5f76e6;
        cVar1 = *(char *)(iVar11 + iVar10);
        bVar2 = true;
      }
      else {
        bVar2 = false;
        cVar1 = *(char *)(iVar11 + iVar10);
      }
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5f7840,0xe7,DAT_2c5f7844,DAT_2c5f783c,DAT_2c5f7838);
      }
      iVar10 = *(int *)(param_1 + 0x14);
      if (*(char *)(iVar11 + iVar10) == '\n') {
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x14) = iVar10;
        uVar3 = DAT_2c5f7844;
        uVar4 = DAT_2c5f783c;
        uVar5 = DAT_2c5f7838;
      }
      else {
        uVar3 = DAT_2c5f7844;
        uVar4 = DAT_2c5f783c;
        uVar5 = DAT_2c5f7838;
        if ((iVar10 < iVar9) && (!bVar2)) {
          return;
        }
      }
      goto LAB_2c5f76e6;
    }
    iVar10 = iVar10 + 1;
    *(int *)(param_1 + 0x14) = iVar10;
  } while( true );
}

