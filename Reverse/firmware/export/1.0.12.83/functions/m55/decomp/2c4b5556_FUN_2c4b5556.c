/* FUN_2c4b5556 @ 0x2c4b5556 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b5556(int param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  pbVar3 = _LAB_2c4b5724;
  cVar2 = *(char *)(param_4 + param_2);
  iVar9 = (int)cVar2;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4b5748,_LAB_2c4b5744,param_1,param_2);
  }
  bVar1 = *_LAB_2c4b5724;
  if (*(int *)(_LAB_2c4b5724 + iVar9 * 0x1c + 0x14) == 0) {
    uVar6 = 0xff;
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(_LAB_2c4b5724 + iVar9 * 0x1c + 0x24) = uVar6;
  piVar4 = _LAB_2c4b574c;
  if (((int)((uint)bVar1 << 0x1e) < 0) && (*_LAB_2c4b574c != 0)) {
    iVar5 = FUN_2c4ba688(*(undefined4 *)(param_3 + 4));
    iVar8 = *_LAB_2c4b5728;
    if (iVar8 != iVar5) {
      (*(code *)*piVar4)(cVar2,iVar5,0);
      *_LAB_2c4b5728 = iVar5;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x230,_LAB_2c4b572c,_LAB_2c4b5738,_LAB_2c4b5734,_LAB_2c4b5730,iVar8,iVar5,iVar9,
            *(undefined4 *)(param_3 + 4));
    }
  }
  *(undefined4 *)(pbVar3 + iVar9 * 0x1c + 0x14) = *(undefined4 *)(param_3 + 4);
  uVar7 = *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24);
  *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) = uVar7 | 2;
  if (pbVar3[iVar9 * 0x1c + 0x10] != *param_3) {
    pbVar3[iVar9 * 0x1c + 0x10] = *param_3;
    *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) = uVar7 | 3;
  }
  if (pbVar3[iVar9 * 0x1c + 0x18] != param_3[8]) {
    pbVar3[iVar9 * 0x1c + 0x18] = param_3[8];
    *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) = *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) | 4;
  }
  uVar7 = *(uint *)(param_3 + 0xc);
  if (uVar7 == 0) {
    if (param_2 == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = FUN_2c4bfd84(param_3[0x11]);
      uVar7 = uVar7 & 0x3ffff;
    }
  }
  if (*(uint *)(pbVar3 + iVar9 * 0x1c + 0x1c) != uVar7) {
    *(uint *)(pbVar3 + iVar9 * 0x1c + 0x1c) = uVar7;
    *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) = *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) | 0x19;
  }
  uVar7 = (uint)param_3[0x10];
  if ((pbVar3[iVar9 * 0x1c + 0x20] & 1) != (uVar7 & 1)) {
    pbVar3[iVar9 * 0x1c + 0x20] = pbVar3[iVar9 * 0x1c + 0x20] & 0xfe | (byte)(uVar7 & 1);
    uVar7 = (uint)param_3[0x10];
  }
  if (((uint)(pbVar3[iVar9 * 0x1c + 0x20] >> 1) != uVar7 >> 1) &&
     (bVar1 = pbVar3[iVar9 + 7],
     pbVar3[iVar9 * 0x1c + 0x20] = pbVar3[iVar9 * 0x1c + 0x20] & 1 | (byte)uVar7 & 0xfe, bVar1 == 0)
     ) {
    *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) = *(uint *)(pbVar3 + iVar9 * 0x1c + 0x24) | 0x10;
  }
  if (pbVar3[iVar9 * 0x1c + 0x21] != param_3[0x11]) {
    pbVar3[iVar9 * 0x1c + 0x21] = param_3[0x11];
  }
  if (param_1 == 1) {
    if (iVar9 != 2) {
      FUN_2c4b8700(0,pbVar3 + iVar9 * 0x1c + 0x10);
      return 0;
    }
    FUN_2c4b9d8c(0,DAT_2c4b573c);
  }
  else {
    if (param_1 != 2) {
      FUN_2c4b9480(0,cVar2,pbVar3 + iVar9 * 0x1c + 0x10);
      return 0;
    }
    if (iVar9 == 4) {
      FUN_2c4ba208(0,DAT_2c4b5740);
    }
  }
  return 0;
}

