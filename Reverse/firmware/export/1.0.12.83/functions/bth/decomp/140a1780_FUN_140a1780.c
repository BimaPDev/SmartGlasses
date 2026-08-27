/* FUN_140a1780 @ 0x140a1780 */

void FUN_140a1780(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a047c();
  if (param_2 != *(byte *)(param_1 + 0x112)) {
    FUN_140a0ebc();
    *(char *)(param_1 + 0x112) = (char)param_2;
  }
  FUN_140a04dc(uVar1);
  return;
}

