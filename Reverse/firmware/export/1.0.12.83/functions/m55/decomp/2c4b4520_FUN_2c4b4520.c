/* FUN_2c4b4520 @ 0x2c4b4520 */

void FUN_2c4b4520(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 2;
    while( true ) {
      uVar1 = FUN_2c4b44a4(4);
      if (((~uVar1 & 0xb05) == 0) || (999 < uVar2)) break;
      FUN_2c4b4238(uVar2);
      uVar2 = uVar2 << 1;
    }
    uVar2 = FUN_2c4b44a4(0);
    uVar1 = uVar2 & 0xffff0000 | uVar2 & 0xfc03 | 4;
    FUN_2c4b44b4(0,uVar2 & 0xffff0000 | uVar2 & 0xfc03 | 0x204);
    FUN_2c4b4238(1);
    FUN_2c4b44b4(0,uVar1);
    FUN_2c4b4238(5);
    FUN_2c4b44b4(0,uVar1 | 2);
    FUN_2c4b4238(1);
    return;
  }
  iVar3 = 2;
  uVar2 = FUN_2c4b44a4(0);
  FUN_2c4b44b4(0,uVar2 & 0xfffffffd);
  FUN_2c4b4238(1);
  FUN_2c4b44b4(0,uVar2 & 0xffff0000 | uVar2 & 0xfc01 | 0x300);
  FUN_2c4b4238(1);
  FUN_2c4b44b4(0,uVar2 & 0xffff0000 | uVar2 & 0xfc01 | 0x100);
  FUN_2c4b4238(5);
  do {
    uVar2 = FUN_2c4b44a4(0);
    FUN_2c4b44b4(0,uVar2 | 0x80000);
    FUN_2c4b44b4(0,uVar2 | 0x81000);
    FUN_2c4b4238(5);
    FUN_2c4b44b4(0,(uVar2 | 0x81000) & 0xffffefff);
    FUN_2c4b44b4(0,uVar2 & 0xfff7efff);
    FUN_2c4b4238(iVar3);
    uVar2 = FUN_2c4b44a4(4);
    iVar3 = iVar3 << 1;
  } while ((~uVar2 & 0xb05) != 0);
  return;
}

