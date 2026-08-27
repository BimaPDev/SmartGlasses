/* FUN_2c63e8a0 @ 0x2c63e8a0 */

char FUN_2c63e8a0(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = DAT_2c63e950;
  puVar2 = DAT_2c63e944;
  if (param_1 < 0x1e) {
    iVar4 = *DAT_2c63e940;
    iVar5 = DAT_2c63e94c;
  }
  else {
    iVar5 = DAT_2c63e93c;
    if (0x3c < param_1) {
      iVar5 = DAT_2c63e938;
    }
    iVar4 = *DAT_2c63e940;
  }
  if (iVar4 == 0) {
    return '\0';
  }
  FUN_2c639338(iVar4,param_1,1);
  FUN_2c62c678(*puVar3);
  FUN_2c6316ec(*puVar2,0x100);
  iVar4 = DAT_2c63e94c;
  if ((0x1d < param_2) && (iVar4 = DAT_2c63e93c, 0x3c < param_2)) {
    iVar4 = DAT_2c63e938;
  }
  if (iVar4 != iVar5) {
    FUN_2c63140c(*puVar2,iVar5);
  }
  if ((param_1 == 0) || (param_1 == 100)) {
    FUN_2c62c5c4(*puVar3);
  }
  cVar1 = *DAT_2c63e948;
  if (cVar1 == '\0') {
    return '\x01';
  }
  FUN_2c490020(0);
  return cVar1;
}

