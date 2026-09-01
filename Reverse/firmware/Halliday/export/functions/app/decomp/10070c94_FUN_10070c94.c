/* FUN_10070c94 @ 0x10070c94 */

void FUN_10070c94(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_10070cbc;
  if ((code *)DAT_10070cbc[0x20] != (code *)0x0) {
    (*(code *)DAT_10070cbc[0x20])();
  }
  FUN_1011f642(DAT_10070cc0,4);
  uVar2 = *puVar1;
  *(char *)(*DAT_10070cc4 + 9) = *(char *)(*DAT_10070cc4 + 9) + '\x01';
  FUN_1011f5fc(uVar2);
  return;
}

