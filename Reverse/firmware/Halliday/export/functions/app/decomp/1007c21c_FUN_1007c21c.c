/* FUN_1007c21c @ 0x1007c21c */

undefined4 FUN_1007c21c(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100567e0();
  FUN_100567cc(DAT_1007c260,uVar1 & 0x3f3fffff | 0x80800000);
  uVar2 = FUN_100567e0();
  FUN_100a5b78(((int)PTR_DAT_1007c264 - (int)PTR_DAT_1007c268) * 0x20 & 0xff00U | 0xd10031,
               PTR_s_pmuadc_digital_setting_1007c270,PTR_s_PMUADC_DIGCTL_0x_08x_1007c26c,uVar2);
  return 0;
}

