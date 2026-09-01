/* FUN_1010e9c4 @ 0x1010e9c4 */

void FUN_1010e9c4(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = DAT_1010e9fc;
  iVar4 = 0xa90;
  while( true ) {
    uVar3 = *param_1;
    iVar2 = FUN_1013b1e8(DAT_1010e9fc,iVar4,
                         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                         uVar3 >> 0x18);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = param_1[1];
    iVar2 = FUN_1013b1e8(uVar1,iVar4 + 4,
                         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                         uVar3 >> 0x18);
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 2;
    if (iVar4 == 0xa94) {
      return;
    }
  }
  return;
}

