/* FUN_100539a4 @ 0x100539a4 */

void FUN_100539a4(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_100539bc;
  puVar2 = param_1 + param_2;
  for (; param_1 != puVar2; param_1 = param_1 + 1) {
    (*(code *)*puVar1)(*param_1);
  }
  return;
}

