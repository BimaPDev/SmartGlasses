/* FUN_2c51c898 @ 0x2c51c898 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51c898(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_24;
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1);
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = FUN_2c5e2e4c(_LAB_2c51c9b4);
      FUN_2c63140c(uVar10,uVar3);
    }
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),2,0,0x80);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = registry_lookup(_LAB_2c51c9a4);
    FUN_2c638730(uVar10,uVar3);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),2,0,0xb4);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar4 = FUN_2c5e2e4c(_LAB_2c51c9a8);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    if (param_3 == 0) {
      FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1);
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = FUN_2c5e2e4c(_LAB_2c51c9b8);
      FUN_2c63140c(uVar10,uVar3);
    }
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),2,0,0x80);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = registry_lookup(_LAB_2c51c9ac);
    FUN_2c638730(uVar10,uVar3);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),2,0,0xb4);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar4 = FUN_2c5e2e4c(_LAB_2c51c9b0);
  }
  iStack_1c = *DAT_2c6315cc;
  FUN_2c607df0();
  iVar5 = FUN_2c614f58(iVar4);
  if (iVar5 == 3) {
    if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
    }
    *(undefined4 *)(iVar9 + 0x24) = 0;
    *(byte *)(iVar9 + 0x5a) = *(byte *)(iVar9 + 0x5a) | 3;
    goto LAB_2c6314a4;
  }
  FUN_2c612838(iVar4,&uStack_24);
  if (iVar5 == 0) {
    if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x24));
    }
    uVar7 = (uStack_24 & 0x1fffff) >> 10;
    *(int *)(iVar9 + 0x24) = iVar4;
    uVar8 = uStack_24 >> 0x15;
  }
  else {
    if (((iVar5 - 1U & 0xff) < 2) && (iVar11 = *(int *)(iVar9 + 0x24), iVar11 != iVar4)) {
      if ((*(byte *)(iVar9 + 0x5a) & 3) - 1 < 2) {
        iVar6 = FUN_2c66c4ec(iVar4);
        iVar6 = FUN_2c62be98(0x40,iVar6 + 1);
        if (iVar6 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar6,iVar4);
        *(int *)(iVar9 + 0x24) = iVar6;
        if (iVar11 != 0) {
          FUN_2c62bea8(iVar11);
        }
      }
      else {
        iVar11 = FUN_2c66c4ec(iVar4);
        iVar11 = FUN_2c62be98(0x40,iVar11 + 1);
        if (iVar11 == 0) goto LAB_2c6314a4;
        FUN_2c6435c4(iVar11,iVar4);
        *(int *)(iVar9 + 0x24) = iVar11;
      }
    }
    if (iVar5 == 2) {
      uVar3 = FUN_2c6033b4(iVar9,0,0x57);
      sVar1 = FUN_2c6033b4(iVar9,0,0x58);
      sVar2 = FUN_2c6033b4(iVar9,0,0x59);
      FUN_2c62b954(&uStack_20,iVar4,uVar3,(int)sVar1,(int)sVar2,0x1fff,0);
      uVar7 = uStack_20 & 0x7ff;
      iVar4 = (uStack_20 & 0x7ff) << 10;
      uStack_24._0_2_ = (ushort)uStack_24 & 0x3ff | (ushort)iVar4;
      uVar8 = uStack_1e & 0x7ff;
      uStack_24 = CONCAT22((ushort)((uint)iVar4 >> 0x10) | (ushort)((uStack_1e & 0x7ff) << 5),
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
       (byte)iVar5 & 3 | (byte)((uStack_24 & 0x1f) << 2) | *(byte *)(iVar9 + 0x5a) & 0x80;
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

