/* FUN_2c6411e0 @ 0x2c6411e0 */

void FUN_2c6411e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_2c6410f0();
  if ((iVar1 != 0) && (*DAT_2c641218 != '\0')) {
    for (puVar2 = (undefined4 *)*DAT_2c641220; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      (*(code *)*puVar2)(0);
    }
  }
  puVar2 = DAT_2c64121c;
  FUN_2c62be40(*DAT_2c64121c);
  FUN_2c62be74(*puVar2);
  return;
}

