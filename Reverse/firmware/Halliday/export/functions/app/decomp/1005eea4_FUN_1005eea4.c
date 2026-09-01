/* FUN_1005eea4 @ 0x1005eea4 */

void FUN_1005eea4(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = DAT_1005eedc;
  puVar3 = DAT_1005eed8;
  puVar2 = DAT_1005eed4;
  puVar1 = DAT_1005eed0;
  iVar5 = 8;
  do {
    *puVar1 = 4;
    if ((param_1 & 0x80) == 0) {
      *puVar2 = 0x4000;
    }
    else {
      *puVar3 = 0x4000;
    }
    iVar5 = iVar5 + -1;
    *puVar4 = 4;
    param_1 = (param_1 & 0x7f) << 1;
  } while (iVar5 != 0);
  return;
}

