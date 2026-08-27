/* FUN_2c5f0544 @ 0x2c5f0544 */

int FUN_2c5f0544(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_2c5f0568;
  iVar3 = param_1;
  while( true ) {
    if (iVar3 == 0) {
      return param_1;
    }
    iVar2 = FUN_2c606c04(iVar3,uVar1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 + 4);
  }
  return *(int *)(iVar3 + 0x38);
}

