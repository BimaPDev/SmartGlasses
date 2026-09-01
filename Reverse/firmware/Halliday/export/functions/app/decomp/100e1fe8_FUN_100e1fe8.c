/* FUN_100e1fe8 @ 0x100e1fe8 */

undefined4 FUN_100e1fe8(ushort *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 uVar7;
  
  if ((*param_1 == 0) || ((*param_1 & 0x101) != 1)) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar7 = FUN_100e1594();
    if ((int)uVar7 == 0) {
      FUN_100a5b78(DAT_100e2078 | (DAT_100e2074 - DAT_100e2070) * 0x20 & 0xff00U,DAT_100e207c);
      uVar3 = 0xffffff90;
    }
    else {
      FUN_10113cfc(DAT_100e2080,(int)((ulonglong)uVar7 >> 0x20),0xffffffff,0xffffffff);
      puVar2 = DAT_100e2084;
      puVar4 = param_1 + 4;
      puVar5 = (ushort *)0x0;
      for (puVar6 = (ushort *)*DAT_100e2084; puVar6 != (ushort *)0x0; puVar6 = *(ushort **)puVar6) {
        if (puVar4 == puVar6) {
          uVar3 = *(undefined4 *)(param_1 + 4);
          if (puVar5 == (ushort *)0x0) {
            puVar1 = DAT_100e2084 + 1;
            *DAT_100e2084 = uVar3;
            if (puVar4 == (ushort *)*puVar1) {
              puVar2[1] = uVar3;
            }
          }
          else {
            *(undefined4 *)puVar5 = uVar3;
            if (puVar4 == (ushort *)puVar2[1]) {
              puVar2[1] = puVar5;
            }
          }
          param_1[4] = 0;
          param_1[5] = 0;
          break;
        }
        puVar5 = puVar6;
      }
      FUN_100e14a0();
      uVar3 = 0;
    }
  }
  return uVar3;
}

