/* FUN_2c64840a @ 0x2c64840a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64840a(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_4 = (char)param_2;
  if (param_2 == 0) {
    iVar3 = *_DAT_2c64846c;
    piVar1 = _DAT_2c64846c;
  }
  else {
    func_0x2c6739a8(_LAB_2c648480,0x800,_LAB_2c64847c);
    func_0x2c6745c8(_LAB_2c648488,0x800,_LAB_2c648484);
    uVar2 = FUN_2c6440f0(_DAT_2c64848c,0);
    piVar1 = _DAT_2c64846c;
    *_LAB_2c648490 = uVar2;
    iVar3 = *piVar1;
  }
  if (iVar3 == 0) {
    iVar3 = FUN_2c64419c(_DAT_2c648494);
    *piVar1 = iVar3;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x122,_DAT_2c648478,_LAB_2c648474,_DAT_2c648470,param_2);
}

