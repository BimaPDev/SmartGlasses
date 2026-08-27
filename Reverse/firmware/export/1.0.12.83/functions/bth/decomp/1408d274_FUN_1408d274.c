/* FUN_1408d274 @ 0x1408d274 */

void FUN_1408d274(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  
  uVar5 = *DAT_1408d4c4;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  psVar3 = (short *)FUN_14075258(param_4);
  sVar2 = psVar3[1];
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1408d4d4,DAT_1408d4d0,0);
  }
  sVar1 = *psVar3;
  piVar4 = (int *)(DAT_1408d4c8 + 8);
  piVar6 = (int *)*piVar4;
  if (piVar6 != piVar4) {
    iVar7 = 0x3ea;
    do {
      if ((short)piVar6[2] == sVar1) {
        if (*(char *)((int)piVar6 + 10) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_1408d4d8,DAT_1408d4d0);
        }
        piVar6 = (int *)(param_2 + 0x14);
        piVar4 = piVar6;
        do {
          piVar4 = piVar4 + 1;
          iVar7 = *piVar4;
          if ((iVar7 != 0) && (*(short *)(iVar7 + 0x14) == sVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x43,DAT_1408d4dc,DAT_1408d4d0,sVar2,*(undefined2 *)(iVar7 + 0x12));
          }
        } while ((int *)(param_2 + 0x44) != piVar4);
        if (sVar1 == 0x33) {
          do {
            piVar6 = piVar6 + 1;
            if ((*piVar6 != 0) && (*(short *)(*piVar6 + 0x16) == 0x33)) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x40,DAT_1408d4e8);
            }
          } while ((int *)(param_2 + 0x44) != piVar6);
        }
        uVar8 = FUN_1408a8dc(sVar1);
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x46,DAT_1408d4cc,param_1,param_3,(int)((ulonglong)uVar8 >> 0x20),(int)uVar8,
                     sVar2,*(undefined2 *)(param_2 + 0xe),uVar9,uVar10,uVar11,uVar12,uVar13,uVar5);
      }
      iVar7 = iVar7 + -1;
      piVar6 = (int *)*piVar6;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1408a810();
      }
    } while (piVar6 != piVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1408d4e4,DAT_1408d4d0);
}

