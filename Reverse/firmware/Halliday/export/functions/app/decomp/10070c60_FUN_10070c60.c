/* FUN_10070c60 @ 0x10070c60 */

void FUN_10070c60(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_10070c88;
  if ((code *)DAT_10070c88[0x21] != (code *)0x0) {
    (*(code *)DAT_10070c88[0x21])();
  }
  FUN_1011f642(DAT_10070c8c,8);
  uVar2 = *puVar1;
  *(char *)(*(int *)(DAT_10070c90 + 4) + 9) = *(char *)(*(int *)(DAT_10070c90 + 4) + 9) + '\x01';
  FUN_1011f5fc(uVar2);
  return;
}

