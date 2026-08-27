/* FUN_140c035a @ 0x140c035a */

void FUN_140c035a(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 == 1) {
    FUN_140c02e8();
    thunk_FUN_140db700(param_1);
    return;
  }
  return;
}

