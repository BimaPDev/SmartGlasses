/* FUN_2c49344c @ 0x2c49344c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49344c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = param_1 - 1U & 0xff;
  if (8 < uVar4) {
    return 0;
  }
  if (*_LAB_2c493558 != 0) {
    FUN_2c644044(*_LAB_2c493558,3000);
  }
  iVar2 = _LAB_2c49355c + param_1 * 0x10;
  if (*(char *)(iVar2 + 1) == '\0') {
    pcVar3 = *(code **)(iVar2 + 4);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xf5,_LAB_2c493548,_LAB_2c49354c,_LAB_2c493544,uVar1,
            *(undefined4 *)(_LAB_2c493540 + uVar4 * 4));
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xfb,_LAB_2c493548,_LAB_2c49354c,_LAB_2c493550,
          *(undefined4 *)(_LAB_2c493540 + uVar4 * 4));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xef,_LAB_2c493548,_LAB_2c49354c,_LAB_2c493554,*(undefined4 *)(_LAB_2c493540 + uVar4 * 4))
  ;
}

