/* FUN_100b93e4 @ 0x100b93e4 */

undefined4 FUN_100b93e4(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_100b9408;
  uVar2 = DAT_100b9408[1] + param_1;
  if (uVar2 <= (uint)DAT_100b9408[2]) {
    *param_2 = DAT_100b9408[1] + *DAT_100b9408;
    piVar1[1] = uVar2;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

