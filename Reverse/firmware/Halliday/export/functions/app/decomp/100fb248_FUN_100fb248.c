/* FUN_100fb248 @ 0x100fb248 */

int FUN_100fb248(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (0 < param_2) {
    iVar1 = (**(code **)(param_1 + 4))();
    if (iVar1 == 0) {
      uVar2 = 0x40;
    }
    else {
      FUN_1011ea48(iVar1,0,param_2);
      uVar2 = 0;
    }
    *param_3 = uVar2;
    return iVar1;
  }
  if (param_2 == 0) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = 6;
  return 0;
}

