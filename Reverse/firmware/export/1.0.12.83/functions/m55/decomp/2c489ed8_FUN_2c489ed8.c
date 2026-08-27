/* FUN_2c489ed8 @ 0x2c489ed8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c489ed8(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = _LAB_2c48a068;
  pcVar1 = _LAB_2c48a064;
  if (*_LAB_2c48a060 == '\0') {
    if (*_LAB_2c48a064 == '\0') {
      if (*_LAB_2c48a068 == 0) {
        iVar4 = FUN_2c64419c(_LAB_2c48a0ac);
        *piVar2 = iVar4;
      }
      FUN_2c485688();
      uVar3 = FUN_2c4856c8(_LAB_2c48a06c,0);
      *_LAB_2c48a070 = uVar3;
      *pcVar1 = '\x01';
    }
    pcVar1 = _LAB_2c48a074;
    piVar2 = _LAB_2c48a068;
    if (*_LAB_2c48a074 == '\0') {
      if (*_LAB_2c48a068 == 0) {
        iVar4 = FUN_2c64419c(_LAB_2c48a0ac);
        *piVar2 = iVar4;
      }
      FUN_2c485688();
      uVar3 = FUN_2c4856c8(_LAB_2c48a06c,0);
      *_LAB_2c48a078 = uVar3;
      *pcVar1 = '\x01';
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x164,_LAB_2c48a088,_LAB_2c48a084,_LAB_2c48a07c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x174,_LAB_2c48a088,_LAB_2c48a084,_LAB_2c48a0a8);
}

