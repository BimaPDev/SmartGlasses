/* FUN_1007c61c @ 0x1007c61c */

undefined1 FUN_1007c61c(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_r3;
  
  iVar1 = DAT_1007c67c;
  if (((int)(*(uint *)(DAT_1007c67c + 0x1d0) << 0xc) < 0) ||
     ((*(uint *)(DAT_1007c67c + 0x1d0) & 0x400) == 0)) {
    FUN_100a5b78(((int)PTR_DAT_1007c684 - (int)PTR_DAT_1007c680) * 0x20 & 0xff00U | 0x2d80031,
                 PTR_s_bat_charge_get_cv_state_1007c68c,PTR_s_no_charge__cv_ret_0__1007c688,
                 PTR_DAT_1007c680,in_r3);
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_1007c5fc(*(undefined1 *)(DAT_1007c67c + 9));
    if ((int)(uint)*(ushort *)(iVar1 + 0x160) < (iVar3 * 0x14) / 100) {
      uVar2 = 2;
    }
    else {
      uVar2 = (int)(uint)*(ushort *)(iVar1 + 0x160) < (iVar3 * 0x32) / 100;
    }
  }
  return uVar2;
}

