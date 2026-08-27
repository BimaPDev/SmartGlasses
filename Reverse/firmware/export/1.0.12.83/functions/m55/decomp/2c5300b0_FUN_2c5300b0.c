/* FUN_2c5300b0 @ 0x2c5300b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5300b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = _LAB_2c530258;
  uVar1 = _LAB_2c530228;
  if (*(char *)(param_1 + 4) == '\x1f') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c530234,0xa3,_LAB_2c530230,_LAB_2c530260);
  }
  piVar3 = (int *)*_LAB_2c530224;
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c530234,0x56,_LAB_2c530254,_LAB_2c530250);
  }
  if (*piVar3 == 0) {
    *(undefined1 *)(param_1 + 4) = 0x1f;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c530234,0xfa,_LAB_2c530230,uVar2);
  }
  if (piVar3[2] != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 4) = 0x15;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c530234,0xff,_LAB_2c530230,uVar1);
}

