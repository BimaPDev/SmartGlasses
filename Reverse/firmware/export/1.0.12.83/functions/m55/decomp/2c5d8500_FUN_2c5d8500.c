/* FUN_2c5d8500 @ 0x2c5d8500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d8500(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar1 = FUN_2c602400();
  iVar2 = FUN_2c621084(param_1);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    uVar3 = FUN_2c6041d4(iVar1);
    iVar1 = FUN_2c6041fc();
    if ((iVar1 == 3) && (iVar1 = FUN_2c621080(iVar2), iVar1 != 0)) {
      iVar1 = FUN_2c6041dc(uVar3,iVar2 == 0);
      iVar4 = FUN_2c6041dc(uVar3,1);
      iVar5 = FUN_2c6041dc(uVar3,2);
      if ((iVar4 != 0 && iVar1 != 0) && (iVar5 != 0)) {
        puVar6 = (undefined1 *)FUN_2c62107c(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5d8698,0x161,_LAB_2c5d8694,_LAB_2c5d8690,*puVar6);
      }
    }
  }
  return;
}

