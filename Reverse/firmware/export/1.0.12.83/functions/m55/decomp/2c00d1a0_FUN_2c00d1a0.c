/* FUN_2c00d1a0 @ 0x2c00d1a0 */

void FUN_2c00d1a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort local_1e;
  int local_1c;
  
  uVar1 = UnsignedSaturate(param_1 + *DAT_2c00d240,8);
  UnsignedDoesSaturate(param_1 + *DAT_2c00d240,8);
  local_1c = *DAT_2c00d248;
  uVar2 = UnsignedSaturate(*DAT_2c00d244 + param_2,8);
  UnsignedDoesSaturate(*DAT_2c00d244 + param_2,8);
  FUN_2c008e4c(0x46,&local_1e);
  local_1e = (ushort)uVar1 | (ushort)(uVar2 << 8);
  FUN_2c008f74(0x46);
  if (*DAT_2c00d24c - 1 < 2) {
    FUN_2c008e4c(0x74,&local_1e);
    local_1e = local_1e & 0xff00 | (ushort)uVar1;
    FUN_2c008f74(0x74);
  }
  if ((uVar2 & 0xffff) < (uVar1 & 0xffff)) {
    uVar3 = *DAT_2c00d250 | 0x10;
  }
  else {
    uVar3 = *DAT_2c00d250 & 0xffef;
  }
  *DAT_2c00d250 = uVar3;
  if (*DAT_2c00d248 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

