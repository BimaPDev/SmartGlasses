/* FUN_1007cb20 @ 0x1007cb20 */

void FUN_1007cb20(undefined1 param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = DAT_1007cbac;
  if (-1 < (int)((uint)*(byte *)(DAT_1007cbac + 0x13c) << 0x1e)) {
    param_1 = FUN_1007cb10();
  }
  bVar1 = *(byte *)(iVar2 + 0x13c);
  *(undefined1 *)(iVar2 + 0x145) = 1;
  bVar3 = bVar1 & 0xf7;
  *(byte *)(iVar2 + 0x13c) = bVar3;
  *(undefined1 *)(iVar2 + 0x142) = param_1;
  if ((bVar1 & 2) == 0) {
    *(byte *)(iVar2 + 0x13c) = bVar3 | 2;
    if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
      (**(code **)(iVar2 + 0x164))(4);
    }
  }
  uVar4 = (DAT_1007cbb4 - DAT_1007cbb0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar4 | 0xa20031,PTR_s_bat_charge_state_start_1007cbbc,
               PTR_s_current_level___d_1007cbb8,*(undefined1 *)(iVar2 + 0x142));
  if ((int)((uint)*(byte *)(iVar2 + 0x13e) << 0x1f) < 0) {
    FUN_100a5b78(uVar4 | 0xa50031,PTR_s_bat_charge_state_start_1007cbbc,
                 PTR_s_Set_new_CC___d_1007cbc0,*(undefined1 *)(iVar2 + 0x142));
    FUN_1011fee0(*(undefined1 *)(iVar2 + 0x142));
    return;
  }
  return;
}

