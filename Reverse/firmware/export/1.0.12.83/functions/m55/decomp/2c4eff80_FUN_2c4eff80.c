/* FUN_2c4eff80 @ 0x2c4eff80 */

undefined4 FUN_2c4eff80(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int in_r12;
  
  do {
    uVar1 = (uint)*(byte *)(param_1 + param_2 * 2);
    bVar2 = *(byte *)(param_1 + 1 + param_2 * 2);
    uVar3 = (uint)bVar2;
    if (uVar1 - 0x41 < 6) {
      uVar1 = uVar1 - 0x37 & 0xff;
      if (5 < uVar3 - 0x41) goto LAB_2c4effd0;
LAB_2c4effa2:
      bVar2 = bVar2 - 0x37;
LAB_2c4effa6:
      *(byte *)(in_r12 + 1) = bVar2 | (byte)(uVar1 << 4);
    }
    else {
      if (uVar1 - 0x61 < 6) {
        uVar1 = uVar1 - 0x57 & 0xff;
      }
      else {
        uVar1 = uVar1 - 0x30 & 0xff;
        if (9 < uVar1) {
          return 1;
        }
      }
      if (uVar3 - 0x41 < 6) goto LAB_2c4effa2;
LAB_2c4effd0:
      if (5 < uVar3 - 0x61) {
        bVar2 = (byte)(uVar3 - 0x30);
        if (9 < (uVar3 - 0x30 & 0xff)) {
          return 1;
        }
        goto LAB_2c4effa6;
      }
      *(byte *)(in_r12 + 1) = bVar2 + 0xa9 | (byte)(uVar1 << 4);
    }
    in_r12 = in_r12 + 1;
    param_2 = param_2 + 1;
    if (param_3 >> 1 <= param_2) {
      return 0;
    }
  } while( true );
}

