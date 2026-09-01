/* FUN_100e7920 @ 0x100e7920 */

/* WARNING: Removing unreachable block (ram,0x100e7a7a) */

void FUN_100e7920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  ushort uVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  
  iVar4 = FUN_100e7524();
  if ((iVar4 == 0) || (iVar4 = FUN_100e74d8(), piVar2 = DAT_100e7ae4, iVar4 == 0)) {
    FUN_100e78cc();
  }
  else {
    if ((*DAT_100e7ae4 != 0) && ((*(byte *)(DAT_100e7ae4 + 10) & 7) == 0)) {
      iVar4 = thunk_FUN_101367a2();
      if (iVar4 == 0) {
        iVar4 = FUN_10138b54();
        if (2000 < (uint)(iVar4 - piVar2[7])) {
          uVar10 = (DAT_100e7aec - DAT_100e7ae8) * 0x20 & 0xff00;
          FUN_100a5b78(DAT_100e7af8 | uVar10,DAT_100e7afc,DAT_100e7ae8,uVar10,param_1,param_2,
                       param_3);
          FUN_10131fba(*piVar2);
          *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) | 2;
        }
      }
      else {
        iVar4 = FUN_10138b54();
        if (1000 < (uint)(iVar4 - piVar2[8])) {
          FUN_100a5b78((DAT_100e7aec - DAT_100e7ae8) * 0x20 & 0xff00U | 0x1060031,DAT_100e7af0);
          thunk_FUN_10131d2e(*piVar2);
          iVar4 = FUN_10138b54();
          piVar2[8] = iVar4;
        }
      }
    }
    piVar3 = DAT_100e7b04;
    puVar9 = (undefined1 *)piVar2[0x18];
    uVar10 = (uint)*(ushort *)((int)piVar2 + 0x12);
    bVar1 = *(byte *)(piVar2 + 5);
    pcVar11 = puVar9 + 0xd;
    while (((((iVar4 = FUN_100e7524(), iVar4 != 0 && (iVar5 = FUN_100e74d8(), iVar5 != 0)) &&
             (iVar5 = FUN_1012d608(iVar4), -1 < iVar5)) &&
            ((uVar6 = FUN_1012d608(iVar4), uVar10 <= uVar6 && (iVar5 = FUN_100e74d8(), iVar5 != 0)))
            ) && (*piVar3 < 2))) {
      iVar5 = FUN_10138b54();
      piVar2[6] = iVar5;
      *puVar9 = 0x80;
      puVar9[1] = 0x60;
      uVar8 = *(short *)((int)piVar2 + 0x16) + 1;
      *(ushort *)((int)piVar2 + 0x16) = uVar8;
      uVar6 = (uint)bVar1 * (uint)uVar8;
      puVar9[2] = (char)(uVar8 >> 8);
      puVar9[3] = (char)*(undefined2 *)((int)piVar2 + 0x16);
      puVar9[4] = (char)(uVar6 >> 0x11);
      puVar9[5] = (char)(uVar6 >> 9);
      puVar9[6] = (char)(uVar6 >> 1);
      puVar9[7] = (char)uVar6 * -0x80;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xc] = bVar1;
      FUN_100a0654(iVar4,pcVar11,uVar10);
      pcVar7 = pcVar11;
      for (uVar6 = 0; uVar6 < uVar10; uVar6 = uVar6 + 1) {
        if ((*pcVar7 == -100) && (pcVar7[1] == -0x43)) {
          if (uVar6 != 0) {
            FUN_100a0654(iVar4,pcVar11);
            FUN_10119dc2(DAT_100e7b00,uVar6);
            goto LAB_100e792e;
          }
          break;
        }
        pcVar7 = pcVar7 + 1;
      }
      if ((*piVar2 != 0) && ((int)((uint)*(byte *)(piVar2 + 10) << 0x1f) < 0)) {
        iVar4 = thunk_FUN_101367a2();
        if ((iVar4 != 0) && (100 < (uint)(iVar5 - piVar2[6]))) {
          thunk_FUN_10131d2e(*piVar2);
        }
        if ((*piVar3 < 2) &&
           (iVar4 = FUN_100c1488(*piVar2,puVar9,uVar10 + 0xd & 0xffff,DAT_100e7af4), 0 < iVar4)) {
          *piVar3 = *piVar3 + 1;
        }
      }
    }
  }
LAB_100e792e:
  FUN_1011dc0a(DAT_100e7ae0,10);
  return;
}

