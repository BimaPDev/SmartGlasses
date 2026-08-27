/* FUN_2c5aff78 @ 0x2c5aff78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5aff78(void)

{
  int iVar1;
  char cVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  FUN_2c5abf68();
  iVar1 = func_0x2c5ac178();
  cVar2 = *_LAB_2c5affac;
  if (((cVar2 == '\0') && (cVar2 = *_LAB_2c5affb0, cVar2 == '\0')) &&
     (cVar2 = *_LAB_2c5affb4, cVar2 == '\0')) {
    cVar2 = *_LAB_2c5affb8;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    return;
  }
  iVar1 = func_0x2c5afda4(*(int *)(iVar1 + 8) + 0x44);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5aff74,0x191,_LAB_2c5aff70,_LAB_2c5aff6c,cVar2,in_r3,unaff_r4,unaff_r5,
                 unaff_lr);
  }
  return;
}

