/* FUN_100a61d0 @ 0x100a61d0 */

undefined4 FUN_100a61d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_100a668c;
  uVar2 = (uint)*(byte *)(DAT_100a61ec + 2);
  if (-1 < (int)(uVar2 << 0x1d)) {
    if ((*(byte *)(DAT_100a61ec + 2) & 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffffb;
    }
    return uVar3;
  }
  uVar4 = *DAT_100a668c;
  FUN_1012dbbc(uVar4,1,uVar2 << 0x1d,uVar2,uVar2);
  uVar3 = puVar1[1];
  FUN_1012dbbc(uVar3,-1 < (int)((uint)*DAT_100a6690 << 0x19));
  FUN_100a68d8(uVar4,uVar3);
  return 0;
}

