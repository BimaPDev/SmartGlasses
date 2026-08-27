/* FUN_2c134978 @ 0x2c134978 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c134978(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  func_0x2c144a1c();
  uVar2 = uRam58000060;
  uVar1 = uRam5800005c;
  if (param_1 == 1) {
    uRam58000084 = *_DAT_2c134af8;
    uRam58000088 = _DAT_2c134af8[1];
    if ((uRam5800008c & 0x3000) == 0) {
      uRam58000058 = uRam58000058 & 0xe1ffffff | 0x1a000000;
    }
    else {
      uRam58000058 = uRam58000058 & 0xe1ffffff | 0x16000000;
    }
    uVar6 = uRam5800008c & 0x2000;
    uVar5 = uRam5800008c;
    if (uVar6 == 0) {
      uRam58000064 = 1;
      if ((int)(uRam58000060 << 0x12) < 0) goto LAB_2c1349c4;
      goto LAB_2c1349d4;
    }
  }
  else {
    uRam58000084 = *_DAT_2c134af8;
    uRam58000088 = _DAT_2c134af8[1];
    uRam58000058 = uRam58000058 & 0xe1ffffff | 0x1a000000;
    uVar5 = 0;
    if ((uRam58000060 & 0x2000) == 0) {
LAB_2c1349d8:
      uRam58000064 = 0xc;
    }
    else {
      uVar5 = 0;
LAB_2c1349c4:
      uRam58000064 = 0x2000;
LAB_2c1349d4:
      if (-1 < (int)(uVar5 << 0x13)) goto LAB_2c1349d8;
    }
    uRam58000060 = 0x18;
    if (param_1 != 1) {
      uVar6 = 0;
      *(undefined4 *)(_DAT_2c134afc + 0x10) = 0;
      goto LAB_2c134a1c;
    }
    uVar6 = 0;
  }
  *(undefined4 *)(_DAT_2c134afc + 0x10) = 4;
LAB_2c134a1c:
  DataSynchronizationBarrier(0xf);
  WaitForInterrupt();
  uRam5800005c = uRam5800005c | 0x60000000;
  if (uVar6 == 0) {
    if ((int)(uVar5 << 0x13) < 0) {
      iVar3 = FUN_2c14486c();
      do {
        if ((int)(uRam5800008c << 0x11) < 0) break;
        iVar4 = FUN_2c14486c();
      } while ((uint)(iVar4 - iVar3) < 0x22);
    }
    else {
      if (param_1 == 1) {
        func_0x2c144878(0x21);
      }
      uRam58000064 = 2;
    }
    if ((int)(uVar2 << 0x12) < 0) {
      uRam58000060 = 0x2000;
      iVar3 = FUN_2c14486c();
      do {
        iVar4 = FUN_2c14486c();
      } while ((uint)(iVar4 - iVar3) < 5);
    }
  }
  else {
    iVar3 = FUN_2c14486c();
    do {
      if ((int)(uRam5800008c << 0x10) < 0) break;
      iVar4 = FUN_2c14486c();
    } while ((uint)(iVar4 - iVar3) < 0x27);
  }
  uRam58000060 = uVar2;
  uRam58000064 = ~uVar2;
  uRam5800005c = uVar1;
  return 0;
}

