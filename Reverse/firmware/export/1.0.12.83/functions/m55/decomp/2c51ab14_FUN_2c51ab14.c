/* FUN_2c51ab14 @ 0x2c51ab14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51ab14(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_24;
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  iVar3 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x20),2);
  if (iVar3 == 0) {
    FUN_2c606b6c(*(undefined4 *)(param_1 + 0x20),2);
    FUN_2c606b80(*(undefined4 *)(param_1 + 0x18),2);
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_2c5e2e4c(_LAB_2c51ab6c);
  }
  else {
    FUN_2c606b80(*(undefined4 *)(param_1 + 0x20));
    FUN_2c606b6c(*(undefined4 *)(param_1 + 0x18),2);
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_2c5e2e4c(_LAB_2c51ab68);
  }
  iStack_1c = *DAT_2c6315cc;
  FUN_2c607df0();
  iVar4 = FUN_2c614f58(iVar3);
  if (iVar4 == 3) {
    if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
    }
    *(undefined4 *)(iVar9 + 0x24) = 0;
    *(byte *)(iVar9 + 0x5a) = *(byte *)(iVar9 + 0x5a) | 3;
    goto LAB_2c6314a4;
  }
  FUN_2c612838(iVar3,&uStack_24);
  if (iVar4 == 0) {
    if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
    }
    uVar7 = (uStack_24 & 0x1fffff) >> 10;
    *(int *)(iVar9 + 0x24) = iVar3;
    uVar8 = uStack_24 >> 0x15;
  }
  else {
    if (((iVar4 - 1U & 0xff) < 2) && (iVar10 = *(int *)(iVar9 + 0x24), iVar10 != iVar3)) {
      if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
        iVar6 = FUN_2c66c4ec(iVar3);
        iVar6 = FUN_2c62be98(0x40,iVar6 + 1);
        if (iVar6 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar6,iVar3);
        *(int *)(iVar9 + 0x24) = iVar6;
        if (iVar10 != 0) {
          FUN_2c62bea8(iVar10);
        }
      }
      else {
        iVar10 = FUN_2c66c4ec(iVar3);
        iVar10 = FUN_2c62be98(0x40,iVar10 + 1);
        if (iVar10 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar10,iVar3);
        *(int *)(iVar9 + 0x24) = iVar10;
      }
    }
    if (iVar4 == 2) {
      uVar5 = FUN_2c6033b4(iVar9,0,0x57);
      sVar1 = FUN_2c6033b4(iVar9,0,0x58);
      sVar2 = FUN_2c6033b4(iVar9,0,0x59);
      FUN_2c62b954(&uStack_20,iVar3,uVar5,(int)sVar1,(int)sVar2,0x1fff,0);
      uVar7 = uStack_20 & 0x7ff;
      iVar3 = (uStack_20 & 0x7ff) << 10;
      uStack_24._0_2_ = (ushort)uStack_24 & 0x3ff | (ushort)iVar3;
      uVar8 = uStack_1e & 0x7ff;
      uStack_24 = CONCAT22((ushort)((uint)iVar3 >> 0x10) | (ushort)((uStack_1e & 0x7ff) << 5),
                           (ushort)uStack_24);
    }
    else {
      uVar7 = (uStack_24 & 0x1fffff) >> 10;
      uVar8 = uStack_24 >> 0x15;
    }
  }
  *(short *)(iVar9 + 0x2c) = (short)uVar7;
  *(short *)(iVar9 + 0x2e) = (short)uVar8;
  *(short *)(iVar9 + 0x32) = (short)((int)uVar7 >> 1);
  *(short *)(iVar9 + 0x34) = (short)((int)uVar8 >> 1);
  *(byte *)(iVar9 + 0x5a) =
       (byte)iVar4 & 3 | (byte)((uStack_24 & 0x1f) << 2) | *(byte *)(iVar9 + 0x5a) & 0x80;
  FUN_2c607588(iVar9);
  if ((*(short *)(iVar9 + 0x30) != 0) || (*(short *)(iVar9 + 0x36) != 0x100)) {
    FUN_2c600bac(iVar9);
  }
  FUN_2c607df0(iVar9);
LAB_2c6314a4:
  if (*DAT_2c6315cc == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

