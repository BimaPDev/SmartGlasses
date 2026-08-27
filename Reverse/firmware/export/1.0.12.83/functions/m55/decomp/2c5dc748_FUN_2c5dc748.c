/* FUN_2c5dc748 @ 0x2c5dc748 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dc748(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = MasterStackPointer - 1 & 0xff;
    uVar1 = _LAB_2c5dc7f4;
    if (uVar2 < 0x16) {
      uVar1 = *(undefined4 *)(_LAB_2c5dc7e4 + uVar2 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5dc7f0,0x71,_LAB_2c5dc7ec,_LAB_2c5dc7f8,uVar1);
  }
  uVar2 = *param_1 - 1 & 0xff;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = _LAB_2c5dc7f4;
    if (uVar2 < 0x16) {
      uVar1 = *(undefined4 *)(_LAB_2c5dc7e4 + uVar2 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5dc7f0,0x76,_LAB_2c5dc7ec,_LAB_2c5dc7fc,uVar1);
  }
  uVar1 = _LAB_2c5dc7f4;
  if (uVar2 < 0x16) {
    uVar1 = *(undefined4 *)(_LAB_2c5dc7e4 + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5dc7f0,0x7a,_LAB_2c5dc7ec,_LAB_2c5dc7e8,uVar1,*(undefined4 *)(param_1 + 4));
}

