/* FUN_10086d7c @ 0x10086d7c */

bool FUN_10086d7c(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  if ((param_1 == 0) && (param_1 = FUN_10092f04(), param_1 == 0)) {
    FUN_10094174(2,DAT_10086db8,0x1df,DAT_10086db4,DAT_10086db0,param_2);
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(param_1 + 0x254);
  }
  return bVar1;
}

