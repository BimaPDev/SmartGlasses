/* FUN_2c6426e4 @ 0x2c6426e4 */

/* WARNING: Removing unreachable block (ram,0x2c6424c4) */
/* WARNING: Removing unreachable block (ram,0x2c642446) */
/* WARNING: Removing unreachable block (ram,0x2c6424a0) */
/* WARNING: Removing unreachable block (ram,0x2c6424dc) */
/* WARNING: Removing unreachable block (ram,0x2c6424ce) */
/* WARNING: Removing unreachable block (ram,0x2c6424b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6426e4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c64278c,399,_LAB_2c642788,_LAB_2c642784,*(undefined1 *)(_LAB_2c64277c + 1),
                 *_LAB_2c64277c,*_LAB_2c642780);
  }
  if (*(int *)(param_1 + 4) != 2) {
    return;
  }
  iVar3 = FUN_2c48a2b8();
  uVar2 = _LAB_2c642528;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c64278c,0x1a1,_LAB_2c64279c,_LAB_2c642798);
  }
  bVar1 = *_LAB_2c642500;
  switch((uint)bVar1) {
  case 0:
    *_LAB_2c642500 = 3;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c642510,0x187,_LAB_2c642518,_LAB_2c64250c,
                 *(undefined4 *)(_LAB_2c642508 + (uint)bVar1 * 8 + 4),uVar2,
                 *(undefined4 *)(_LAB_2c642514 + 0x24));
  case 1:
    break;
  case 2:
    break;
  case 3:
  }
  if (*_LAB_2c6424fc != *_LAB_2c6424fc) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

