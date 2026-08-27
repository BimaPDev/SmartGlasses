/* FUN_2c56c280 @ 0x2c56c280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56c280(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  undefined4 auStack_64 [3];
  undefined4 uStack_58;
  undefined1 uStack_44;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int iStack_2c;
  
  iVar10 = *(int *)(param_1 + 0xc);
  iStack_2c = *_LAB_2c56c4fc;
  iVar5 = FUN_2c602408();
  iVar6 = FUN_2c602400(param_1);
  if (iVar5 == 0x19) {
    if (0 < *_LAB_2c56c500) {
      uVar12 = 0;
      do {
        iVar5 = func_0x2c617eb4(iVar6,0);
        if (iVar5 != 0) {
          iVar11 = uVar12 * 2;
          bVar2 = false;
          do {
            while( true ) {
              func_0x2c617df8(iVar6,iVar5,uVar12 & 0xffff,auStack_64);
              iVar7 = func_0x2c617eec(iVar6,iVar5);
              uVar1 = *(undefined2 *)(iVar7 + iVar11);
              if (bVar2) break;
              bVar2 = true;
              *(undefined4 *)(*(int *)(iVar10 + 0x30) + uVar12 * 4) = auStack_64[0];
              *(undefined2 *)(*(int *)(iVar10 + 0x38) + iVar11) = uVar1;
              iVar5 = func_0x2c617eb4(iVar6,iVar5);
              if (iVar5 == 0) goto LAB_2c56c344;
            }
            bVar2 = false;
            *(undefined4 *)(*(int *)(iVar10 + 0x2c) + uVar12 * 4) = auStack_64[0];
            *(undefined2 *)(*(int *)(iVar10 + 0x34) + iVar11) = uVar1;
            iVar5 = func_0x2c617eb4(iVar6,iVar5);
          } while (iVar5 != 0);
        }
LAB_2c56c344:
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < *_LAB_2c56c500);
    }
    uVar8 = FUN_2c602608(param_1);
    FUN_2c6129e4(auStack_64);
    uStack_58 = 0xff00ff00;
    uStack_44 = 0xff;
    auStack_64[0] = FUN_2c5e2e80(_LAB_2c56c504);
    uVar4 = _LAB_2c56c508;
    if (0 < *_LAB_2c56c500) {
      iVar5 = 0;
      do {
        iVar7 = iVar5 * 4;
        *(short *)(*(int *)(iVar10 + 0x2c) + iVar5 * 4) =
             *(short *)(*(int *)(iVar10 + 0x2c) + iVar5 * 4) + *(short *)(iVar6 + 0x14);
        *(short *)(*(int *)(iVar10 + 0x30) + iVar5 * 4) =
             *(short *)(*(int *)(iVar10 + 0x30) + iVar5 * 4) + *(short *)(iVar6 + 0x14);
        iVar11 = *(int *)(iVar10 + 0x2c) + iVar5 * 4;
        *(short *)(iVar11 + 2) = *(short *)(iVar11 + 2) + *(short *)(iVar6 + 0x16);
        iVar11 = *(int *)(iVar10 + 0x30) + iVar5 * 4;
        *(short *)(iVar11 + 2) = *(short *)(iVar11 + 2) + *(short *)(iVar6 + 0x16);
        FUN_2c62c3b0(auStack_3c,8);
        FUN_2c62dbd4(auStack_3c,7,uVar4,(int)*(short *)(*(int *)(iVar10 + 0x3c) + iVar5 * 2));
        FUN_2c62c3b0(auStack_34,8);
        FUN_2c62dbd4(auStack_34,7,uVar4,(int)*(short *)(*(int *)(iVar10 + 0x40) + iVar5 * 2));
        uVar9 = FUN_2c5e2e80(_LAB_2c56c504);
        iVar5 = iVar5 + 1;
        FUN_2c62b954(&sStack_7c,auStack_3c,uVar9,0,0,0x1fff,0);
        iVar11 = (int)sStack_7c;
        iVar13 = *(int *)(iVar10 + 0x2c);
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        sVar3 = (short)((uint)(iVar11 << 0xf) >> 0x10);
        sStack_74 = (1 - sVar3) + *(short *)(iVar13 + iVar7);
        sStack_70 = sVar3 + 1 + *(short *)(iVar13 + iVar7);
        sStack_72 = *(short *)(iVar13 + iVar7 + 2) + (-6 - sStack_7a);
        sStack_6e = *(short *)(iVar13 + iVar7 + 2) + -6;
        uVar9 = FUN_2c5e2e80(_LAB_2c56c504);
        FUN_2c62b954(&sStack_78,auStack_34,uVar9,0,0,0x1fff,0);
        iVar11 = (int)sStack_78;
        iVar13 = *(int *)(iVar10 + 0x30);
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        sVar3 = (short)((uint)(iVar11 << 0xf) >> 0x10);
        sStack_6c = (1 - sVar3) + *(short *)(iVar13 + iVar7);
        sStack_68 = sVar3 + 1 + *(short *)(iVar13 + iVar7);
        sStack_6a = *(short *)(iVar13 + iVar7 + 2) + 6;
        sStack_66 = *(short *)(iVar13 + iVar7 + 2) + sStack_76 + 6;
        FUN_2c612a20(uVar8,auStack_64,&sStack_74,auStack_3c,0);
        FUN_2c612a20(uVar8,auStack_64,&sStack_6c,auStack_34,0);
      } while (iVar5 < *_LAB_2c56c500);
    }
  }
  if (*_LAB_2c56c4fc != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

