/* FUN_2c5267c0 @ 0x2c5267c0 */

void FUN_2c5267c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c525874();
  iVar1 = FUN_2c5259c0();
  if (*(int *)(iVar1 + 0x54) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x54) + 0xc0))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c526808,0x1f7,DAT_2c526804,DAT_2c526800,uVar2);
}

