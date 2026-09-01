/* FUN_100e800c @ 0x100e800c */

undefined4 FUN_100e800c(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_1011dbf4(DAT_100e8060,0xffffffff,param_3,param_4,param_4);
  bVar1 = *(byte *)(DAT_100e8064 + 0x32);
  if (-1 < (int)((uint)bVar1 << 0x1f)) {
    iVar2 = param_1 * 0x28 + DAT_100e8064;
    if (param_3 != 0xffffffff) {
      param_3 = param_3 / 100;
    }
    *(char *)(iVar2 + 8) = (char)param_2;
    *(undefined4 *)(iVar2 + 0x2c) = param_4;
    *(short *)(iVar2 + 10) = (short)param_3;
  }
  if ((bVar1 & 3) != 2) {
    if (param_2 == 1) {
      FUN_1011e930();
    }
    else {
      FUN_1011e93a(param_1 & 0xff);
    }
  }
  FUN_100e7f70();
  return 0;
}

