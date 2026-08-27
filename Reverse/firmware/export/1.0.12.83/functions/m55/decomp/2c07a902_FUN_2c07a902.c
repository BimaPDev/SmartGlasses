/* FUN_2c07a902 @ 0x2c07a902 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c07a902(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  uint uVar6;
  int unaff_r6;
  uint uVar7;
  uint unaff_r7;
  
  uVar1 = _DAT_2c07aa5c;
  uVar2 = unaff_r4 + 7;
  uVar7 = unaff_r6 - 0xf0;
  uVar6 = (int)uVar2 >> 0x18;
  uVar4 = (((int)uVar7 >> 0x14) - uVar2) - (uint)(uVar7 < 0xe0);
  *(undefined4 *)((uVar2 >> (uVar4 & 0xff)) + 0x24) = _DAT_2c07aa5c;
  *(short *)(uVar4 * 2) = (short)uVar7;
  if (((int)uVar2 >> 0x1f & 1U) == 0 || -1 < (int)uVar2) {
    *(uint *)(uVar4 + 0x24) = uVar4;
    *(char *)(uVar4 + 3) = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (param_2 * 4 + unaff_r4) * 0x10000;
  do {
    uVar5 = uVar2 * 2 + uVar6;
    uVar3 = uVar7 * 8;
    if ((uVar7 & 0x20000000) != 0 && uVar3 != 0) {
LAB_2c07ab1c:
      *(short *)((uVar3 - uVar5) + 0x18) = (short)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (199 < uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!SBORROW4(uVar2 - 199,199)) {
      if (199 < uVar2 - 0x18e) {
        *(uint *)(uVar4 + 0x14) = uVar3;
        halt_baddata();
      }
      uVar3 = (uint)*(ushort *)(uVar3 + 0x30);
      uVar4 = uVar5 & 0x40000000;
      uVar5 = uVar6;
      if (SBORROW4(uVar2 - 0x255,199)) {
        if (uVar4 != 0) {
          *(undefined4 *)(_DAT_2c07ae18 + uVar6) = 0x2c07ab68;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(uint *)(uVar3 + 0x10) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c07ab1c;
    }
    *(char *)(uVar4 + 9) = (char)unaff_r7;
    uVar7 = uVar7 - 0xec;
    uVar2 = uVar2 - 0x18e;
    unaff_r7 = uVar4;
  } while( true );
}

