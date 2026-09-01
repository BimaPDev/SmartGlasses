/* FUN_100e4034 @ 0x100e4034 */

int FUN_100e4034(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *local_18;
  int *local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_100e3f38(param_1,&local_18);
  if (-1 < iVar1) {
    uVar2 = (uint)*(byte *)(*param_1 + (uint)*(byte *)(param_1 + 1));
    if (uVar2 == 0x2d) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
    }
    else if (-1 < (int)((uint)*(byte *)(uVar2 + DAT_100e4084) << 0x1d)) {
      return -0x3d;
    }
    iVar1 = FUN_100e3f38(param_1,&local_14);
    if (-1 < iVar1) {
      *param_2 = (int)local_18;
      *param_3 = local_14;
      FUN_10138382(param_1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

