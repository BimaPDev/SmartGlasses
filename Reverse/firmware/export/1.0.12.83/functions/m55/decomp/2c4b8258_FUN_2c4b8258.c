/* FUN_2c4b8258 @ 0x2c4b8258 */

undefined4 FUN_2c4b8258(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = DAT_2c4b82a8;
  puVar1 = DAT_2c4b82a4;
  DAT_2c4b82a4[0x15] = DAT_2c4b82a4[0x15] & 0xfdffffff;
  puVar1[0x1d2] = puVar1[0x1d2] & 0xffbfffff;
  *puVar1 = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  *puVar2 = 0;
  FUN_2c673f38();
  FUN_2c6742e8();
  FUN_2c002840();
  FUN_2c4b66f4(1);
  puVar4 = DAT_2c4b82b8;
  puVar3 = DAT_2c4b82b4;
  puVar1 = DAT_2c4b82b0;
  *DAT_2c4b82ac = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  return 0;
}

