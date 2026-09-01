/* FUN_100be204 @ 0x100be204 */

void FUN_100be204(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_100be264;
  FUN_100a5b78(DAT_100be26c | (DAT_100be268 - DAT_100be260) * 0x20 & 0xff00U,DAT_100be274,
               DAT_100be270,*(undefined1 *)(DAT_100be264 + 0x12),
               (*(byte *)(DAT_100be264 + 0xc) & 0x7f) >> 3,param_2,param_3);
  bVar1 = *(byte *)(iVar2 + 0xc);
  if ((bVar1 & 0x78) == 0) {
    uVar3 = 0x32;
    *(byte *)(iVar2 + 0xc) = bVar1 & 0x87 | 8;
  }
  else {
    if ((bVar1 & 0x78) != 0x10) {
      return;
    }
    uVar3 = 4000;
    *(byte *)(iVar2 + 0xc) = bVar1 & 0x87 | 8;
  }
  FUN_1011dc0a(iVar2 + 0x20,uVar3);
  return;
}

