/* FUN_1012729a @ 0x1012729a */

void FUN_1012729a(int param_1)

{
  int iVar1;
  
  FUN_1012a7b2();
  iVar1 = 0;
  if (param_1 == 0) {
    while (iVar1 = FUN_10092f64(iVar1), iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_1008bbc0();
      }
    }
  }
  else if (*(int *)(param_1 + 4) != 0) {
    FUN_1008bbc0();
    return;
  }
  return;
}

