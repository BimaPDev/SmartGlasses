/* FUN_1007aa68 @ 0x1007aa68 */

void FUN_1007aa68(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_1007ab08;
  if (*(ushort *)(DAT_1007ab08 + 0x5a) < param_1) {
    *(byte *)(DAT_1007ab08 + 0x13c) = *(byte *)(DAT_1007ab08 + 0x13c) & 0x7f;
  }
  else if (-1 < *(char *)(DAT_1007ab08 + 0x13c)) {
    *(byte *)(DAT_1007ab08 + 0x13c) = *(byte *)(DAT_1007ab08 + 0x13c) | 0xe0;
    if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
      (**(code **)(iVar2 + 0x164))(0xb,0);
    }
  }
  bVar1 = *(byte *)(iVar2 + 0x13c);
  if (*(ushort *)(iVar2 + 0x5e) < param_1) {
    *(byte *)(iVar2 + 0x13c) = bVar1 & 0xbf;
  }
  else if ((bVar1 & 0x40) == 0) {
    *(byte *)(iVar2 + 0x13c) = bVar1 & 0x9f | 0x60;
    if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
      (**(code **)(iVar2 + 0x164))(10);
    }
  }
  bVar1 = *(byte *)(iVar2 + 0x13c);
  if (*(ushort *)(iVar2 + 0x5c) < param_1) {
    *(byte *)(iVar2 + 0x13c) = bVar1 & 0x1f;
  }
  else if ((bVar1 & 0x20) == 0) {
    *(byte *)(iVar2 + 0x13c) = bVar1 | 0x20;
    if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1007aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0x164))(9);
      return;
    }
  }
  return;
}

