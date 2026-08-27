/* FUN_2c48e6c0 @ 0x2c48e6c0 */

int FUN_2c48e6c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_2c48e710;
  iVar2 = (*(code *)*DAT_2c48e710)(0x28);
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0,0x28);
    *(undefined4 *)(iVar2 + 0xc) = 0x10;
    if (param_1 != 0) {
      iVar3 = FUN_2c66c4ec(param_1);
      iVar3 = (*(code *)*puVar1)(iVar3 + 1);
      if (iVar3 != 0) {
        FUN_2c674668(iVar3,param_1);
        *(int *)(iVar2 + 0x10) = iVar3;
        return iVar2;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    FUN_2c48dea0(iVar2);
  }
  return 0;
}

