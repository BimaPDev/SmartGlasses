/* FUN_100eee10 @ 0x100eee10 */

/* WARNING: Removing unreachable block (ram,0x100eed52) */
/* WARNING: Removing unreachable block (ram,0x100eed56) */
/* WARNING: Removing unreachable block (ram,0x100eed5e) */
/* WARNING: Removing unreachable block (ram,0x100eed6c) */

uint FUN_100eee10(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)(byte)((char *)*DAT_100eee44)[2];
  if (*(char *)*DAT_100eee44 == '\0') {
    if (uVar5 == param_1) {
      uVar5 = 1;
    }
    else if (uVar5 + 1 == param_1) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
  }
  else if (uVar5 == param_1) {
    uVar5 = 8;
  }
  else if (uVar5 + 1 == param_1) {
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  iVar1 = FUN_100f4084();
  uVar3 = uVar5;
  if ((iVar1 != 0) && (uVar5 != 0)) {
    iVar2 = DAT_100eed7c;
    if ((iVar1 != 0x5a) && (iVar2 = DAT_100eed78, iVar1 != 0xb4)) {
      iVar2 = DAT_100eed78 + 4;
    }
    if (uVar5 != 0) {
      uVar4 = 0;
      uVar3 = 0;
      do {
        if (((int)uVar5 >> (uVar4 & 0xff)) << 0x1f < 0) {
          uVar3 = uVar3 | *(byte *)(iVar2 + uVar4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 4);
    }
  }
  return uVar3;
}

