/* FUN_2c5e40d0 @ 0x2c5e40d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e40d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = _LAB_2c5e411c;
  iVar4 = FUN_2c606a10();
  uVar2 = _DAT_2c5e4120;
  *piVar1 = iVar4;
  FUN_2c603a04(iVar4,0,uVar2);
  piVar3 = _LAB_2c5e4124;
  iVar4 = *piVar1;
  *(undefined4 *)(iVar4 + 0x10) = 6;
  FUN_2c607048(iVar4,0x144,0x27d1);
  lv_obj_add_flag_invalidate(*piVar1,1);
  (**(code **)(*piVar3 + 0x18))(*piVar1);
  (**(code **)(piVar3[2] + 0x18))(*piVar1);
                    /* WARNING: Could not recover jumptable at 0x2c5e4118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar3[1] + 0x18))(*piVar1);
  return;
}

