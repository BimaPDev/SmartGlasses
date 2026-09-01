/* FUN_10128436 @ 0x10128436 */

void FUN_10128436(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  if ((2 < *(byte *)(param_2 + 6)) &&
     (iVar1 = FUN_1012a896(auStack_20,*param_2,*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    (**(code **)(param_1 + 0x54))(param_1,param_2);
  }
  return;
}

