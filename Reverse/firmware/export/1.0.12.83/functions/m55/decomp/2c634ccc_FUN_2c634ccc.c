/* FUN_2c634ccc @ 0x2c634ccc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c634ccc(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  short sStack_3c;
  short sStack_3a;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c634e8c;
  FUN_2c607338(param_1,&sStack_3c,param_3,0);
  iVar7 = FUN_2c6073ec(param_1);
  iVar8 = FUN_2c6073f8(param_1);
  sVar2 = FUN_2c6033b4(param_1,0,0x12);
  sVar3 = FUN_2c6033b4(param_1,0,0x13);
  iVar14 = (int)sVar3;
  sVar3 = FUN_2c6033b4(param_1,0,0x10);
  sVar4 = FUN_2c6033b4(param_1,0,0x11);
  iVar16 = (int)sVar4;
  uVar5 = FUN_2c6033b4(param_1,0,0x14);
  uVar6 = FUN_2c6033b4(param_1,0,0x15);
  iVar9 = (int)(short)uVar5;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 1;
  }
  iVar10 = (int)(short)uVar6;
  iVar9 = (int)(short)((uVar5 & 1) + 1 + (short)(iVar9 >> 1));
  if (iVar10 < 0) {
    iVar10 = iVar10 + 1;
  }
  if (0xc < iVar9) {
    iVar9 = 0xd;
  }
  sVar4 = (uVar6 & 1) + 1 + (short)(iVar10 >> 1);
  if (0xc < iVar14) {
    iVar14 = 0xd;
  }
  if (0xc < sVar3) {
    sVar3 = 0xd;
  }
  if (0xc < iVar16) {
    iVar16 = 0xd;
  }
  if (0xc < sVar4) {
    sVar4 = 0xd;
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    uVar15 = 0;
    sVar12 = sVar2;
    if (0xc < sVar2) {
      sVar12 = 0xd;
    }
    do {
      sStack_34 = *(short *)(*(int *)(param_1 + 0x28) + uVar15 * 8);
      iVar10 = *(int *)(param_1 + 0x28) + uVar15 * 8;
      sVar1 = sVar12;
      if (sVar2 < sStack_34) {
        sVar1 = sVar4;
      }
      sStack_34 = (sStack_3c - sVar1) + sStack_34;
      sVar1 = sVar3;
      if (sVar3 < *(short *)(iVar10 + 2)) {
        sVar1 = (short)iVar9;
      }
      sStack_32 = (sStack_3a - sVar1) + *(short *)(iVar10 + 2);
      sVar1 = sVar4;
      if ((iVar7 - iVar14) + -2 <= (int)*(short *)(iVar10 + 4)) {
        sVar1 = (short)iVar14;
      }
      sStack_30 = sStack_3c + *(short *)(iVar10 + 4) + sVar1;
      iVar11 = iVar16;
      if ((int)*(short *)(iVar10 + 6) < (iVar8 - iVar16) + -2) {
        iVar11 = iVar9;
      }
      sStack_2e = sStack_3a + *(short *)(iVar10 + 6) + (short)iVar11;
      iVar10 = FUN_2c62a750(&sStack_34,param_2,0);
      if (iVar10 != 0) {
        uVar13 = (uint)*(ushort *)(param_1 + 0x30);
        break;
      }
      uVar13 = (uint)*(ushort *)(param_1 + 0x30);
      uVar15 = uVar15 + 1 & 0xffff;
    } while (uVar15 < uVar13);
    if (uVar15 != uVar13) goto LAB_2c634e6c;
  }
  uVar15 = 0xffff;
LAB_2c634e6c:
  if (*_LAB_2c634e8c == iStack_2c) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

