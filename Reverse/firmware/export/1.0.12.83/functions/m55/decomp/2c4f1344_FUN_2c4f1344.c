/* FUN_2c4f1344 @ 0x2c4f1344 */

int FUN_2c4f1344(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c4f1298(param_1,param_1 + 0x10,param_1,0,*param_2,param_2[1],param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = FUN_2c4f4b08(param_2[3],param_3,param_4);
    param_2[3] = uVar2;
    param_2[1] = param_2[1] + param_4;
  }
  return iVar1;
}

