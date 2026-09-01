/* FUN_101222e4 @ 0x101222e4 */

void FUN_101222e4(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = param_2;
    puVar2 = puVar1;
  } while (puVar1 != param_1 + param_3);
  return;
}

