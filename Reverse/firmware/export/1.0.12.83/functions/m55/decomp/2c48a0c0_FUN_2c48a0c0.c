/* FUN_2c48a0c0 @ 0x2c48a0c0 */

void FUN_2c48a0c0(code *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = DAT_2c48a1bc;
  if (param_1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19e,DAT_2c48a1d0,DAT_2c48a1cc,DAT_2c48a1ec);
  }
  if (*DAT_2c48a1b8 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1a2,DAT_2c48a1d0,DAT_2c48a1cc,DAT_2c48a1dc);
  }
  FUN_2c644044(*DAT_2c48a1bc,0xffffffff);
  puVar3 = (undefined4 *)FUN_2c4728e8(5,4);
  puVar2 = DAT_2c48a1c0;
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1a8,DAT_2c48a1d0,DAT_2c48a1cc,DAT_2c48a1e8,DAT_2c48a1e4);
  }
  *puVar3 = param_1;
  iVar4 = FUN_2c4858f0(*puVar2,DAT_2c48a1c4,puVar3);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1af,DAT_2c48a1d0,DAT_2c48a1cc,DAT_2c48a1c8);
  }
  FUN_2c4857c8(*puVar2,puVar3);
  (*param_1)(*DAT_2c48a1d8,*DAT_2c48a1d4);
  FUN_2c644080(*puVar1);
  return;
}

