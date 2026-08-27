/* FUN_2c139268 @ 0x2c139268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c139268(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 - 1U & 0xff) < 0xfe) {
    if (param_2 != 0) {
      if (*_DAT_2c139334 == '\0') {
        FUN_2c135988(4,0x8c,_DAT_2c13934c,_DAT_2c139348,_DAT_2c139350);
        FUN_2c1391f8();
      }
      puVar4 = (undefined1 *)func_0x2c1424f0(8);
      puVar3 = _DAT_2c13935c;
      puVar2 = _DAT_2c139338;
      uVar5 = *_DAT_2c139338;
      *puVar4 = (char)param_1;
      *(int *)(puVar4 + 4) = param_2;
      FUN_2c13f29c(uVar5,0xffffffff);
      iVar6 = func_0x2c13e248(*puVar3,_DAT_2c13933c,puVar4);
      if (iVar6 == 0) {
        func_0x2c13e1a8(*puVar3,puVar4);
        uVar5 = *puVar2;
      }
      else {
        FUN_2c135988(4,0x96,_DAT_2c13934c,_DAT_2c139348,_DAT_2c139344,_DAT_2c139340,param_1,param_2)
        ;
        func_0x2c142500(puVar4);
        uVar5 = *puVar2;
      }
      FUN_2c13eeb8();
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getCurrentExceptionNumber();
        uVar7 = uVar7 & 0x1ff;
      }
      if (uVar7 == 0) {
        iVar6 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar6 = isIRQinterruptsEnabled();
        }
        if (iVar6 == 0) {
          iVar6 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            iVar6 = getBasePriority();
          }
          if (iVar6 == 0) {
            software_interrupt(0);
            return uVar5;
          }
        }
      }
      FUN_2c13ee98(uVar5,0xfffffffa);
      return 0xfffffffa;
    }
    uVar5 = FUN_2c135988(4,0x87,_DAT_2c13934c,_DAT_2c139348,_DAT_2c139358);
  }
  else {
    uVar5 = FUN_2c135988(4,0x83,_DAT_2c13934c,_DAT_2c139348,_DAT_2c139354,param_1,_DAT_2c13934c,0x83
                        );
  }
  return uVar5;
}

