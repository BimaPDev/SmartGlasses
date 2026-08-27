/* FUN_2c4e2740 @ 0x2c4e2740 */

void FUN_2c4e2740(int param_1)

{
  undefined1 *puVar1;
  
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (puVar1 = *(undefined1 **)(param_1 + 0x30), puVar1 != (undefined1 *)0x0)) {
    *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
    *puVar1 = 10;
    puVar1 = *(undefined1 **)(param_1 + 0x30);
    *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
    *puVar1 = 0;
    func_0x2c4e042c(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),
                    (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) + -1);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

