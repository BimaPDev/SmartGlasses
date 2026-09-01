/* FUN_100938a8 @ 0x100938a8 */

void FUN_100938a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_14;
  undefined4 uStack_10;
  
  puVar1 = DAT_100938cc;
  local_14 = 0;
  uStack_10 = param_3;
  do {
    if (*(char *)(param_1 + local_14) == '\0') {
      return;
    }
    (*(code *)*puVar1)(param_1,&local_14);
    uVar2 = FUN_100935d0();
  } while (1 < uVar2);
  return;
}

