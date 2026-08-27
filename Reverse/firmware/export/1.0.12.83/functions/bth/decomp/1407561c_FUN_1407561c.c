/* FUN_1407561c @ 0x1407561c */

void FUN_1407561c(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar3 = DAT_14075650;
  pbVar2 = DAT_14075648;
  bVar1 = *DAT_14075648;
  *(undefined4 *)(DAT_1407564c + (uint)bVar1 * 4) = unaff_lr;
  uVar4 = bVar1 + 1;
  *pbVar2 = (char)uVar4 + (char)(uint)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x24) * -0x14;
  if (*DAT_140a20f0 != 0) {
    FUN_140e52d8();
    return;
  }
  return;
}

