/* FUN_2c5d86a4 @ 0x2c5d86a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d86a4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_2c602400();
  uVar2 = FUN_2c621084(param_1);
  iVar3 = FUN_2c6041fc(uVar1);
  if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d8804,0x1aa,_LAB_2c5d8800,_LAB_2c5d87fc);
  }
  iVar3 = FUN_2c621080(uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_2c6041dc(uVar1,0);
    iVar4 = FUN_2c6041dc(uVar1,1);
    iVar5 = FUN_2c6041dc(uVar1,2);
    if ((iVar4 != 0 && iVar3 != 0) && (iVar5 != 0)) {
      iVar3 = FUN_2c62107c(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5d8804,0x1b8,_LAB_2c5d8800,_LAB_2c5d8808,*(undefined1 *)(iVar3 + 4),
                   *(undefined4 *)(iVar3 + 8));
    }
  }
  return;
}

