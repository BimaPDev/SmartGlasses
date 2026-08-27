/* FUN_2c4901b2 @ 0x2c4901b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4901b2(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char in_ZR;
  
  piVar2 = _DAT_2c490254;
  piVar1 = _DAT_2c49024c;
  if (in_ZR != '\0') {
    if (*_DAT_2c49024c == 0) {
      if (*_LAB_2c490250 != '\x01') goto LAB_2c4901b6;
      *_LAB_2c490250 = '\0';
      iVar4 = *piVar2 + -1;
      *piVar2 = iVar4;
    }
    else {
      FUN_2c644044(*_DAT_2c49024c,0xffffffff);
      piVar2 = _DAT_2c490254;
      if (*_LAB_2c490250 != '\x01') {
        if (*piVar1 != 0) {
          FUN_2c644080();
        }
        goto LAB_2c4901b6;
      }
      iVar3 = *piVar1;
      iVar4 = *_DAT_2c490254;
      *_LAB_2c490250 = '\0';
      iVar4 = iVar4 + -1;
      *piVar2 = iVar4;
      if (iVar3 != 0) {
        FUN_2c644080();
      }
    }
    func_0x2c4c4500(0);
    func_0x2c4c46a0(0);
    if (iVar4 == 0) {
      func_0x2c492c68(2);
    }
    piVar1 = _LAB_2c490258;
    if ((-1 < *_LAB_2c490258) && (*_LAB_2c490258 < 0x15)) {
      *(undefined4 *)(_DAT_2c49025c + *_LAB_2c490258 * 0x18 + 0x14) = 0;
    }
    *piVar1 = -1;
  }
LAB_2c4901b6:
  FUN_2c4969dc(0x22,0);
  return 1;
}

