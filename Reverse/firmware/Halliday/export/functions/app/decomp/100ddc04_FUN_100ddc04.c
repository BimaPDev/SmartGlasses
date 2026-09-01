/* FUN_100ddc04 @ 0x100ddc04 */

undefined4 FUN_100ddc04(ushort *param_1,short param_2,ushort param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (param_1 == (ushort *)0x0) {
    FUN_10119dc2(DAT_100ddc40,DAT_100ddc3c,DAT_100ddc38,0x162);
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  if (param_1 != (ushort *)0x0) {
    bVar1 = *DAT_100df298;
    if (bVar1 != 0x3e) {
      uVar2 = *param_1;
      *DAT_100df298 = bVar1 + 1;
      *param_1 = (bVar1 & 0x3f) << 2 | (param_3 & 1) << 0xb | param_2 << 0xc | uVar2 & 0x701;
      *(byte *)(param_1 + 4) = (byte)param_1[4] & 0xfb;
      uVar4 = *DAT_100df29c;
      *DAT_100df29c = param_1;
      *(undefined4 *)(param_1 + 6) = uVar4;
      return 0;
    }
  }
  return 0xfffffffb;
}

