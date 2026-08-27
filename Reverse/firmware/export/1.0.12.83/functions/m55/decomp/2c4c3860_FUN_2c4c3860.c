/* FUN_2c4c3860 @ 0x2c4c3860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4c3860(uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = 0;
  uVar5 = 0;
  iVar4 = _LAB_2c4c38c4;
  do {
    if (*(byte *)(iVar4 + 0x7c) == param_1) {
      iVar4 = 0;
LAB_2c4c3894:
      *(char *)(iVar3 + _LAB_2c4c38c4 + 1) = *(char *)(iVar3 + _LAB_2c4c38c4 + 1) + '\x01';
      if ((code *)*_LAB_2c4c38c8 != (code *)0x0) {
        (*(code *)*_LAB_2c4c38c8)(uVar5 & 0xff,iVar4);
      }
      uVar2 = FUN_2c646ab8(*_LAB_2c4c38cc);
      if ((int)uVar2 < 0) {
        uVar2 = 0x80000000;
      }
      else {
        uVar2 = uVar2 & ~(1 << (iVar4 + uVar5 * 2 & 0xff));
      }
      return uVar2;
    }
    pbVar1 = (byte *)(iVar4 + 0x118);
    iVar4 = iVar4 + 0x138;
    if (*pbVar1 == param_1) {
      iVar3 = iVar3 + 0x9c;
      iVar4 = 1;
      goto LAB_2c4c3894;
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x138;
    if (uVar5 == 5) {
      return param_1;
    }
  } while( true );
}

