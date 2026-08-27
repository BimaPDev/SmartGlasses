/* FUN_2c5ef5ac @ 0x2c5ef5ac */

void FUN_2c5ef5ac(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  FUN_2c62be40();
  if (*(char *)(puVar1 + 3) != '\0') {
    if (((code *)*puVar1 != (code *)0x0) &&
       ((*(code *)*puVar1)(0,puVar1[1]), *(char *)(puVar1 + 3) == '\0')) {
      return;
    }
    FUN_2c481604();
    if (puVar1[2] != 0) {
      FUN_2c6043d8();
      puVar1[2] = 0;
    }
    FUN_2c62be40(puVar1[4]);
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

