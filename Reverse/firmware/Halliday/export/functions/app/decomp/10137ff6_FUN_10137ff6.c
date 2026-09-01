/* FUN_10137ff6 @ 0x10137ff6 */

void FUN_10137ff6(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2 + 0x10;
  puVar1 = (undefined1 *)(param_1 + -1);
  do {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
  } while (puVar2 != param_2);
  return;
}

