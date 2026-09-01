/* FUN_10122580 @ 0x10122580 */

void FUN_10122580(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)(param_1 + -1);
  puVar3 = param_2;
  do {
    puVar2 = puVar3 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar2;
  } while (puVar2 != param_2 + param_3);
  return;
}

