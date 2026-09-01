/* FUN_10009c2c @ 0x10009c2c */

undefined4 FUN_10009c2c(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *DAT_10009cc0;
  if (param_2 != (byte *)0x0) {
    bVar1 = param_2[1];
    bVar2 = *param_2;
    FUN_10119dc2(DAT_10009cc4,param_2,param_3,0,param_1,param_2,param_3);
    FUN_10119dc2(DAT_10009ccc,*(undefined4 *)(DAT_10009cc8 + (uint)bVar2 * 4),(uint)bVar1);
    if (-1 < (int)((uint)bVar1 << 0x1d)) {
      uVar5 = (uint)param_2[2];
      FUN_10119dc2(DAT_10009cc4);
      if (0xb < uVar5) {
        uVar5 = 0xc;
      }
      FUN_10119dc2(DAT_10009cd4,*(undefined4 *)(DAT_10009cd0 + uVar5 * 4),param_2[3]);
      if (bVar2 != 2) {
        bVar1 = param_2[6];
        *DAT_10009cd8 = *(undefined4 *)(param_2 + 4);
        iVar3 = (uint)bVar1 * 0x10000 + (uint)param_2[5] * 0x100 + (uint)param_2[4] +
                (uint)param_2[7] * 0x1000000;
        FUN_10119dc2(DAT_10009cc4);
        FUN_10119dc2(DAT_10009cdc,iVar3);
        FUN_1000ab14(7,iVar3);
      }
    }
  }
  if (*DAT_10009cc0 != iVar4) {
    FUN_1013cdc0();
  }
  return 1;
}

