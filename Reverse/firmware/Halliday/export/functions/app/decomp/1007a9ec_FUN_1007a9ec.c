/* FUN_1007a9ec @ 0x1007a9ec */

void FUN_1007a9ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_1007aa50;
  iVar3 = FUN_1007c5fc(*(undefined1 *)(DAT_1007aa50 + 9));
  iVar4 = (int)(((uint)*(byte *)(iVar1 + 0x20) * iVar3 + iVar3) * 5) / 100;
  bVar2 = FUN_1007c690(iVar4);
  *(byte *)(iVar1 + 0x144) = bVar2;
  if (bVar2 < *(byte *)(iVar1 + 0x21)) {
    *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x21);
    iVar4 = FUN_1007c5fc();
  }
  FUN_100a5b78(DAT_1007aa5c | (DAT_1007aa58 - DAT_1007aa54) * 0x20 & 0xff00U,DAT_1007aa64,
               DAT_1007aa60,iVar3,iVar4,*(undefined1 *)(iVar1 + 0x144),param_3);
  return;
}

