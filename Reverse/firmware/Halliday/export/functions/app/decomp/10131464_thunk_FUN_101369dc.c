/* thunk_FUN_101369dc @ 0x10131464 */

uint thunk_FUN_101369dc(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_24 [2];
  undefined1 uStack_22;
  undefined1 uStack_21;
  uint uStack_1c;
  
  if (param_3 - 1 < 2) {
    bVar3 = param_3 != 2;
    uVar2 = param_3 & 0xff;
    if (bVar3) {
      param_3 = 0;
    }
    bVar1 = *param_2;
    if (!bVar3) {
      param_3 = (uint)param_2[1];
    }
    FUN_1011ea48(auStack_24,0,0x14);
    uStack_22 = 0xcb;
    uStack_21 = 0x30;
    uStack_1c = param_1 & 0xff | uVar2 << 8 | (uint)bVar1 << 0x10 | param_3 << 0x18;
    uVar2 = FUN_1009ece8(DAT_100d44a4,auStack_24);
    return (uVar2 ^ 1) & 0xff;
  }
  return 0xffffffea;
}

