/* FUN_2c538014 @ 0x2c538014 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c538014(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  if (puVar2 == *(undefined4 **)(param_1 + 0xbc)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5380bc,0x471,_LAB_2c5380b8,_LAB_2c5380c0);
  }
  iVar1 = FUN_2c53c6f8(*puVar2);
  if (((iVar1 != 0) && (iVar1 = FUN_2c53c6f8(puVar2[2]), iVar1 != 0)) &&
     (iVar1 = FUN_2c53c6f8(puVar2[1]), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xb4) + -0x1c) {
      FUN_2c525228();
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 0x1c;
      return;
    }
    FUN_2c525228();
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,*(undefined4 *)(param_1 + 0xb0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5380bc,0x478,_LAB_2c5380b8,_LAB_2c5380b4);
}

