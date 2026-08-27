/* FUN_140a9d40 @ 0x140a9d40 */

undefined4 FUN_140a9d40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_140e58b8();
  piVar1 = DAT_140a9d88;
  if (*DAT_140a9d88 != 0) {
    FUN_140e58f8();
  }
  iVar2 = DAT_140a9d8c;
  *piVar1 = iVar3;
  if (*(byte *)(iVar2 + 0x132) != 0) {
    uVar4 = DAT_140a9d90 * (*(byte *)(iVar2 + 0x132) - 1);
    if (uVar4 < DAT_140a9d94 || uVar4 - DAT_140a9d94 == 0) {
      FUN_140e5148(*(undefined4 *)(iVar2 + 0xd0),0xffffffff);
      FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
      return 0;
    }
  }
  return 0;
}

