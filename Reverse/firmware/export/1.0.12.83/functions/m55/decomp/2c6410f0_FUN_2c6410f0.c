/* FUN_2c6410f0 @ 0x2c6410f0 */

int FUN_2c6410f0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c641118;
  if ((*DAT_2c641118 != 0) && (iVar2 = FUN_2c607e50(), iVar2 != 0)) {
    FUN_2c602bc4(*piVar1);
    lv_obj_add_flag_invalidate(*piVar1,1);
    return iVar2;
  }
  return 0;
}

