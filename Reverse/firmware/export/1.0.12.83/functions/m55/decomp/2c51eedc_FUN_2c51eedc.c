/* FUN_2c51eedc @ 0x2c51eedc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51eedc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51ef74,0xda,_LAB_2c51ef70,_LAB_2c51ef6c);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    uVar1 = FUN_2c5e2e4c(_LAB_2c51ef60);
    FUN_2c63140c(iVar2,uVar1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    uVar1 = registry_lookup(_LAB_2c51ef64);
    FUN_2c638730(iVar2,uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    uVar1 = FUN_2c5e2e4c(_LAB_2c51ef68);
    FUN_2c63140c(iVar2,uVar1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_2c62be40();
    FUN_2c62be74(*(undefined4 *)(param_1 + 0x30));
    *(byte *)(*(int *)(param_1 + 0x30) + 0x14) = *(byte *)(*(int *)(param_1 + 0x30) + 0x14) & 0xfe;
    return;
  }
  return;
}

