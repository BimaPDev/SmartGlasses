/* FUN_140a1134 @ 0x140a1134 */

void FUN_140a1134(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a047c();
  if (*(byte *)(param_1 + 2) != param_2) {
    FUN_140a0ebc();
  }
  *(char *)(param_1 + 2) = (char)param_2;
  FUN_140a04dc(uVar1);
  return;
}

