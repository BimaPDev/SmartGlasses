/* FUN_100e8184 @ 0x100e8184 */

undefined4 FUN_100e8184(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_100e81cc;
  FUN_1011ea48(DAT_100e81cc,0,0x38);
  uVar3 = DAT_100e81d0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  iVar2 = FUN_100a1c48(uVar3);
  if (iVar2 == 0) {
    *(undefined2 *)(iVar1 + 0x30) = 0xffff;
    uVar3 = 0;
  }
  else {
    FUN_100a5b78((DAT_100e81d8 - DAT_100e81d4) * 0x20 & 0xff00U | 0x16e0011,DAT_100e81e0,
                 DAT_100e81dc);
    uVar3 = 0xfffffff2;
  }
  return uVar3;
}

