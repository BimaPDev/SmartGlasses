/* FUN_100e425c @ 0x100e425c */

void FUN_100e425c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  iStack_10 = param_3;
  if (param_3 == 0) {
    iVar1 = FUN_101386f0(param_1,1,0xc,0x30);
    if (iVar1 != 0) {
      local_18 = DAT_100e429c;
      local_14 = CONCAT31(local_14._1_3_,0xe0);
      FUN_101386a0(iVar1,&local_18,5);
      FUN_100e40e4(param_1,iVar1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 3;
    FUN_1013868e();
  }
  return;
}

