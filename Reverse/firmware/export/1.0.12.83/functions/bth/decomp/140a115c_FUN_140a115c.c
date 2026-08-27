/* FUN_140a115c @ 0x140a115c */

void FUN_140a115c(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a047c();
  if (*param_1 != param_2) {
    FUN_140a0ebc();
  }
  *param_1 = (byte)param_2;
  FUN_140a04dc(uVar1);
  return;
}

