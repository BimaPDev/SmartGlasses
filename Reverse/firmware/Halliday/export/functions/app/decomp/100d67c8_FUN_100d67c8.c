/* FUN_100d67c8 @ 0x100d67c8 */

void FUN_100d67c8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)FUN_10136428();
  piVar1 = DAT_100d68c8;
  uVar5 = *(byte *)(*DAT_100d68c4 + 0x31) & 1;
  if ((*(byte *)(*DAT_100d68c4 + 0x31) & 1) == 0) {
    do {
      if (((int)((uint)*(byte *)(*piVar1 + uVar5 * 0x12 + 0x1e) << 0x1f) < 0) &&
         (iVar3 = uVar5 * 0x12 + 0x18,
         iVar3 = FUN_1011ea30(*piVar1 + iVar3,puVar2,6,iVar3,param_1,param_2), iVar3 == 0)) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 3);
    iVar6 = 0;
    iVar3 = 3;
    do {
      iVar4 = (uint)*(byte *)(*piVar1 + iVar6 * 8 + 0x73) << 0x1f;
      if (iVar4 < 0) {
        iVar4 = FUN_1011ea30(*piVar1 + iVar6 * 8 + 0x6d,puVar2,6,iVar4,param_1,param_2);
        if (iVar4 == 0) {
          return;
        }
      }
      else if (iVar3 == 3) {
        iVar3 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    if (iVar3 != 3) {
      uVar5 = (DAT_100d68d0 - DAT_100d68cc) * 0x20 & 0xff00;
      FUN_100a5b78(uVar5 | 0x3a00031,DAT_100d68d8,DAT_100d68d4);
      iVar4 = (iVar3 + 0xd) * 8;
      iVar3 = *piVar1;
      iVar6 = iVar4 + 5;
      *(undefined4 *)(iVar3 + iVar6) = *puVar2;
      iVar4 = iVar4 + iVar3;
      *(undefined2 *)(iVar3 + iVar6 + 4) = *(undefined2 *)(puVar2 + 1);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xe0 | 0xd;
      *(byte *)(iVar4 + 0xc) = *(byte *)(iVar4 + 0xc) & 0xf0 | 8;
      iVar3 = FUN_101165e0(iVar3 + 0x88);
      if (iVar3 == 0) {
        FUN_100a5b78(DAT_100d68dc | uVar5,DAT_100d68e4,DAT_100d68e0,1000,1000);
        FUN_10116500(*piVar1 + 0x88,1000,1000);
        FUN_100d3d2c(1);
        return;
      }
    }
  }
  return;
}

