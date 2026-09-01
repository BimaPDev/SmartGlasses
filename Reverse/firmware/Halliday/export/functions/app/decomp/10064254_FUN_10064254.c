/* FUN_10064254 @ 0x10064254 */

undefined4 FUN_10064254(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  
  iVar2 = FUN_10112e84(DAT_10064298);
  iVar1 = DAT_100642a0;
  *DAT_1006429c = iVar2;
  uVar4 = (DAT_100642a4 - iVar1) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(uVar4 | 0x1f0011,DAT_100642ac,DAT_100642a8,uVar4,in_r3);
    uVar3 = 0xffffffed;
  }
  else {
    FUN_100a5b78(uVar4 | 0x230031,DAT_100642ac,DAT_100642b0,uVar4,in_r3);
    uVar3 = 0;
  }
  return uVar3;
}

