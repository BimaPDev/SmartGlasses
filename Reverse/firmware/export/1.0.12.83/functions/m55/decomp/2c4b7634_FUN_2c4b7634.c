/* FUN_2c4b7634 @ 0x2c4b7634 */

uint FUN_2c4b7634(undefined4 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  
  bVar1 = FUN_2c49ad00();
  uVar5 = (uint)bVar1;
  if ((1 << uVar5 & param_2) != 0) {
    bVar1 = FUN_2c49ad00(0x100);
    bVar6 = bVar1 <= uVar5;
    if (bVar6) {
      uVar5 = uVar5 - bVar1 & 0xff;
    }
    uVar2 = 0;
    puVar4 = DAT_2c4b76c8;
    do {
      if (((1 << (uVar2 & 0xff) & param_3) != 0) &&
         (((0x10 << (uVar2 & 0xff) & *(uint *)(DAT_2c4b76cc + 0xc4)) != 0) == bVar6)) {
        if (bVar6) {
          uVar3 = (7 << (uVar2 * 3 & 0xff) & *(uint *)(DAT_2c4b76cc + 200)) >> (uVar2 * 3 & 0xff) &
                  0xff;
        }
        else {
          uVar3 = (*puVar4 & 0xf) >> 1;
        }
        if (uVar5 == uVar3) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 != 6);
  }
  return 8;
}

