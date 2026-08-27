/* FUN_2c493eb0 @ 0x2c493eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c493eb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_2c491d14();
  iVar4 = thunk_FUN_2c489a64();
  uVar3 = _LAB_2c491164;
  uVar2 = _LAB_2c491160;
  uVar1 = _LAB_2c49115c;
  if ((iVar4 == 0) && (*_LAB_2c491154 == '\0')) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x11b,_LAB_2c491168,_LAB_2c491164,_LAB_2c49116c);
  }
  if (*_LAB_2c491158 == '\0') {
    *_LAB_2c491158 = '\x01';
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x124,_LAB_2c491168,uVar3,uVar2,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x120,_LAB_2c491168,_LAB_2c491164,_LAB_2c491170,_LAB_2c49115c);
}

