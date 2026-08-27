/* FUN_140bff94 @ 0x140bff94 */

void FUN_140bff94(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_140cb9c4(param_1 + 1);
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  iVar1 = DAT_140bffc8;
  *param_1 = DAT_140bffc8;
  param_1[1] = iVar1 + 0x14;
  FUN_140cb900(param_1 + 1,param_2);
  return;
}

