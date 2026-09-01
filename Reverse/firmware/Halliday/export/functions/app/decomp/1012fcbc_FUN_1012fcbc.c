/* FUN_1012fcbc @ 0x1012fcbc */

undefined4 FUN_1012fcbc(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 extraout_r2;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint local_28;
  uint local_24;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  if (((param_1 == 0) || (*(int *)(param_1 + 0x114) == 0)) || (*(int *)(param_1 + 0x48) == 0)) {
    return 0xffffffea;
  }
  iVar11 = *(int *)(param_1 + 0x4c);
  iVar5 = FUN_1012d7f2();
  if (iVar11 == iVar5) goto LAB_100b1c0a;
  uVar6 = FUN_1011dcba(*(undefined4 *)(param_1 + 0x4c));
  if ((int)uVar6 < 1) {
    if (*(short *)(param_1 + 0xb2) == 0) goto LAB_100b1c0a;
  }
  else {
    iVar5 = thunk_FUN_1012d3ee(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x114),
                               uVar6 & 0xfffffffe,DAT_100b1c4c);
    if (iVar5 != 0) goto LAB_100b1c0a;
    bVar10 = *(byte *)(param_1 + 0xd6);
    if ((-1 < (int)((uint)bVar10 << 0x1a)) || (*(int *)(*(int *)(param_1 + 8) + 0xc) != 0))
    goto LAB_100b1c0a;
    uVar6 = bVar10 & 2;
    if ((bVar10 & 2) == 0) {
      FUN_1013012a(*(undefined4 *)(param_1 + 0x48),uVar6,0x14,uVar6,uVar6);
      *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 2;
    }
    if ((((*(byte *)(param_1 + 0xd6) & 6) != 2) ||
        (iVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x4c)), iVar5 != 0)) ||
       ((iVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x50)), iVar5 != 0 ||
        (iVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x58)), iVar5 != 0)))) goto LAB_100b1c0a;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_100a8fb0();
    }
  }
  FUN_1012fe38(param_1,6,0);
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 4;
LAB_100b1c0a:
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = FUN_1012fe64(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                         *(undefined1 *)(param_1 + 0xcb),*(undefined1 *)(param_1 + 0xcc),
                         *(undefined1 *)(param_1 + 0xce),*(undefined1 *)(param_1 + 0xcf));
  }
  else {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_1011dbf4(param_1 + 0x7c,0xffffffff);
      uVar6 = FUN_1012e028(*(undefined4 *)(param_1 + 0x120));
      uVar12 = *(uint *)(param_1 + 0x78);
      if (((*(byte *)(param_1 + 0xd5) & 1) == 0) || (uVar12 <= uVar6)) {
        uVar12 = uVar6 - uVar12;
      }
      else {
        uVar12 = (0x10000 - uVar12) + uVar6;
      }
      while (uVar12 != 0) {
        uVar1 = *(ushort *)(param_1 + 0x6a);
        uVar8 = (uint)uVar1;
        if (uVar12 <= uVar1) {
          uVar8 = uVar12;
        }
        if (uVar8 != 0) {
          uVar12 = uVar12 - uVar8;
          *(ushort *)(param_1 + 0x6a) = uVar1 - (short)uVar8;
          if (uVar12 == 0) break;
        }
        uVar8 = FUN_1011dcc6(*(undefined4 *)(param_1 + 100));
        if (uVar8 < 8) break;
        thunk_FUN_1012d2d0(*(undefined4 *)(param_1 + 100),&local_28,8);
        uVar8 = (local_24 >> 0x10) / (uint)*(byte *)(param_1 + 0x68);
        uVar4 = (undefined2)uVar8;
        *(undefined2 *)(param_1 + 0x6a) = uVar4;
        *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + -1;
        if (((local_24 >> 0x10 != 0) && (*(ushort *)(param_1 + 0x6e) != uVar8)) &&
           (*(char *)(param_1 + 0xcb) == '\n')) {
          *(undefined2 *)(param_1 + 0x6e) = uVar4;
        }
      }
      uVar1 = *(ushort *)(param_1 + 0x6c);
      uVar2 = *(ushort *)(param_1 + 0x6e);
      *(uint *)(param_1 + 0x78) = uVar6;
      iVar5 = FUN_1012e028(*(undefined4 *)(param_1 + 0x120));
      iVar13 = *(int *)(param_1 + 0x78);
      iVar11 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
      if ((iVar11 != 0) || ((*(int *)(param_1 + 0x74) == 0 && (*(int *)(param_1 + 0x70) != 0)))) {
        iVar11 = FUN_10061948();
        *(uint *)(param_1 + 0x74) = (uint)(iVar11 - *(int *)(param_1 + 0x70)) >> 5;
      }
      iVar11 = *(int *)(param_1 + 0x74);
      lVar3 = (ulonglong)
              (((uint)*(ushort *)(param_1 + 0x6a) + (uint)uVar2 * (uint)uVar1 + iVar13) - iVar5) *
              (ulonglong)DAT_100b1fcc;
      uVar7 = FUN_1012f99a(*(undefined1 *)(param_1 + 0xcc));
      FUN_10113e2c(param_1 + 0x7c);
      iVar5 = FUN_10004198((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),uVar7,0);
      iVar5 = (iVar5 + iVar11) / 1000;
    }
  }
  if ((-1 < (int)((uint)*(byte *)(param_1 + 0xd6) << 0x1f)) &&
     ((int)(uint)*(ushort *)(param_1 + 0xd0) <= iVar5)) {
    uVar6 = (DAT_100b1fd4 - DAT_100b1fd0) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100b1fd8 | uVar6,DAT_100b1fdc);
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar11 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
      if (iVar11 == 0) {
        FUN_101301a4(extraout_r2,0);
        uVar9 = 5;
        uVar7 = *(undefined4 *)(param_1 + 0x48);
      }
      else {
        uVar9 = 2;
        uVar7 = extraout_r2;
      }
      FUN_101301a4(uVar7,uVar9);
    }
    uVar12 = (uint)*(byte *)(param_1 + 0xd5);
    if ((int)(uVar12 << 0x1d) < 0) {
      local_28 = ((uVar12 & 0xf) >> 3) << 0x10 | 1 | ((uVar12 & 0x1f) >> 4) << 0x12;
      local_24 = DAT_100b1fe0;
      FUN_1013012a(*(undefined4 *)(param_1 + 0x48),0,0xd,8,&local_28);
      FUN_100a5b78(DAT_100b1fe4 | uVar6,DAT_100b1fe8,(*(byte *)(param_1 + 0xd5) & 0xf) >> 3);
    }
    *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 1;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x128) << 0x1f) < 0) {
    iVar13 = *(int *)(param_1 + 0x130);
    iVar11 = FUN_1012d7f2(*(undefined4 *)(param_1 + 300));
    if ((iVar13 != iVar11) &&
       (uVar6 = FUN_1011dcba(*(undefined4 *)(param_1 + 0x130)), 0 < (int)uVar6)) {
      thunk_FUN_1012d3ee(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 300),
                         uVar6 & 0xfffffffe,DAT_100b1fec);
    }
    iVar11 = FUN_1012d608(*(undefined4 *)(param_1 + 300));
    if (iVar11 < 0xb) {
      uVar7 = FUN_1012d608(*(undefined4 *)(param_1 + 300));
      FUN_10119dc2(DAT_100b1ff4,DAT_100b1ff0,0x3c3,uVar7);
      if (*(code **)(param_1 + 0x138) != (code *)0x0) {
        (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 300),1,0);
        *(undefined4 *)(param_1 + 0x138) = 0;
        FUN_100b1840(param_1);
      }
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe;
    }
  }
  FUN_100a7040(iVar5);
  uVar6 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x58));
  if ((0x1ff < uVar6) && (*(int *)(param_1 + 0x120) != 0)) {
    FUN_100a873c();
  }
  iVar11 = *(int *)(param_1 + 0x58);
  iVar5 = FUN_1012d7f2(*(undefined4 *)(param_1 + 0x118));
  if ((iVar11 != iVar5) && (-1 < (int)((uint)*(byte *)(param_1 + 0xd5) << 0x1f))) {
    uVar12 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x58));
    uVar6 = FUN_1012d654(*(undefined4 *)(param_1 + 0x118));
    if ((int)uVar12 <= (int)uVar6) {
      uVar6 = uVar12;
    }
    if (0 < (int)uVar6) {
      thunk_FUN_1012d378(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x118),
                         uVar6 & 0xfffffffe,DAT_100b1ff8);
    }
  }
  if (((((int)((uint)*(byte *)(param_1 + 0xd6) << 0x1a) < 0) &&
       (*(int *)(*(int *)(param_1 + 8) + 0xc) != 0)) &&
      (-1 < (int)((uint)*(byte *)(param_1 + 0xd6) << 0x1d))) && (iVar5 = FUN_10130576(), iVar5 != 0)
     ) {
    uVar6 = *(byte *)(param_1 + 0xd6) & 2;
    if ((*(byte *)(param_1 + 0xd6) & 2) == 0) {
      FUN_1013012a(*(undefined4 *)(param_1 + 0x48),uVar6,0x14,uVar6,uVar6);
      *(uint *)(param_1 + 0xc0) = uVar6;
      *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 2;
    }
    iVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x4c));
    if ((iVar5 == 0) && (iVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x58)), iVar5 == 0)) {
      uVar6 = *(int *)(param_1 + 0xc0) + 1;
      *(uint *)(param_1 + 0xc0) = uVar6;
      if (2 < uVar6) {
        if (*(int *)(param_1 + 0x120) != 0) {
          FUN_100a8fb0();
        }
        FUN_100a5b78(DAT_100b1ffc | (DAT_100b1fd4 - DAT_100b1fd0) * 0x20 & 0xff00U,DAT_100b2000);
        FUN_1012fe38(param_1,6,0);
        *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  bVar10 = *(byte *)(param_1 + 0xd7) & 1;
  if (((*(byte *)(param_1 + 0xd7) & 1) == 0) &&
     (iVar5 = FUN_1011ddbc(*(undefined4 *)(param_1 + 0x48)), iVar5 != 0)) {
    *(byte *)(param_1 + 0xd7) = *(byte *)(param_1 + 0xd7) | 1;
    if ((*(char *)(param_1 + 0xd4) == '\x02') || (*(char *)(param_1 + 0xd4) == '\x05')) {
      *(short *)(param_1 + 0xb2) = *(short *)(param_1 + 0xb2) + 1;
    }
    else {
      FUN_1012fe38(param_1,7,bVar10,bVar10);
    }
  }
  return 0;
}

