/* FUN_2c641944 @ 0x2c641944 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c641944(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c6442a4(_LAB_2c64198c,0);
  *_LAB_2c641990 = iVar1;
  if (iVar1 == 0) {
    uVar3 = 0x88;
    uVar2 = _LAB_2c64199c;
  }
  else {
    iVar1 = FUN_2c62bdd8(_LAB_2c641994,0x1f,0);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0x8e;
    uVar2 = _LAB_2c6419a4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c6419a0,uVar3,_LAB_2c641998,uVar2);
}

