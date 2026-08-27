/* FUN_2c012032 @ 0x2c012032 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012032(int param_1,uint *param_2,ushort param_3,byte *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  ushort *puVar7;
  ushort uStack_1e;
  uint uStack_1c;
  
  pcVar1 = _DAT_2c0120e8;
  uVar6 = 0xa75;
  uStack_1c = *param_2;
  uVar5 = 0;
  if (1 < *param_4 - 1) {
    uVar6 = 0x25d;
  }
  puVar7 = _DAT_2c0120ec;
  uStack_1e = param_3;
  if (*_DAT_2c0120e8 == '\0') {
    FUN_2c012f74(0xf,&uStack_1e);
    if ((uStack_1e & 0xfff) != 0) {
      uVar6 = uStack_1e & 0xfff;
    }
    uStack_1e = (ushort)(((uint)uStack_1e << 0x14) >> 0x14);
    uVar4 = func_0x2c013cbc(uVar6,0);
    uVar5 = uRam2c0120f4;
    puVar7 = _DAT_2c0120ec;
    *_DAT_2c0120ec = (ushort)uVar4;
    uVar2 = uRam2c0120f8;
    *pcVar1 = '\x01';
    FUN_2c00b820(4,0x269a,uRam2c0120fc,uRam2c012100,uVar2,uVar5,uStack_1e,uVar6,uVar4);
    uVar5 = extraout_r1;
  }
  iVar3 = (param_1 - (uint)*puVar7) * 100;
  if ((*_DAT_2c0120e4 ^ uStack_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(((iVar3 + (int)((ulonglong)((longlong)_FUN_2c0120f0 * (longlong)iVar3) >> 0x20) >>
                  8) - (iVar3 >> 0x1f)) + 0x19,uVar5,*_DAT_2c0120e4 ^ uStack_1c,0);
  }
  return;
}

