/* FUN_2c4f1200 @ 0x2c4f1200 */

int FUN_2c4f1200(int param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0xfffffffd < *param_2) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  uVar3 = *(uint *)(iVar1 + 0x18);
  iVar2 = uVar3 * (((uVar3 + param_2[2]) - 1) / uVar3);
  iVar1 = (**(code **)(iVar1 + 8))(iVar1,*param_2,param_2[1],param_2[3],iVar2);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_4 != 0) {
    *param_3 = 0xffffffff;
    iVar2 = FUN_2c4f1120(param_1,param_3,iVar2,*param_2,param_2[1],param_2[3],iVar2);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 != 0) {
      return -0x54;
    }
  }
  FUN_2c674268(param_2[3],0xff,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
  *param_2 = 0xffffffff;
  return 0;
}

