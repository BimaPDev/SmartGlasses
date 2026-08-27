/* FUN_1409fec8 @ 0x1409fec8 */

void FUN_1409fec8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*DAT_1409ff38;
  if ((puVar4 == (uint *)0x0) || (*puVar4 == 0)) {
    return;
  }
  uVar1 = FUN_140a047c();
  if (*puVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)((int)puVar4 + uVar3 * 0x72 + 0x8a) == '\0') {
        if (uVar3 < 5) {
          uVar2 = FUN_140e5658((int)puVar4 + uVar3 * 0x72 + 0x6c,0,0x1e);
          FUN_140e5278(uVar2,param_1,param_2);
          FUN_140a0ebc();
          FUN_140a04dc(uVar1);
          FUN_140a0f2c();
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *puVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1409ff3c);
}

