/* FUN_1013973c @ 0x1013973c */

undefined4 FUN_1013973c(int *param_1,int param_2)

{
  *(byte *)(*param_1 + 0x1e) = *(byte *)(*param_1 + 0x1e) & 0xfd;
  FUN_1012b32c(param_1[1]);
  if (param_2 != 0) {
    FUN_10086bac(param_1);
    FUN_10125af4();
  }
  return 0;
}

