/* FUN_10133f62 @ 0x10133f62 */

void FUN_10133f62(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    puVar1 = *(undefined4 **)(param_1 + 0x54);
    while (puVar1 != (undefined4 *)&NMI) {
      if (puVar1 + -2 == param_2) {
        FUN_10133dc0(param_1 + 0x54,puVar3);
        return;
      }
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      puVar2 = (undefined4 *)*puVar1;
      puVar3 = puVar1;
      puVar1 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
  }
  return;
}

