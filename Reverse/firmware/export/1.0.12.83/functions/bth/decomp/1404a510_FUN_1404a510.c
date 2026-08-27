/* FUN_1404a510 @ 0x1404a510 */

void FUN_1404a510(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = DAT_1404a530;
  if (*(char *)(DAT_1404a52c + 0x45) == '\0') {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x31;
  }
  DAT_1404a530[1] = 0x20;
  puVar1[2] = 0;
  *puVar1 = uVar2;
  return;
}

