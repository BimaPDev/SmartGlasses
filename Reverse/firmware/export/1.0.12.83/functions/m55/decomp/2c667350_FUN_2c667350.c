/* FUN_2c667350 @ 0x2c667350 */

undefined4 FUN_2c667350(void)

{
  double dVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  double in_d0;
  
  uVar3 = FUN_2c667bcc();
  dVar1 = DAT_2c667390;
  if ((!NAN(in_d0)) && ((int)((uint)(in_d0 < DAT_2c667390) << 0x1f) < 0)) {
    puVar2 = (undefined4 *)FUN_2c6685e0();
    *puVar2 = 0x21;
    return SUB84(dVar1 / dVar1,0);
  }
  return uVar3;
}

