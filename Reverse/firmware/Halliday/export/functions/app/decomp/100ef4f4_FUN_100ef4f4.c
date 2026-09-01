/* FUN_100ef4f4 @ 0x100ef4f4 */

undefined4 FUN_100ef4f4(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  piVar2 = DAT_100ef684;
  uVar4 = param_3;
  if (param_1 != 0) {
    bVar9 = *(byte *)(param_1 + 2);
    if (((bVar9 != 0) && (param_4 = bVar9 + 2, param_4 < 0x21)) && (param_2 != 0)) {
      uVar4 = 0xffffffff;
      uVar10 = 0xffffffff;
      uVar3 = 0xffffffff;
      param_4 = (uint)(char)(bVar9 - 1);
      iVar11 = param_4 << 1;
      for (; -1 < (int)param_4; param_4 = (uint)(char)((char)param_4 + -1)) {
        uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar11);
        if (uVar8 == 0) goto LAB_100ef674;
        if (uVar8 == param_2) {
          uVar10 = param_4;
        }
        if (uVar8 == param_3) {
          uVar3 = param_4;
        }
        if (*(ushort *)(param_1 + 0x10) == uVar8) {
          uVar4 = param_4;
        }
        iVar11 = iVar11 + -2;
      }
      if (uVar10 == 0xffffffff) {
        param_4 = (uint)*(ushort *)(param_1 + 0x12);
        bVar6 = bVar9;
        if (param_4 != param_2) {
          param_4 = (uint)*(ushort *)(param_1 + 0x14);
          if (param_4 != param_2) goto LAB_100ef674;
          bVar6 = bVar9 + 1;
        }
        uVar8 = (uint)(char)bVar6;
        uVar10 = uVar3;
        if ((uVar3 == 0xffffffff) && (param_4 = uVar4 + 1, uVar10 = uVar4, param_4 == 0)) {
          uVar10 = (uint)(bVar9 >> 1);
        }
      }
      else {
        uVar8 = 0xffffffff;
      }
      bVar9 = (byte)uVar10;
      FUN_1011dbf4(DAT_100ef688,0xffffffff,uVar4,param_4,param_1,param_2);
      if (*piVar2 == 0) {
        *(undefined1 *)((int)piVar2 + 9) = 0xff;
        *(undefined1 *)((int)piVar2 + 10) = 0xff;
        bVar6 = *(byte *)(param_1 + 1);
        *piVar2 = param_1;
        uVar7 = DAT_100ef6a8;
        bVar5 = bVar6 & 1;
        if ((bVar6 & 1) != 0) {
          if (*(byte *)(param_1 + 2) < 2) {
            bVar5 = 0;
          }
          else {
            bVar5 = 1;
          }
        }
        bVar6 = (byte)uVar8 & ~(byte)((int)uVar8 >> 0x1f);
        if ((int)uVar8 < 0) {
          bVar6 = bVar9;
        }
        *(byte *)((int)piVar2 + 0xd) = bVar6;
        *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) & 0xfe | bVar5;
        *(byte *)(piVar2 + 3) = bVar9;
        *(undefined2 *)((int)piVar2 + 0xe) = 0;
        FUN_10138c00(1,uVar7);
        FUN_10138c00(2,DAT_100ef6ac);
        cVar1 = *(char *)(param_1 + 2);
        *(byte *)((int)piVar2 + 9) = bVar9;
        *(char *)((int)piVar2 + 0xb) = cVar1 + '\x01';
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(0);
        }
        if ((int)uVar8 < 0) {
          FUN_100eee48(uVar10 & 0xff,2);
        }
        else {
          iVar11 = FUN_100eee48(uVar8 & 0xff,2);
          if (iVar11 == 0) {
            uVar7 = FUN_100eee10(uVar8);
            FUN_100eef38(uVar8 & 0xff,uVar7,1);
            uVar7 = 0;
            goto LAB_100ef582;
          }
        }
        uVar7 = 0;
      }
      else {
        FUN_100a5b78(DAT_100ef694 | (DAT_100ef690 - DAT_100ef68c) * 0x20 & 0xff00U,DAT_100ef69c,
                     DAT_100ef698);
        uVar7 = 0xffffff88;
      }
      goto LAB_100ef582;
    }
  }
LAB_100ef674:
  FUN_1011dbf4(DAT_100ef688,0xffffffff,uVar4,param_4,param_1,param_2);
  uVar7 = 0xffffffea;
LAB_100ef582:
  FUN_100a5b78(DAT_100ef6a0 | (DAT_100ef690 - DAT_100ef68c) * 0x20 & 0xff00U,DAT_100ef69c,
               DAT_100ef6a4,param_2,param_3,uVar7);
  FUN_100ef27c();
  return uVar7;
}

