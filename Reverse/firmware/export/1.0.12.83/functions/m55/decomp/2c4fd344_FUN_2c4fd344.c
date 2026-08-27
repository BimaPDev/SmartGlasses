/* FUN_2c4fd344 @ 0x2c4fd344 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fd344(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*param_1;
  if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4fd444);
  }
  iVar2 = _LAB_2c4fd428 + uVar1 * 0x18;
  if (*(int *)(iVar2 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x65,_LAB_2c4fd434,_LAB_2c4fd430,_LAB_2c4fd42c,uVar1,0,*(undefined4 *)(iVar2 + 8));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x65,_LAB_2c4fd434,_LAB_2c4fd430,_LAB_2c4fd42c,uVar1,*(int *)(iVar2 + 4),
        *(undefined4 *)(iVar2 + 8));
}

