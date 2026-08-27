/* FUN_1409fca4 @ 0x1409fca4 */

void FUN_1409fca4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)*DAT_1409fd40;
  if ((puVar4 != (uint *)0x0) && (uVar5 = *puVar4, uVar5 != 0)) {
    uVar3 = 0;
    do {
      iVar1 = FUN_140db784((int)puVar4 + (short)uVar3 * 0x72 + 0x1a,param_1,6);
      if (iVar1 == 0) {
        if ((int)(uVar3 << 0x18) < 0) {
          return;
        }
        uVar2 = FUN_140a047c();
        if (uVar3 < *puVar4 - 1) {
          do {
            FUN_140e5278(uVar3 * 0x72 + 0x1a + (int)puVar4,uVar3 * 0x72 + 0x8c + (int)puVar4,0x72);
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < *puVar4 - 1);
        }
        FUN_140e5658((int)puVar4 + uVar3 * 0x72 + 0x1a,0);
        *puVar4 = *puVar4 - 1;
        FUN_140a0ebc();
        FUN_140a04dc(uVar2);
        FUN_140a0f2c();
        return;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar5);
  }
  return;
}

