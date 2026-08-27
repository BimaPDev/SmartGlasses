/* FUN_2c4fea1c @ 0x2c4fea1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fea1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a4 [2];
  short sStack_a2;
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [2];
  short sStack_8a;
  short sStack_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  undefined1 auStack_7c [3];
  undefined1 uStack_79;
  undefined4 uStack_78;
  int iStack_24;
  
  iStack_24 = *_LAB_2c4fec84;
  iVar2 = FUN_2c602110(_LAB_2c4fec88,param_2,param_3,0);
  if ((iVar2 == 1) && (iVar2 = FUN_2c602408(param_2), iVar2 == 0x15)) {
    iVar2 = FUN_2c602400(param_2);
    iVar3 = FUN_2c602608(param_2);
    FUN_2c60747c(iVar2,auStack_a4);
    iVar4 = FUN_2c62a6b4(auStack_9c,auStack_a4,*(undefined4 *)(iVar3 + 8));
    if (iVar4 != 0) {
      sStack_a2 = sStack_a2 + *(short *)(iVar2 + 0x118) +
                  (short)*(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x20);
      FUN_2c62a6b4(auStack_94,auStack_a4,*(undefined4 *)(iVar3 + 8));
      piVar9 = *(int **)(iVar2 + 0x48);
      uVar10 = *(undefined4 *)(iVar3 + 8);
      if (piVar9 != (int *)0x0) {
        iVar4 = FUN_2c4fe33c(iVar2,piVar9);
        if (iVar4 == 0) {
          iVar5 = 0;
          for (iVar4 = *(int *)(*(int *)(iVar2 + 0x40) + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)
              ) {
            iVar7 = FUN_2c4fe33c(iVar2,iVar4);
            if (iVar7 == 0) {
              iVar7 = 0;
              if (iVar5 != 0) break;
            }
            else {
              puVar8 = auStack_94;
              if (*(char *)(iVar2 + 0x115) == '\0') {
                puVar8 = auStack_9c;
              }
              *(undefined1 **)(iVar3 + 8) = puVar8;
              FUN_2c4fe430(iVar2,iVar3,iVar4);
            }
            iVar5 = iVar7;
          }
        }
        else {
          do {
            piVar9 = (int *)*piVar9;
            if ((piVar9 == (int *)*(int *)(iVar2 + 0x40)) ||
               (iVar4 = FUN_2c4fe33c(iVar2,piVar9), iVar4 == 0)) break;
            puVar8 = auStack_94;
            if (*(char *)(iVar2 + 0x115) == '\0') {
              puVar8 = auStack_9c;
            }
            *(undefined1 **)(iVar3 + 8) = puVar8;
            FUN_2c4fe430(iVar2,iVar3,piVar9);
          } while (piVar9 != (int *)0x0);
          for (iVar4 = *(int *)(iVar2 + 0x48);
              (iVar4 != 0 &&
              ((iVar5 = FUN_2c4fe33c(iVar2,iVar4), iVar5 != 0 || (*(int *)(iVar2 + 0x48) == iVar4)))
              ); iVar4 = *(int *)(iVar4 + 4)) {
            puVar8 = auStack_94;
            if (*(char *)(iVar2 + 0x115) == '\0') {
              puVar8 = auStack_9c;
            }
            *(undefined1 **)(iVar3 + 8) = puVar8;
            FUN_2c4fe430(iVar2,iVar3,iVar4);
          }
        }
      }
      if ((*(char *)(iVar2 + 0x115) != '\0') ||
         (iVar4 = FUN_2c4fe33c(iVar2,*(undefined4 *)(iVar2 + 0x40)), iVar4 != 0)) {
        *(undefined1 **)(iVar3 + 8) = auStack_9c;
        FUN_2c4fe430(iVar2,iVar3,*(undefined4 *)(iVar2 + 0x40));
      }
      if ((*(char *)(iVar2 + 0x11a) != '\0') &&
         (*(undefined4 *)(iVar3 + 8) = uVar10, *(short *)(iVar2 + 0x34) != 0)) {
        FUN_2c607338(iVar2,auStack_8c);
        sVar1 = FUN_2c6033b4(iVar2,0,0xb);
        if (0 < ((*(int *)(*(int *)(iVar2 + 0x3c) + 0x1c) - *(int *)(*(int *)(iVar2 + 0x38) + 0x18))
                - (int)(short)((sStack_86 + 1) - sStack_8a)) + sVar1 * -2) {
          iVar4 = FUN_2c6073ec(iVar2);
          iVar5 = FUN_2c6073f8(iVar2);
          sVar6 = *(short *)(iVar2 + 0x11e);
          if (*(short *)(iVar2 + 0x11c) <= iVar4) {
            iVar4 = (int)*(short *)(iVar2 + 0x11c);
          }
          if (iVar5 <= sVar6) {
            sVar6 = (short)iVar5;
          }
          iVar7 = (int)sVar6;
          if (((short)iVar4 != 0) && (iVar7 != 0)) {
            fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc0),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x1c),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar13 = (float)VectorSignedToFloat((iVar5 - iVar7) + sVar1 * -2,
                                                (byte)(in_fpscr >> 0x16) & 3);
            sStack_80 = sStack_88 - sVar1;
            sStack_84 = sStack_80 - (short)iVar4;
            sStack_82 = sStack_8a + sVar1 + (short)(int)((fVar11 / fVar12) * fVar13);
            sStack_7e = sVar6 + sStack_82;
            FUN_2c61314c(auStack_7c);
            uStack_78 = FUN_2c6033b4(iVar2,iVar7 == 0,0x55);
            uStack_79 = *(undefined1 *)(iVar2 + 0x120);
            FUN_2c61319c(iVar3,auStack_7c,&sStack_84);
          }
        }
      }
      *(undefined4 *)(iVar3 + 8) = uVar10;
    }
  }
  if (*_LAB_2c4fec84 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

