/* FUN_2c4846c8 @ 0x2c4846c8 */

void FUN_2c4846c8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = param_1;
  do {
    uVar1 = FUN_2c66b19c();
    puVar3 = puVar2 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 0x10);
  return;
}

