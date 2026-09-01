/* FUN_100e8888 @ 0x100e8888 */

int FUN_100e8888(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100e8978 | ((int)PTR_DAT_100e8970 - (int)PTR_DAT_100e896c) * 0x20 & 0xff00U,
                 DAT_100e897c,PTR_s_null_font_info__p_100e8974,0,param_4);
    iVar7 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x10) + param_3 * 0x10;
    iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
    iVar7 = iVar8 + param_4 * 0x18;
    *(uint *)(iVar8 + param_4 * 0x18) = (uint)*(ushort *)(iVar6 + 0xc);
    uVar1 = *(ushort *)(iVar6 + 4);
    uVar2 = *(ushort *)(iVar6 + 6);
    *(undefined4 *)(iVar7 + 0xc) = 0;
    sVar3 = *(short *)(iVar6 + 0xe);
    *(uint *)(iVar7 + 4) = (uint)uVar1;
    *(int *)(iVar7 + 0x10) = (int)sVar3;
    *(uint *)(iVar7 + 8) = (uint)uVar2;
    iVar8 = *(int *)(param_1 + 0x24);
    uVar10 = *(undefined4 *)(iVar6 + 8);
    puVar4 = (undefined4 *)FUN_100e8784();
    if (puVar4 == (undefined4 *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar6 = FUN_10138cba();
      if (iVar6 == 0) {
        iVar6 = FUN_1006bd24(param_1,uVar10,0);
        if (iVar6 < 0) {
          FUN_100a5b78(DAT_100e8980 |
                       ((int)PTR_DAT_100e8970 - (int)PTR_DAT_100e896c) * 0x20 & 0xff00U,DAT_100e897c
                       ,DAT_100e8984,0x5b2,param_4);
        }
        else {
          uVar9 = iVar8 * (uint)uVar2 * (uint)uVar1;
          uVar5 = FUN_1006bc84(param_1,puVar4,uVar9);
          if (uVar9 <= uVar5) {
            FUN_1011e848(puVar4,uVar9);
            return iVar7;
          }
          uVar5 = ((int)PTR_DAT_100e8970 - (int)PTR_DAT_100e896c) * 0x20 & 0xff00;
          FUN_100a5b78(DAT_100e8988 | uVar5,DAT_100e897c,DAT_100e898c,uVar5,param_4);
        }
        iVar7 = 0;
      }
      else {
        *puVar4 = uVar10;
      }
    }
  }
  return iVar7;
}

