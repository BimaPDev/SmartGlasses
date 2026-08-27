/* FUN_2c5eeccc @ 0x2c5eeccc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eeccc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eedb0,0x8d,_LAB_2c5eedac,_LAB_2c5eeda8);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eedb0,0x94,_LAB_2c5eedac,_LAB_2c5eedb4);
  }
  FUN_2c606abc(piVar1[3],1);
  FUN_2c606e74(piVar1[3],0xff,0);
  if (piVar1[5] != 0) {
    FUN_2c606abc(piVar1[5],1);
    FUN_2c606e74(piVar1[5],0xff,0);
    if (piVar1[1] == 0) {
      if (*(char *)((int)piVar1 + 0xa9) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5eedb0,0xa5,_LAB_2c5eedac,_LAB_2c5eedbc);
      }
    }
    else if (*(char *)((int)piVar1 + 0xa9) == '\0') {
      FUN_2c606abc(piVar1[1],1);
      FUN_2c606e74(piVar1[1],0xff,0);
    }
    else {
      lv_obj_add_flag_invalidate();
    }
    if (piVar1[2] != 0) {
      lv_obj_add_flag_invalidate(piVar1[2],1);
    }
    if (piVar1[4] != 0) {
      lv_obj_add_flag_invalidate(piVar1[4],1);
    }
    if (piVar1[6] != 0) {
      lv_obj_add_flag_invalidate(piVar1[6],1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5eedb0,0x9a,_LAB_2c5eedac,_LAB_2c5eedb8);
}

