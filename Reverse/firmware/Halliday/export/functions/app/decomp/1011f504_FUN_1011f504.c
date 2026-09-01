/* FUN_1011f504 @ 0x1011f504 */

int FUN_1011f504(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_1013da30(param_2,0xffffffff,param_3,param_4,param_4);
  iVar1 = (int)uVar3;
  if (-1 < iVar1) {
    iVar2 = iVar2 + 0x4c;
    FUN_10113cfc(iVar2,(int)((ulonglong)uVar3 >> 0x20),0xffffffff,0xffffffff);
    FUN_1005f568(param_2);
    FUN_10113e2c(iVar2);
    iVar1 = 0;
  }
  return iVar1;
}

