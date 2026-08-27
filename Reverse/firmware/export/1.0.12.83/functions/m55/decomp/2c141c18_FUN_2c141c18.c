/* FUN_2c141c18 @ 0x2c141c18 */

undefined8 FUN_2c141c18(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1;
  if ((*(int *)(param_1 + 8) != 0) &&
     (uVar4 = FUN_2c141bd0(param_1 + 0xc), param_2 = (undefined4)((ulonglong)uVar4 >> 0x20),
     iVar1 = (int)uVar4, iVar3 = 0, iVar1 != 0)) {
    uVar2 = FUN_2c14089c(param_1);
    FUN_2c140ec8(uVar2,iVar1,0);
    return CONCAT44(iVar1,param_1);
  }
  return CONCAT44(param_2,iVar3);
}

