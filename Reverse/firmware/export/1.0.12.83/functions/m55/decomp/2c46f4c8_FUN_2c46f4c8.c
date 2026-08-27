/* FUN_2c46f4c8 @ 0x2c46f4c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f4c8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(iVar1 + 0x80))();
    if (uVar2 < 3) {
      uVar3 = *(undefined4 *)(_LAB_2c46f504 + uVar2 * 4);
    }
    else {
      uVar3 = 0;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4f3,_LAB_2c46f514,_LAB_2c46f510,_LAB_2c46f50c,_LAB_2c46f508,uVar2,uVar3);
  }
  return;
}

