/* FUN_2c48e5b4 @ 0x2c48e5b4 */

int FUN_2c48e5b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_2c48e634;
  iVar2 = (*(code *)*DAT_2c48e634)(0x28);
  iVar4 = iVar2;
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0,0x28);
    *(undefined4 *)(iVar2 + 0xc) = 0x10;
    if (param_3 != 0) {
      iVar3 = FUN_2c66c4ec(param_3);
      iVar3 = (*(code *)*puVar1)(iVar3 + 1);
      if (iVar3 != 0) {
        FUN_2c674668(iVar3,param_3);
        *(int *)(iVar2 + 0x10) = iVar3;
        goto LAB_2c48e600;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    iVar4 = 0;
    FUN_2c48dea0(iVar2);
  }
LAB_2c48e600:
  iVar2 = FUN_2c48dd84(param_1,param_2,iVar4,0);
  if (iVar2 != 0) {
    return iVar4;
  }
  FUN_2c48dea0(iVar4);
  return 0;
}

