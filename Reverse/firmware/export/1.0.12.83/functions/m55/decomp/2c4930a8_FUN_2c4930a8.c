/* FUN_2c4930a8 @ 0x2c4930a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4930a8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *_LAB_2c493180;
  if (3 < iVar1) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x250,_LAB_2c493194,_LAB_2c4931a4,_LAB_2c4931a0);
  }
  iVar5 = 2;
  iVar4 = _LAB_2c493184;
  while (((uVar2 = (uint)*(byte *)(iVar4 + 0x18), uVar2 == 0 || (*(char *)(iVar4 + 0x20) == '\0'))
         || (iVar1 < 4))) {
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -0xc;
    if (iVar5 == -1) {
      if (3 < iVar1) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,600,_LAB_2c493194,_LAB_2c4931a4,_LAB_2c4931a8);
      }
      iVar4 = 4;
      iVar1 = _LAB_2c493198;
      while (((uVar2 = (uint)*(byte *)(iVar1 + 0x30), uVar2 == 0 ||
              (*(char *)(iVar1 + 0x38) == '\0')) || (*_LAB_2c493180 < 4))) {
        iVar4 = iVar4 + -1;
        iVar1 = iVar1 + -0xc;
        if (iVar4 == -1) {
          return;
        }
      }
      uVar3 = _LAB_2c493190;
      if (uVar2 < 9) {
        uVar3 = *(undefined4 *)(_LAB_2c49318c + uVar2 * 4);
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x25d,_LAB_2c493194,_LAB_2c4931a4,_LAB_2c49319c,iVar4,_LAB_2c4931ac,uVar3);
    }
  }
  uVar3 = _LAB_2c493190;
  if (uVar2 < 9) {
    uVar3 = *(undefined4 *)(_LAB_2c49318c + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x255,_LAB_2c493194,_LAB_2c4931a4,_LAB_2c493188,iVar5,_LAB_2c4931ac,uVar3);
}

