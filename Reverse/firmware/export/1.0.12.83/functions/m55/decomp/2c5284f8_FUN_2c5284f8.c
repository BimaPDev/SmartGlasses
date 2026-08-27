/* FUN_2c5284f8 @ 0x2c5284f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5284f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = _LAB_2c528570;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x10c), iVar4 != 0)) {
    if (*(int *)(iVar3 + 0x3c) < 1) {
      *(undefined4 *)(iVar3 + 0x3c) = 3;
      FUN_2c62be40(*(undefined4 *)(iVar3 + 0x2c));
      FUN_2c62be74(*puVar1);
      FUN_2c62be4c(*puVar1);
      if (*(char *)(iVar3 + 0x36) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5284e4,0x12e,DAT_2c5284e0,DAT_2c5284dc,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c52857c,0x230,_LAB_2c528578,_LAB_2c528574);
    }
    uVar2 = registry_lookup(_LAB_2c528568);
    FUN_2c638814(iVar4,_LAB_2c52856c,uVar2,*(undefined4 *)(iVar3 + 0x3c));
    *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + -1;
  }
  return;
}

