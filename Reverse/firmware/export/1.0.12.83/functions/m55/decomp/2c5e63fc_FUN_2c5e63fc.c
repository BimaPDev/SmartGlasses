/* FUN_2c5e63fc @ 0x2c5e63fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e63fc(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = _LAB_2c5e6430;
  iVar3 = FUN_2c606a10();
  uVar2 = _DAT_2c5e6434;
  *piVar1 = iVar3;
  FUN_2c603a04(iVar3,0,uVar2);
  iVar3 = *piVar1;
  *(undefined4 *)(iVar3 + 0x10) = 8;
  FUN_2c607048(iVar3,0x144,0x27d1);
  lv_obj_add_flag_invalidate(*piVar1,1);
  *(undefined1 *)(piVar1 + 4) = 0;
  return;
}

