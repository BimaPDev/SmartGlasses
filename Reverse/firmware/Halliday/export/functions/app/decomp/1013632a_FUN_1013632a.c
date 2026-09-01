/* FUN_1013632a @ 0x1013632a */

void FUN_1013632a(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = FUN_10131d48();
  *(int *)(param_3 + 4) = iVar1 + *(int *)(param_3 + 4);
  iVar1 = FUN_101367a2(param_1);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 2;
  }
  return;
}

