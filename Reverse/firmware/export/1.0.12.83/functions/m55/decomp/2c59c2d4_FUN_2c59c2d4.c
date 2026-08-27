/* FUN_2c59c2d4 @ 0x2c59c2d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59c2d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _LAB_2c59c324;
  uVar1 = _LAB_2c59c320;
  if ((*_LAB_2c59c314 != 0) && (*_LAB_2c59c318 != '\0')) {
    iVar3 = *_LAB_2c59c31c;
    *_LAB_2c59c31c = iVar3 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uVar2,0x46,_LAB_2c59c328,uVar1,iVar3 + 1);
  }
  return;
}

