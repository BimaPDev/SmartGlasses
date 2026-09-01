/* FUN_10045ac0 @ 0x10045ac0 */

void FUN_10045ac0(byte *param_1)

{
  undefined4 uVar1;
  undefined1 *extraout_r2;
  undefined1 *extraout_r2_00;
  undefined1 *puVar2;
  uint uVar3;
  uint extraout_r3;
  byte local_19;
  undefined4 local_18;
  byte *local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *(int *)PTR_DAT_10045b44;
  local_19 = *param_1;
  FUN_100a5b78(DAT_10045b48 | ((int)PTR_DAT_10045b40 - (int)PTR_DAT_10045b3c) * 0x20 & 0xff00U,
               DAT_10045b50,DAT_10045b4c);
  FUN_1004098c();
  uVar3 = (uint)local_19;
  puVar2 = extraout_r2;
  if (uVar3 != 0) goto LAB_10045b28;
  local_18 = 0x4302;
  local_14 = &local_19;
  local_10 = (uint)CONCAT12(local_19,1);
  FUN_100506fc(&local_18);
  uVar1 = 1;
  while (*(int *)PTR_DAT_10045b44 != local_c) {
    FUN_1013cdc0(uVar1);
    puVar2 = extraout_r2_00;
    uVar3 = extraout_r3;
LAB_10045b28:
    if (uVar3 == 1) {
      puVar2 = DAT_10045b54;
    }
    uVar1 = 0;
    if (uVar3 == 1) {
      *puVar2 = 1;
    }
  }
  return;
}

