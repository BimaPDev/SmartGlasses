/* FUN_140b93f8 @ 0x140b93f8 */

void FUN_140b93f8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[2] = (uint)(param_4 != 0);
    if ((param_2 != 0) && (param_3 != 0)) {
      *param_1 = param_2;
      param_1[1] = param_3;
      iVar1 = FUN_140b9300(param_2,param_3);
      if (iVar1 != 0) {
        return;
      }
    }
    *param_1 = DAT_140b9424;
    param_1[1] = 0xf;
  }
  return;
}

