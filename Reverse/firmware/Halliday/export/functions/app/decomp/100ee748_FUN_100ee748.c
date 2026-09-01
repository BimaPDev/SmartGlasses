/* FUN_100ee748 @ 0x100ee748 */

undefined4 FUN_100ee748(int *param_1,int *param_2)

{
  short *psVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else if (*param_1 == 0) {
    if (param_1[1] == 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 3);
    }
    else {
      FUN_10138c00(2);
      if (*(int *)(param_1[1] + 0xc) != 0) {
        FUN_10138c00(1,0);
      }
      uVar3 = (uint)*(ushort *)(param_1 + 3);
      iVar7 = (int)(char)(*(char *)(param_1[1] + 8) + -1);
      iVar12 = iVar7 << 1;
      for (; -1 < iVar7; iVar7 = (int)(char)((char)iVar7 + -1)) {
        if (*(ushort *)(*(int *)param_1[1] + iVar12) != uVar3) {
          FUN_10138b9c();
        }
        iVar12 = iVar12 + -2;
      }
    }
    FUN_10138b9c(uVar3);
  }
  else {
    uVar3 = FUN_100ef7a4();
    *(short *)(param_1 + 3) = (short)uVar3;
    uVar2 = FUN_100ef7dc();
    *(undefined2 *)((int)param_1 + 0xe) = uVar2;
    FUN_100ef6b0();
  }
  if (param_2 == (int *)0x0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    if (*param_2 == 0) {
      if (param_2[1] == 0) {
        uVar4 = FUN_10138b7e((short)param_2[3],param_2[2],2);
      }
      else {
        uVar11 = (uint)*(byte *)(param_2[1] + 9);
        FUN_10138c00(2,DAT_100ee8e0);
        if (*(int *)(param_2[1] + 0xc) != 0) {
          FUN_10138c00(1,DAT_100ee8e4);
        }
        piVar8 = (int *)param_2[1];
        uVar9 = (uint)(char)((char)piVar8[2] + -1);
        iVar7 = uVar9 << 1;
        for (; -1 < (int)uVar9; uVar9 = (uint)(char)((char)uVar9 + -1)) {
          psVar1 = (short *)(*piVar8 + iVar7);
          iVar7 = iVar7 + -2;
          if ((short)param_2[3] == *psVar1) {
            uVar11 = uVar9 & 0xff;
            break;
          }
        }
        uVar4 = 0;
        if (piVar8[1] != 0) {
          uVar4 = *(undefined4 *)(piVar8[1] + uVar11 * 4);
        }
        FUN_10138b7e(*(undefined2 *)(*piVar8 + uVar11 * 2),uVar4,2);
        uVar10 = (uint)(char)(*(char *)(param_2[1] + 8) + -1);
        uVar9 = uVar10;
        for (; piVar8 = (int *)param_2[1], -1 < (int)uVar10;
            uVar10 = (uint)(char)((char)uVar10 + -1)) {
          if (uVar11 != uVar9) {
            uVar4 = 0;
            if (piVar8[1] != 0) {
              uVar4 = *(undefined4 *)(piVar8[1] + uVar9 * 4);
            }
            FUN_10138b7e(*(undefined2 *)(*piVar8 + uVar9 * 2),uVar4,0);
          }
          uVar9 = uVar9 - 1;
        }
        uVar4 = 0;
        if ((code *)piVar8[3] != (code *)0x0) {
          (*(code *)piVar8[3])(*(undefined2 *)(*piVar8 + uVar11 * 2));
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = FUN_100ef4f4(*param_2,(short)param_2[3],*(undefined2 *)((int)param_2 + 0xe));
    }
    uVar2 = (undefined2)param_2[3];
  }
  puVar5 = (undefined4 *)FUN_100f114c(uVar2);
  puVar6 = (undefined4 *)FUN_100f114c(uVar3);
  uVar11 = (DAT_100ee8e8 - DAT_100ee8ec) * 0x20 & 0xff00;
  if ((puVar5 == (undefined4 *)0x0) || (puVar6 == (undefined4 *)0x0)) {
    FUN_100a5b78(uVar11 | 0x1e20033,DAT_100ee8f4,DAT_100ee8f8,uVar3,uVar2,uVar4);
  }
  else {
    FUN_100a5b78(uVar11 | 0x1de0035,DAT_100ee8f4,DAT_100ee8f0,*puVar6,uVar3,*puVar5,uVar2,uVar4);
  }
  return uVar4;
}

