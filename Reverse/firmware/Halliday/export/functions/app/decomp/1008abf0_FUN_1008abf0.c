/* FUN_1008abf0 @ 0x1008abf0 */

void FUN_1008abf0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = DAT_1008acfc;
  uVar8 = param_3 & 0xff0000;
  if (param_2 == 0) {
    sVar9 = -1;
  }
  else {
    sVar9 = -(ushort)(*(char *)(param_2 + 7) != '\0');
  }
  bVar1 = false;
  uVar10 = 0;
  while (uVar10 < (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4) {
    iVar4 = *(int *)(param_1 + 0xc) + uVar10 * 8;
    uVar6 = *(uint *)(iVar4 + 4);
    iVar11 = uVar10 * 8;
    if (((((param_3 & 0xffff) == 0xffff) || ((uVar6 & 0xffff) == (param_3 & 0xffff))) &&
        ((uVar8 == 0xf0000 || ((uVar6 & 0xff0000) == uVar8)))) &&
       ((param_2 == 0 || (*(int *)(*(int *)(param_1 + 0xc) + iVar11) == param_2)))) {
      if ((int)((uint)*(byte *)(iVar4 + 7) << 0x1e) < 0) {
        FUN_1008a5b8(param_1,uVar8,0xffff,0);
      }
      uVar6 = uVar10;
      if ((*(byte *)(*(int *)(param_1 + 0xc) + iVar11 + 7) & 3) != 0) {
        FUN_100944cc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar11));
        FUN_10094268(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar11),uVar2);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar11) = 0;
      }
      while( true ) {
        uVar5 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
        if (uVar5 - 1 <= uVar6) break;
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0xc) + (uVar6 + 1) * 8);
        puVar7[-1] = puVar7[1];
        puVar7[-2] = *puVar7;
        uVar6 = uVar6 + 1;
      }
      uVar6 = uVar5 + 0x3f & 0x3f;
      *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar6 << 4);
      uVar3 = FUN_10094280(*(int *)(param_1 + 0xc),uVar6 << 3,uVar2);
      bVar1 = true;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
    else {
      uVar10 = uVar10 + 1;
    }
  }
  if ((bVar1) && (sVar9 != 0)) {
    FUN_1008a83c(param_1,uVar8,0xffff,param_4);
    return;
  }
  return;
}

