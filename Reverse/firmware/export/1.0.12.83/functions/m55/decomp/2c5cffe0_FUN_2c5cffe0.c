/* FUN_2c5cffe0 @ 0x2c5cffe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cffe0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c602414();
  if (iVar1 != 0) {
    uVar2 = FUN_2c602410(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5d0050,0x34d,_LAB_2c5d004c,_LAB_2c5d0048,uVar2,
                 *(undefined4 *)
                  (*(int *)(*(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x2c) * 4) + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5d0050,0x34a,_LAB_2c5d004c,_LAB_2c5d0054);
}

