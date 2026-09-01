/* FUN_1011f608 @ 0x1011f608 */

void FUN_1011f608(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = param_1 + param_2;
  puVar2 = param_1;
  do {
    puVar4 = puVar4 + -1;
    uVar1 = *puVar2;
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + (param_2 >> 1));
  return;
}

