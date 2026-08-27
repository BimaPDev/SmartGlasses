/* FUN_140deba0 @ 0x140deba0 */

int FUN_140deba0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  iVar1 = FUN_140e05b0(param_1,param_2,0xff,0,param_4);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  return param_1;
}

